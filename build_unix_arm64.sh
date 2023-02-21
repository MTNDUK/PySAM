#!/bin/sh

#
# Building for Mac
#
export ROOTDIR=/Users/imacuser/Public/Projects/GitHub/NREL
export LKDIR=/Users/imacuser/Public/Projects/GitHub/NREL/lk
export WEXDIR=/Users/imacuser/Public/Projects/GitHub/NREL/wex
export SSCDIR=/Users/imacuser/Public/Projects/GitHub/NREL/ssc
export SAMNTDIR=/Users/imacuser/Public/Projects/GitHub/NREL/SAM
export PYSAMDIR=/Users/imacuser/Public/Projects/GitHub/NREL/pysam
export RAPIDJSONDIR=/Users/imacuser/Public/Projects/GitHub/NREL/ssc

# Building libssc and libSAM_api
# requires $ROOTDIR/CMakeList.txt that contains lk, wex, ssc and sam as subdirectories

mkdir -p $ROOTDIR/cmake-build-release
cd $ROOTDIR/cmake-build-release || exit
cmake .. -DCMAKE_BUILD_TYPE=Release -DSAMAPI_EXPORT=1 -DSAM_SKIP_AUTOGEN=0 
cmake --build . --target SAM_api -j 

# Building the PyPi and Anaconda packages
# requires Anaconda installed with an environment per Python version from 3.8 to 3.10 (arm64 support for apple silicon)
# named pysam_build_3.8 pysam_build_3.9 pysam_build_3.10


cd $PYSAMDIR || exit
source $(conda info --base)/etc/profile.d/conda.sh
source ~/.env
rm -rf build
rm -rf dist/*

#for PYTHONENV in pysam_build_3.8 pysam_build_3.9 pysam_build_3.10
for PYTHONENV in pysam_build_3.9
do
   conda activate $PYTHONENV
   yes | pip install -r tests/requirements.txt
   yes | pip uninstall NREL-PySAM
   python setup_arm64.py install || exit
#   pytest -s tests
#   retVal=$?
#   if [ $retVal -ne 0 ]; then
#       echo "Error in Tests"
#       exit 1
#   fi
   python setup_arm64.py bdist_wheel
done


exit

yes | $PYSAMDIR/build_conda_arm64.sh || exit

#
# Building for Manylinux1
#

cd ..
docker pull quay.io/pypa/manylinux2014_aarch64
# docker run --rm -dit -v $(pwd):/io quay.io/pypa/manylinux2010_x86_64 /bin/bash
docker run --rm -v $(pwd):/io quay.io/pypa/manylinux2014_aarch64 /io/pysam/build_manylinux_arm64.sh

rename -s linux manylinux1 $PYSAMDIR/dist/*-linux_*

docker pull continuumio/anaconda
docker run --rm --env PYSAMDIR=/io/pysam -v $(pwd):/io continuumio/anaconda /io/pysam/build_conda_arm64.sh


#twine upload $PYSAMDIR/dist/*.whl
#anaconda upload -u nrel $PYSAMDIR/dist/osx-64/*.tar.bz2
#anaconda upload -u nrel $PYSAMDIR/dist/linux-64/*.tar.bz2

