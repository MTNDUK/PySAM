import json
import os
import tempfile
import requests
import tarfile
import shutil
from collections.abc import Iterable
from collections import OrderedDict

from files.version import __version__


doc_str = "" \
          "This page compares the PySAM Modules' input variables and the defaults for these input variables \n" \
          "between the current release and the last release.\n\nThis helps track which variables " \
          "and defaults have changed between releases to make it easier to notify users during version upgrade.\n\n" \
          "Below are lists for each PySAM Module:\n" \
          "    1. New Default configurations\n" \
          "    2. Removed Default configurations\n" \
          "    3. Modified Variables: New variables, Removed variables and Type-changed variables\n" \
          "    4. Modified Default Values"

#
# Download the SAM repo tagged for the previous PySAM Release from Github to compare defaults
#
previous_release = 0
resp = requests.get("https://api.github.com/repos/NREL/pysam/releases").json()
old_release = resp[previous_release]['name']
sam_resp = requests.get("https://api.github.com/repos/NREL/sam/tags").json()
for r in sam_resp:
    if r['name'] == old_release.lower().replace(' ', '-'):
        old_release = r['tarball_url']
        break
print(
    f"Comparing Current branch's SSC Variables with Release `{resp[previous_release]['name']}` published at "
    f"{resp[previous_release]['created_at']}")

tmpdir = tempfile.TemporaryDirectory()
print(f'Using temporary dir {tmpdir.name}')
with requests.get(old_release, stream=True) as File:
    # stream = true is required by the iter_content below
    sam_old_file = os.path.join(tmpdir.name, "pysam_old")
    with open(sam_old_file, 'wb') as fd:
        for chunk in File.iter_content(chunk_size=128):
            fd.write(chunk)

with tarfile.open(sam_old_file, "r:gz") as tf:
    tf.extractall(tmpdir.name)
    # To save the extracted file in directory of choice with same name as downloaded file.
    file_list_old = []
    for tarinfo in tf:
        if "defaults" in tarinfo.name and os.path.splitext(tarinfo.name)[1] == '.json':
            file_list_old.append(tarinfo.name)

sam_path = os.environ.get('SAMNTDIR')
api_path = os.path.join(sam_path, "api", "api_autogen", "library", "defaults")
file_list_new = []

for root, dirs, files in os.walk(api_path):
    for file in files:
        file_list_new.append(root + os.sep + file)

outfile_dict = {}

#
# Get changed default files
#

defaults_new = set([os.path.splitext(os.path.basename(i))[0] for i in file_list_new])
defaults_old = set([os.path.splitext(os.path.basename(i))[0] for i in file_list_old])

newly_added_defaults_dict = {}
for n in defaults_new - defaults_old:
    cmod, config = n.split('_')
    if cmod not in newly_added_defaults_dict.keys():
        newly_added_defaults_dict[cmod] = []
    newly_added_defaults_dict[cmod].append(config)
for k, v in newly_added_defaults_dict.items():
    v.sort()
outfile_dict["Cmods with new defaults files"] = newly_added_defaults_dict

newly_removed_defaults_dict = {}
for n in defaults_old - defaults_new:
    cmod, config = n.split('_')
    if cmod not in newly_removed_defaults_dict.keys():
        newly_removed_defaults_dict[cmod] = []
    newly_removed_defaults_dict[cmod].append(config)
for k, v in newly_removed_defaults_dict.items():
    v.sort()
newly_removed_defaults_dict.keys()

outfile_dict["Cmods with removed defaults files"] = newly_removed_defaults_dict


#
# Get variable changes
#

def get_flat_dict(defaults_json):
    output = {}
    for k, v in defaults_json.items():
        if type(v) is dict:
            output.update(get_flat_dict(v))
        else:
            if isinstance(v, Iterable):
                if min(v) == 0 and max(v) == 0:
                    v = [0]
            output[k] = v
    return output


def file_to_flat_dict(filename):
    with open(filename, 'r') as f:
        defaults_json = json.load(f)
        return get_flat_dict(defaults_json)


new_defaults_data = {}
for f in file_list_new:
    file_name = os.path.split(f)[1]
    new_defaults_data[file_name] = file_to_flat_dict(f)

old_defaults_data = {}
for f in file_list_old:
    f = os.path.join(tmpdir.name, f)
    file_name = os.path.split(f)[1]
    old_defaults_data[file_name] = file_to_flat_dict(f)

outfile_dict["Cmods with modified variables"] = {}
outfile_dict["Configs with modified defaults"] = {}

for k, new_data in new_defaults_data.items():
    if k in old_defaults_data:
        name = k.split('_')[0]
        config_name = k.split('.')[0]
        old_data = old_defaults_data[k]

        # First, compare sets
        new_key_set = set(new_data.keys())
        old_key_set = set(old_data.keys())

        addtl_keys = new_key_set.difference(old_key_set)

        if len(addtl_keys) > 0:
            if name not in outfile_dict["Cmods with modified variables"].keys():
                outfile_dict["Cmods with modified variables"][name] = {'Added variables': []}
            for ak in addtl_keys:
                if ak not in outfile_dict["Cmods with modified variables"][name]['Added variables']:
                    outfile_dict["Cmods with modified variables"][name]['Added variables'].append(ak)

        removed_keys = old_key_set.difference(new_key_set)

        if len(removed_keys) > 0:
            if name not in outfile_dict["Cmods with modified variables"].keys():
                outfile_dict["Cmods with modified variables"][name] = {'Removed variables': []}
            if 'Removed variables' not in outfile_dict["Cmods with modified variables"][name].keys():
                outfile_dict["Cmods with modified variables"][name]['Removed variables'] = []
            for rk in removed_keys:
                if rk not in outfile_dict["Cmods with modified variables"][name]['Removed variables']:
                    outfile_dict["Cmods with modified variables"][name]['Removed variables'].append(rk)

        all_keys = new_key_set.intersection(old_key_set)
        changed_keys = {}
        for key in all_keys:
            v_new = new_data[key]
            v_old = old_data[key]

            if type(v_new) != type(v_old):
                if not isinstance(v_new, (int, float)) or not isinstance(v_old, (int, float)):
                    if name not in outfile_dict["Cmods with modified defaults files"].keys():
                        outfile_dict["Cmods with modified variables"][name] = {'Type changed': []}
                    if key not in [r[0] for r in outfile_dict["Cmods with modified variables"][name]['Type changed']]:
                        outfile_dict["Cmods with modified variables"][name]['Type changed'] = [key, str(type(v_old)),
                                                                                               str(type(v_new))]
            if v_new != v_old:
                if isinstance(v_new, Iterable) and isinstance(v_old, Iterable):
                    if len(v_new) + len(v_old) >= 8760 * 2:
                        changed_keys[key] = [">=8760 truncated to 0 index", v_new[0], v_old[0]]
                    else:
                        changed_keys[key] = [v_old, v_new]
                else:
                    changed_keys[key] = [v_old, v_new]
        if len(changed_keys) > 0:
            if name not in outfile_dict["Configs with modified defaults"].keys():
                outfile_dict["Configs with modified defaults"][config_name] = {}
            outfile_dict["Configs with modified defaults"][config_name]['Changed variables'] = changed_keys
        # sort and order
        if name not in outfile_dict["Cmods with modified variables"]:
            continue
        if 'Removed variables' in outfile_dict["Cmods with modified variables"][name].keys():
            outfile_dict["Cmods with modified variables"][name]['Removed variables'].sort()
        if 'Added variables' in outfile_dict["Cmods with modified variables"][name].keys():
            outfile_dict["Cmods with modified variables"][name]['Added variables'].sort()
        if 'Type changed' in outfile_dict["Cmods with modified variables"][name].keys():
            outfile_dict["Cmods with modified variables"][name]['Type changed'].sort()

outfile_dict["Cmods with modified variables"] = OrderedDict(
    sorted(outfile_dict["Cmods with modified variables"].items()))
outfile_dict["Configs with modified defaults"] = OrderedDict(
    sorted(outfile_dict["Configs with modified defaults"].items()))

#
# Export, print and clean up
#

cmods = set(outfile_dict['Cmods with new defaults files'].keys())
cmods = cmods.union(set(outfile_dict['Cmods with removed defaults files'].keys()))
cmods = cmods.union(set(outfile_dict['Cmods with modified variables'].keys()))
cmods = cmods.union(set([k.split('_')[0] for k in outfile_dict['Configs with modified defaults']]))
cmods = list(cmods)
cmods.sort()

doc_dict = OrderedDict()
for c in cmods:
    doc_dict[c] = {}
    if c in outfile_dict['Cmods with new defaults files'].keys():
        doc_dict[c]['new_defaults'] = outfile_dict['Cmods with new defaults files'][c]
    if c in outfile_dict['Cmods with removed defaults files'].keys():
        doc_dict[c]['del_defaults'] = outfile_dict['Cmods with removed defaults files'][c]
    if c in outfile_dict['Cmods with modified variables'].keys():
        doc_dict[c]['mod_variables'] = outfile_dict['Cmods with modified variables'][c]
    def_dict = {}
    for k, v in outfile_dict['Configs with modified defaults'].items():
        if c in k:
            def_dict[k] = v['Changed variables']
    if len(def_dict) > 0:
        doc_dict[c]['mod_defaults'] = def_dict
    if len(doc_dict[c]) == 0:
        doc_dict.pop(c)

pysam_dir = os.environ.get("PYSAMDIR")

with open(os.path.join(pysam_dir, "docs", "VersionChanges.rst"), "w") as f:
    f.write('.. Version Changes:\n\n')
    f.write(f'Changes to Modules with Version {__version__}\n')
    f.write('===============================================\n\n')
    f.write(f'{doc_str}\n\n')
    for cmod, changes in doc_dict.items():
        f.write(cmod + "\n")
        f.write('************************************************\n\n')
        if 'new_defaults' in changes.keys():
            f.write(f':doc:`modules/{cmod}` New Default files:\n\n')
            for v in changes['new_defaults']:
                f.write(f"     - {v}\n")
            f.write("\n")
        if 'del_defaults' in changes.keys():
            f.write(f':doc:`modules/{cmod}` Removed Default files\n\n')
            for v in changes['del_defaults']:
                f.write(f"     - {v}\n")
            f.write("\n")
        if 'mod_variables' in changes.keys():
            f.write(f':doc:`modules/{cmod}` Modified Variables:\n\n')
            if 'Added variables' in changes['mod_variables']:
                f.write('    New variables:\n\n')
                for v in changes['mod_variables']['Added variables']:
                    f.write(f"         - {v}\n")
                f.write('\n')
            if 'Removed variables' in changes['mod_variables']:
                f.write('    Removed variables:\n\n')
                for v in changes['mod_variables']['Removed variables']:
                    f.write(f"         - {v}\n")
                f.write('\n')
            if 'Type changed' in changes['mod_variables']:
                f.write('    Type-changed variables:\n\n')
                for v in changes['mod_variables']['Type changed']:
                    f.write(f"         - {v}\n")
                f.write('\n')
        if 'mod_defaults' in changes.keys():
            f.write(f':doc:`modules/{cmod}` Modified Default Values:\n\n')
            for k, v in changes['mod_defaults'].items():
                f.write(f"     - {k}\n\n        {list(v.keys())}\n\n")
            f.write("\n")
        f.write('\n')

shutil.rmtree(tmpdir.name)
