#include <Python.h>

#include <SAM_TcsmoltenSalt.h>
#include <SAM_api.h>

#include "PySAM_utils.h"


/*
 * SolarResource Group
 */ 

static PyTypeObject SolarResource_Type;

static PyObject *
SolarResource_new(SAM_TcsmoltenSalt data_ptr)
{
	PyObject* new_obj = SolarResource_Type.tp_alloc(&SolarResource_Type,0);

	VarGroupObject* SolarResource_obj = (VarGroupObject*)new_obj;

	SolarResource_obj->data_ptr = (SAM_table)data_ptr;

	return new_obj;
}

/* SolarResource methods */

static PyObject *
SolarResource_assign(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "TcsmoltenSalt", "SolarResource")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
SolarResource_export(VarGroupObject *self, PyObject *args)
{
	PyTypeObject* tp = &SolarResource_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef SolarResource_methods[] = {
		{"assign",            (PyCFunction)SolarResource_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``SolarResource_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)SolarResource_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
SolarResource_get_solar_resource_data(VarGroupObject *self, void *closure)
{
	return PySAM_table_getter(SAM_TcsmoltenSalt_SolarResource_solar_resource_data_tget, self->data_ptr);
}

static int
SolarResource_set_solar_resource_data(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_table_setter(value, SAM_TcsmoltenSalt_SolarResource_solar_resource_data_tset, self->data_ptr);
}

static PyObject *
SolarResource_get_solar_resource_file(VarGroupObject *self, void *closure)
{
	return PySAM_string_getter(SAM_TcsmoltenSalt_SolarResource_solar_resource_file_sget, self->data_ptr);
}

static int
SolarResource_set_solar_resource_file(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_string_setter(value, SAM_TcsmoltenSalt_SolarResource_solar_resource_file_sset, self->data_ptr);
}

static PyGetSetDef SolarResource_getset[] = {
{"solar_resource_data", (getter)SolarResource_get_solar_resource_data,(setter)SolarResource_set_solar_resource_data,
	PyDoc_STR("*dict*: Weather resource data in memory\n\n*Required*: False"),
 	NULL},
{"solar_resource_file", (getter)SolarResource_get_solar_resource_file,(setter)SolarResource_set_solar_resource_file,
	PyDoc_STR("*str*: Local weather file path\n\n*Constraints*: LOCAL_FILE\n\n*Required*: False"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject SolarResource_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"TcsmoltenSalt.SolarResource",             /*tp_name*/
		sizeof(VarGroupObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		SolarResource_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		SolarResource_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * TimeOfDeliveryFactors Group
 */ 

static PyTypeObject TimeOfDeliveryFactors_Type;

static PyObject *
TimeOfDeliveryFactors_new(SAM_TcsmoltenSalt data_ptr)
{
	PyObject* new_obj = TimeOfDeliveryFactors_Type.tp_alloc(&TimeOfDeliveryFactors_Type,0);

	VarGroupObject* TimeOfDeliveryFactors_obj = (VarGroupObject*)new_obj;

	TimeOfDeliveryFactors_obj->data_ptr = (SAM_table)data_ptr;

	return new_obj;
}

/* TimeOfDeliveryFactors methods */

static PyObject *
TimeOfDeliveryFactors_assign(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "TcsmoltenSalt", "TimeOfDeliveryFactors")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
TimeOfDeliveryFactors_export(VarGroupObject *self, PyObject *args)
{
	PyTypeObject* tp = &TimeOfDeliveryFactors_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef TimeOfDeliveryFactors_methods[] = {
		{"assign",            (PyCFunction)TimeOfDeliveryFactors_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``TimeOfDeliveryFactors_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)TimeOfDeliveryFactors_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
TimeOfDeliveryFactors_get_dispatch_factor1(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor1_nget, self->data_ptr);
}

static int
TimeOfDeliveryFactors_set_dispatch_factor1(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor1_nset, self->data_ptr);
}

static PyObject *
TimeOfDeliveryFactors_get_dispatch_factor2(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor2_nget, self->data_ptr);
}

static int
TimeOfDeliveryFactors_set_dispatch_factor2(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor2_nset, self->data_ptr);
}

static PyObject *
TimeOfDeliveryFactors_get_dispatch_factor3(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor3_nget, self->data_ptr);
}

static int
TimeOfDeliveryFactors_set_dispatch_factor3(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor3_nset, self->data_ptr);
}

static PyObject *
TimeOfDeliveryFactors_get_dispatch_factor4(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor4_nget, self->data_ptr);
}

static int
TimeOfDeliveryFactors_set_dispatch_factor4(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor4_nset, self->data_ptr);
}

static PyObject *
TimeOfDeliveryFactors_get_dispatch_factor5(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor5_nget, self->data_ptr);
}

static int
TimeOfDeliveryFactors_set_dispatch_factor5(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor5_nset, self->data_ptr);
}

static PyObject *
TimeOfDeliveryFactors_get_dispatch_factor6(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor6_nget, self->data_ptr);
}

static int
TimeOfDeliveryFactors_set_dispatch_factor6(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor6_nset, self->data_ptr);
}

static PyObject *
TimeOfDeliveryFactors_get_dispatch_factor7(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor7_nget, self->data_ptr);
}

static int
TimeOfDeliveryFactors_set_dispatch_factor7(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor7_nset, self->data_ptr);
}

static PyObject *
TimeOfDeliveryFactors_get_dispatch_factor8(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor8_nget, self->data_ptr);
}

static int
TimeOfDeliveryFactors_set_dispatch_factor8(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor8_nset, self->data_ptr);
}

static PyObject *
TimeOfDeliveryFactors_get_dispatch_factor9(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor9_nget, self->data_ptr);
}

static int
TimeOfDeliveryFactors_set_dispatch_factor9(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factor9_nset, self->data_ptr);
}

static PyObject *
TimeOfDeliveryFactors_get_dispatch_factors_ts(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factors_ts_aget, self->data_ptr);
}

static int
TimeOfDeliveryFactors_set_dispatch_factors_ts(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_array_setter(value, SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_factors_ts_aset, self->data_ptr);
}

static PyObject *
TimeOfDeliveryFactors_get_dispatch_sched_weekday(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_sched_weekday_mget, self->data_ptr);
}

static int
TimeOfDeliveryFactors_set_dispatch_sched_weekday(VarGroupObject *self, PyObject *value, void *closure)
{
		return PySAM_matrix_setter(value, SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_sched_weekday_mset, self->data_ptr);
}

static PyObject *
TimeOfDeliveryFactors_get_dispatch_sched_weekend(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_sched_weekend_mget, self->data_ptr);
}

static int
TimeOfDeliveryFactors_set_dispatch_sched_weekend(VarGroupObject *self, PyObject *value, void *closure)
{
		return PySAM_matrix_setter(value, SAM_TcsmoltenSalt_TimeOfDeliveryFactors_dispatch_sched_weekend_mset, self->data_ptr);
}

static PyObject *
TimeOfDeliveryFactors_get_ppa_multiplier_model(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TimeOfDeliveryFactors_ppa_multiplier_model_nget, self->data_ptr);
}

static int
TimeOfDeliveryFactors_set_ppa_multiplier_model(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TimeOfDeliveryFactors_ppa_multiplier_model_nset, self->data_ptr);
}

static PyGetSetDef TimeOfDeliveryFactors_getset[] = {
{"dispatch_factor1", (getter)TimeOfDeliveryFactors_get_dispatch_factor1,(setter)TimeOfDeliveryFactors_set_dispatch_factor1,
	PyDoc_STR("*float*: Dispatch payment factor 1\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"dispatch_factor2", (getter)TimeOfDeliveryFactors_get_dispatch_factor2,(setter)TimeOfDeliveryFactors_set_dispatch_factor2,
	PyDoc_STR("*float*: Dispatch payment factor 2\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"dispatch_factor3", (getter)TimeOfDeliveryFactors_get_dispatch_factor3,(setter)TimeOfDeliveryFactors_set_dispatch_factor3,
	PyDoc_STR("*float*: Dispatch payment factor 3\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"dispatch_factor4", (getter)TimeOfDeliveryFactors_get_dispatch_factor4,(setter)TimeOfDeliveryFactors_set_dispatch_factor4,
	PyDoc_STR("*float*: Dispatch payment factor 4\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"dispatch_factor5", (getter)TimeOfDeliveryFactors_get_dispatch_factor5,(setter)TimeOfDeliveryFactors_set_dispatch_factor5,
	PyDoc_STR("*float*: Dispatch payment factor 5\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"dispatch_factor6", (getter)TimeOfDeliveryFactors_get_dispatch_factor6,(setter)TimeOfDeliveryFactors_set_dispatch_factor6,
	PyDoc_STR("*float*: Dispatch payment factor 6\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"dispatch_factor7", (getter)TimeOfDeliveryFactors_get_dispatch_factor7,(setter)TimeOfDeliveryFactors_set_dispatch_factor7,
	PyDoc_STR("*float*: Dispatch payment factor 7\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"dispatch_factor8", (getter)TimeOfDeliveryFactors_get_dispatch_factor8,(setter)TimeOfDeliveryFactors_set_dispatch_factor8,
	PyDoc_STR("*float*: Dispatch payment factor 8\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"dispatch_factor9", (getter)TimeOfDeliveryFactors_get_dispatch_factor9,(setter)TimeOfDeliveryFactors_set_dispatch_factor9,
	PyDoc_STR("*float*: Dispatch payment factor 9\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"dispatch_factors_ts", (getter)TimeOfDeliveryFactors_get_dispatch_factors_ts,(setter)TimeOfDeliveryFactors_set_dispatch_factors_ts,
	PyDoc_STR("*sequence*: Dispatch payment factor array\n\n*Required*: True if ppa_multiplier_model=1"),
 	NULL},
{"dispatch_sched_weekday", (getter)TimeOfDeliveryFactors_get_dispatch_sched_weekday,(setter)TimeOfDeliveryFactors_set_dispatch_sched_weekday,
	PyDoc_STR("*sequence[sequence]*: PPA pricing weekday schedule, 12x24\n\n*Required*: If not provided, assumed to be [[1]]"),
 	NULL},
{"dispatch_sched_weekend", (getter)TimeOfDeliveryFactors_get_dispatch_sched_weekend,(setter)TimeOfDeliveryFactors_set_dispatch_sched_weekend,
	PyDoc_STR("*sequence[sequence]*: PPA pricing weekend schedule, 12x24\n\n*Required*: If not provided, assumed to be [[1]]"),
 	NULL},
{"ppa_multiplier_model", (getter)TimeOfDeliveryFactors_get_ppa_multiplier_model,(setter)TimeOfDeliveryFactors_set_ppa_multiplier_model,
	PyDoc_STR("*float*: PPA multiplier model [0/1]\n\n*Options*: 0=diurnal,1=timestep\n\n*Constraints*: INTEGER,MIN=0\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject TimeOfDeliveryFactors_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"TcsmoltenSalt.TimeOfDeliveryFactors",             /*tp_name*/
		sizeof(VarGroupObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		TimeOfDeliveryFactors_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		TimeOfDeliveryFactors_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * HeliostatField Group
 */ 

static PyTypeObject HeliostatField_Type;

static PyObject *
HeliostatField_new(SAM_TcsmoltenSalt data_ptr)
{
	PyObject* new_obj = HeliostatField_Type.tp_alloc(&HeliostatField_Type,0);

	VarGroupObject* HeliostatField_obj = (VarGroupObject*)new_obj;

	HeliostatField_obj->data_ptr = (SAM_table)data_ptr;

	return new_obj;
}

/* HeliostatField methods */

static PyObject *
HeliostatField_assign(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "TcsmoltenSalt", "HeliostatField")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
HeliostatField_export(VarGroupObject *self, PyObject *args)
{
	PyTypeObject* tp = &HeliostatField_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef HeliostatField_methods[] = {
		{"assign",            (PyCFunction)HeliostatField_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``HeliostatField_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)HeliostatField_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
HeliostatField_get_A_sf_in(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_A_sf_in_nget, self->data_ptr);
}

static int
HeliostatField_set_A_sf_in(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_A_sf_in_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_N_hel(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_N_hel_nget, self->data_ptr);
}

static int
HeliostatField_set_N_hel(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_N_hel_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_c_atm_0(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_c_atm_0_nget, self->data_ptr);
}

static int
HeliostatField_set_c_atm_0(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_c_atm_0_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_c_atm_1(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_c_atm_1_nget, self->data_ptr);
}

static int
HeliostatField_set_c_atm_1(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_c_atm_1_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_c_atm_2(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_c_atm_2_nget, self->data_ptr);
}

static int
HeliostatField_set_c_atm_2(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_c_atm_2_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_c_atm_3(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_c_atm_3_nget, self->data_ptr);
}

static int
HeliostatField_set_c_atm_3(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_c_atm_3_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_calc_fluxmaps(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_calc_fluxmaps_nget, self->data_ptr);
}

static int
HeliostatField_set_calc_fluxmaps(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_calc_fluxmaps_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_cant_type(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_cant_type_nget, self->data_ptr);
}

static int
HeliostatField_set_cant_type(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_cant_type_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_check_max_flux(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_check_max_flux_nget, self->data_ptr);
}

static int
HeliostatField_set_check_max_flux(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_check_max_flux_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_csp_pt_sf_fixed_land_area(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_csp_pt_sf_fixed_land_area_nget, self->data_ptr);
}

static int
HeliostatField_set_csp_pt_sf_fixed_land_area(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_csp_pt_sf_fixed_land_area_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_csp_pt_sf_land_overhead_factor(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_csp_pt_sf_land_overhead_factor_nget, self->data_ptr);
}

static int
HeliostatField_set_csp_pt_sf_land_overhead_factor(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_csp_pt_sf_land_overhead_factor_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_dens_mirror(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_dens_mirror_nget, self->data_ptr);
}

static int
HeliostatField_set_dens_mirror(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_dens_mirror_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_eta_map(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_HeliostatField_eta_map_mget, self->data_ptr);
}

static int
HeliostatField_set_eta_map(VarGroupObject *self, PyObject *value, void *closure)
{
		return PySAM_matrix_setter(value, SAM_TcsmoltenSalt_HeliostatField_eta_map_mset, self->data_ptr);
}

static PyObject *
HeliostatField_get_eta_map_aod_format(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_eta_map_aod_format_nget, self->data_ptr);
}

static int
HeliostatField_set_eta_map_aod_format(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_eta_map_aod_format_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_field_model_type(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_field_model_type_nget, self->data_ptr);
}

static int
HeliostatField_set_field_model_type(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_field_model_type_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_flux_maps(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_HeliostatField_flux_maps_mget, self->data_ptr);
}

static int
HeliostatField_set_flux_maps(VarGroupObject *self, PyObject *value, void *closure)
{
		return PySAM_matrix_setter(value, SAM_TcsmoltenSalt_HeliostatField_flux_maps_mset, self->data_ptr);
}

static PyObject *
HeliostatField_get_focus_type(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_focus_type_nget, self->data_ptr);
}

static int
HeliostatField_set_focus_type(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_focus_type_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_hel_stow_deploy(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_hel_stow_deploy_nget, self->data_ptr);
}

static int
HeliostatField_set_hel_stow_deploy(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_hel_stow_deploy_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_helio_active_fraction(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_helio_active_fraction_nget, self->data_ptr);
}

static int
HeliostatField_set_helio_active_fraction(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_helio_active_fraction_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_helio_aim_points(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_HeliostatField_helio_aim_points_mget, self->data_ptr);
}

static int
HeliostatField_set_helio_aim_points(VarGroupObject *self, PyObject *value, void *closure)
{
		return PySAM_matrix_setter(value, SAM_TcsmoltenSalt_HeliostatField_helio_aim_points_mset, self->data_ptr);
}

static PyObject *
HeliostatField_get_helio_height(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_helio_height_nget, self->data_ptr);
}

static int
HeliostatField_set_helio_height(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_helio_height_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_helio_optical_error_mrad(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_helio_optical_error_mrad_nget, self->data_ptr);
}

static int
HeliostatField_set_helio_optical_error_mrad(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_helio_optical_error_mrad_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_helio_positions(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_HeliostatField_helio_positions_mget, self->data_ptr);
}

static int
HeliostatField_set_helio_positions(VarGroupObject *self, PyObject *value, void *closure)
{
		return PySAM_matrix_setter(value, SAM_TcsmoltenSalt_HeliostatField_helio_positions_mset, self->data_ptr);
}

static PyObject *
HeliostatField_get_helio_reflectance(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_helio_reflectance_nget, self->data_ptr);
}

static int
HeliostatField_set_helio_reflectance(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_helio_reflectance_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_helio_width(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_helio_width_nget, self->data_ptr);
}

static int
HeliostatField_set_helio_width(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_helio_width_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_interp_beta(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_interp_beta_nget, self->data_ptr);
}

static int
HeliostatField_set_interp_beta(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_interp_beta_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_interp_nug(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_interp_nug_nget, self->data_ptr);
}

static int
HeliostatField_set_interp_nug(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_interp_nug_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_land_area_base(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_land_area_base_nget, self->data_ptr);
}

static int
HeliostatField_set_land_area_base(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_land_area_base_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_land_bound_list(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_HeliostatField_land_bound_list_aget, self->data_ptr);
}

static int
HeliostatField_set_land_bound_list(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_array_setter(value, SAM_TcsmoltenSalt_HeliostatField_land_bound_list_aset, self->data_ptr);
}

static PyObject *
HeliostatField_get_land_bound_table(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_HeliostatField_land_bound_table_mget, self->data_ptr);
}

static int
HeliostatField_set_land_bound_table(VarGroupObject *self, PyObject *value, void *closure)
{
		return PySAM_matrix_setter(value, SAM_TcsmoltenSalt_HeliostatField_land_bound_table_mset, self->data_ptr);
}

static PyObject *
HeliostatField_get_land_max(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_land_max_nget, self->data_ptr);
}

static int
HeliostatField_set_land_max(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_land_max_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_land_min(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_land_min_nget, self->data_ptr);
}

static int
HeliostatField_set_land_min(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_land_min_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_n_facet_x(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_n_facet_x_nget, self->data_ptr);
}

static int
HeliostatField_set_n_facet_x(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_n_facet_x_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_n_facet_y(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_n_facet_y_nget, self->data_ptr);
}

static int
HeliostatField_set_n_facet_y(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_n_facet_y_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_opt_algorithm(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_opt_algorithm_nget, self->data_ptr);
}

static int
HeliostatField_set_opt_algorithm(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_opt_algorithm_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_opt_conv_tol(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_opt_conv_tol_nget, self->data_ptr);
}

static int
HeliostatField_set_opt_conv_tol(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_opt_conv_tol_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_opt_flux_penalty(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_opt_flux_penalty_nget, self->data_ptr);
}

static int
HeliostatField_set_opt_flux_penalty(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_opt_flux_penalty_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_opt_init_step(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_opt_init_step_nget, self->data_ptr);
}

static int
HeliostatField_set_opt_init_step(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_opt_init_step_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_opt_max_iter(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_opt_max_iter_nget, self->data_ptr);
}

static int
HeliostatField_set_opt_max_iter(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_opt_max_iter_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_p_start(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_p_start_nget, self->data_ptr);
}

static int
HeliostatField_set_p_start(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_p_start_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_p_track(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_p_track_nget, self->data_ptr);
}

static int
HeliostatField_set_p_track(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_p_track_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_v_wind_max(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_v_wind_max_nget, self->data_ptr);
}

static int
HeliostatField_set_v_wind_max(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_v_wind_max_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_washing_frequency(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_washing_frequency_nget, self->data_ptr);
}

static int
HeliostatField_set_washing_frequency(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_washing_frequency_nset, self->data_ptr);
}

static PyObject *
HeliostatField_get_water_usage_per_wash(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_HeliostatField_water_usage_per_wash_nget, self->data_ptr);
}

static int
HeliostatField_set_water_usage_per_wash(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_HeliostatField_water_usage_per_wash_nset, self->data_ptr);
}

static PyGetSetDef HeliostatField_getset[] = {
{"A_sf_in", (getter)HeliostatField_get_A_sf_in,(setter)HeliostatField_set_A_sf_in,
	PyDoc_STR("*float*: Solar field area [m^2]"),
 	NULL},
{"N_hel", (getter)HeliostatField_get_N_hel,(setter)HeliostatField_set_N_hel,
	PyDoc_STR("*float*: Number of heliostats"),
 	NULL},
{"c_atm_0", (getter)HeliostatField_get_c_atm_0,(setter)HeliostatField_set_c_atm_0,
	PyDoc_STR("*float*: Attenuation coefficient 0\n\n*Required*: If not provided, assumed to be 0.006789"),
 	NULL},
{"c_atm_1", (getter)HeliostatField_get_c_atm_1,(setter)HeliostatField_set_c_atm_1,
	PyDoc_STR("*float*: Attenuation coefficient 1\n\n*Required*: If not provided, assumed to be 0.1046"),
 	NULL},
{"c_atm_2", (getter)HeliostatField_get_c_atm_2,(setter)HeliostatField_set_c_atm_2,
	PyDoc_STR("*float*: Attenuation coefficient 2\n\n*Required*: If not provided, assumed to be -0.0107"),
 	NULL},
{"c_atm_3", (getter)HeliostatField_get_c_atm_3,(setter)HeliostatField_set_c_atm_3,
	PyDoc_STR("*float*: Attenuation coefficient 3\n\n*Required*: If not provided, assumed to be 0.002845"),
 	NULL},
{"calc_fluxmaps", (getter)HeliostatField_get_calc_fluxmaps,(setter)HeliostatField_set_calc_fluxmaps,
	PyDoc_STR("*float*: Include fluxmap calculations\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"cant_type", (getter)HeliostatField_get_cant_type,(setter)HeliostatField_set_cant_type,
	PyDoc_STR("*float*: Heliostat canting method\n\n*Required*: True"),
 	NULL},
{"check_max_flux", (getter)HeliostatField_get_check_max_flux,(setter)HeliostatField_set_check_max_flux,
	PyDoc_STR("*float*: Check max flux at design point\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"csp_pt_sf_fixed_land_area", (getter)HeliostatField_get_csp_pt_sf_fixed_land_area,(setter)HeliostatField_set_csp_pt_sf_fixed_land_area,
	PyDoc_STR("*float*: Fixed land area [acre]\n\n*Required*: True"),
 	NULL},
{"csp_pt_sf_land_overhead_factor", (getter)HeliostatField_get_csp_pt_sf_land_overhead_factor,(setter)HeliostatField_set_csp_pt_sf_land_overhead_factor,
	PyDoc_STR("*float*: Land overhead factor\n\n*Required*: True"),
 	NULL},
{"dens_mirror", (getter)HeliostatField_get_dens_mirror,(setter)HeliostatField_set_dens_mirror,
	PyDoc_STR("*float*: Ratio of heliostat reflective area to profile\n\n*Required*: True"),
 	NULL},
{"eta_map", (getter)HeliostatField_get_eta_map,(setter)HeliostatField_set_eta_map,
	PyDoc_STR("*sequence[sequence]*: Field efficiency array\n\n*Required*: False"),
 	NULL},
{"eta_map_aod_format", (getter)HeliostatField_get_eta_map_aod_format,(setter)HeliostatField_set_eta_map_aod_format,
	PyDoc_STR("*float*: Use 3D AOD format field efficiency array\n\n*Info*: heliostat"),
 	NULL},
{"field_model_type", (getter)HeliostatField_get_field_model_type,(setter)HeliostatField_set_field_model_type,
	PyDoc_STR("*float*: 0=design field and tower/receiver geometry, 1=design field, 2=user specified field, 3=user performance maps vs solar position\n\n*Required*: True"),
 	NULL},
{"flux_maps", (getter)HeliostatField_get_flux_maps,(setter)HeliostatField_set_flux_maps,
	PyDoc_STR("*sequence[sequence]*: Flux map intensities\n\n*Required*: False"),
 	NULL},
{"focus_type", (getter)HeliostatField_get_focus_type,(setter)HeliostatField_set_focus_type,
	PyDoc_STR("*float*: Heliostat focus method\n\n*Required*: True"),
 	NULL},
{"hel_stow_deploy", (getter)HeliostatField_get_hel_stow_deploy,(setter)HeliostatField_set_hel_stow_deploy,
	PyDoc_STR("*float*: Stow/deploy elevation angle [deg]\n\n*Required*: True"),
 	NULL},
{"helio_active_fraction", (getter)HeliostatField_get_helio_active_fraction,(setter)HeliostatField_set_helio_active_fraction,
	PyDoc_STR("*float*: Heliostat active fraction\n\n*Required*: True"),
 	NULL},
{"helio_aim_points", (getter)HeliostatField_get_helio_aim_points,(setter)HeliostatField_set_helio_aim_points,
	PyDoc_STR("*sequence[sequence]*: Heliostat aim point table [m]\n\n*Required*: False"),
 	NULL},
{"helio_height", (getter)HeliostatField_get_helio_height,(setter)HeliostatField_set_helio_height,
	PyDoc_STR("*float*: Heliostat height [m]\n\n*Required*: True"),
 	NULL},
{"helio_optical_error_mrad", (getter)HeliostatField_get_helio_optical_error_mrad,(setter)HeliostatField_set_helio_optical_error_mrad,
	PyDoc_STR("*float*: Heliostat optical error [mrad]\n\n*Required*: True"),
 	NULL},
{"helio_positions", (getter)HeliostatField_get_helio_positions,(setter)HeliostatField_set_helio_positions,
	PyDoc_STR("*sequence[sequence]*: Heliostat position table\n\n*Required*: True"),
 	NULL},
{"helio_reflectance", (getter)HeliostatField_get_helio_reflectance,(setter)HeliostatField_set_helio_reflectance,
	PyDoc_STR("*float*: Heliostat reflectance\n\n*Required*: True"),
 	NULL},
{"helio_width", (getter)HeliostatField_get_helio_width,(setter)HeliostatField_set_helio_width,
	PyDoc_STR("*float*: Heliostat width [m]\n\n*Required*: True"),
 	NULL},
{"interp_beta", (getter)HeliostatField_get_interp_beta,(setter)HeliostatField_set_interp_beta,
	PyDoc_STR("*float*: Interpolation beta coef. [-]\n\n*Required*: If not provided, assumed to be 1.99"),
 	NULL},
{"interp_nug", (getter)HeliostatField_get_interp_nug,(setter)HeliostatField_set_interp_nug,
	PyDoc_STR("*float*: Interpolation nugget [-]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"land_area_base", (getter)HeliostatField_get_land_area_base,(setter)HeliostatField_set_land_area_base,
	PyDoc_STR("*float*: Base land area occupied by heliostats [acre]\n\n*Required*: True"),
 	NULL},
{"land_bound_list", (getter)HeliostatField_get_land_bound_list,(setter)HeliostatField_set_land_bound_list,
	PyDoc_STR("*sequence*: Land boundary table listing\n\n*Required*: False"),
 	NULL},
{"land_bound_table", (getter)HeliostatField_get_land_bound_table,(setter)HeliostatField_set_land_bound_table,
	PyDoc_STR("*sequence[sequence]*: Land boundary table [m]\n\n*Required*: False"),
 	NULL},
{"land_max", (getter)HeliostatField_get_land_max,(setter)HeliostatField_set_land_max,
	PyDoc_STR("*float*: Land max boundary [-ORm]\n\n*Required*: If not provided, assumed to be 7.5"),
 	NULL},
{"land_min", (getter)HeliostatField_get_land_min,(setter)HeliostatField_set_land_min,
	PyDoc_STR("*float*: Land min boundary [-ORm]\n\n*Required*: If not provided, assumed to be 0.75"),
 	NULL},
{"n_facet_x", (getter)HeliostatField_get_n_facet_x,(setter)HeliostatField_set_n_facet_x,
	PyDoc_STR("*float*: Number of heliostat facets - X\n\n*Required*: True"),
 	NULL},
{"n_facet_y", (getter)HeliostatField_get_n_facet_y,(setter)HeliostatField_set_n_facet_y,
	PyDoc_STR("*float*: Number of heliostat facets - Y\n\n*Required*: True"),
 	NULL},
{"opt_algorithm", (getter)HeliostatField_get_opt_algorithm,(setter)HeliostatField_set_opt_algorithm,
	PyDoc_STR("*float*: Optimization algorithm\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"opt_conv_tol", (getter)HeliostatField_get_opt_conv_tol,(setter)HeliostatField_set_opt_conv_tol,
	PyDoc_STR("*float*: Optimization convergence tolerance\n\n*Required*: If not provided, assumed to be 0.001"),
 	NULL},
{"opt_flux_penalty", (getter)HeliostatField_get_opt_flux_penalty,(setter)HeliostatField_set_opt_flux_penalty,
	PyDoc_STR("*float*: Optimization flux overage penalty\n\n*Required*: True"),
 	NULL},
{"opt_init_step", (getter)HeliostatField_get_opt_init_step,(setter)HeliostatField_set_opt_init_step,
	PyDoc_STR("*float*: Optimization initial step size\n\n*Required*: If not provided, assumed to be 0.05"),
 	NULL},
{"opt_max_iter", (getter)HeliostatField_get_opt_max_iter,(setter)HeliostatField_set_opt_max_iter,
	PyDoc_STR("*float*: Max number iteration steps\n\n*Required*: If not provided, assumed to be 200"),
 	NULL},
{"p_start", (getter)HeliostatField_get_p_start,(setter)HeliostatField_set_p_start,
	PyDoc_STR("*float*: Heliostat startup energy [kWe-hr]\n\n*Required*: True"),
 	NULL},
{"p_track", (getter)HeliostatField_get_p_track,(setter)HeliostatField_set_p_track,
	PyDoc_STR("*float*: Heliostat tracking energy [kWe]\n\n*Required*: True"),
 	NULL},
{"v_wind_max", (getter)HeliostatField_get_v_wind_max,(setter)HeliostatField_set_v_wind_max,
	PyDoc_STR("*float*: Heliostat max wind velocity [m/s]\n\n*Required*: True"),
 	NULL},
{"washing_frequency", (getter)HeliostatField_get_washing_frequency,(setter)HeliostatField_set_washing_frequency,
	PyDoc_STR("*float*: Mirror washing frequency [none]\n\n*Required*: True"),
 	NULL},
{"water_usage_per_wash", (getter)HeliostatField_get_water_usage_per_wash,(setter)HeliostatField_set_water_usage_per_wash,
	PyDoc_STR("*float*: Water usage per wash [L/m2_aper]\n\n*Required*: True"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject HeliostatField_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"TcsmoltenSalt.HeliostatField",             /*tp_name*/
		sizeof(VarGroupObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		HeliostatField_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		HeliostatField_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * SystemDesign Group
 */ 

static PyTypeObject SystemDesign_Type;

static PyObject *
SystemDesign_new(SAM_TcsmoltenSalt data_ptr)
{
	PyObject* new_obj = SystemDesign_Type.tp_alloc(&SystemDesign_Type,0);

	VarGroupObject* SystemDesign_obj = (VarGroupObject*)new_obj;

	SystemDesign_obj->data_ptr = (SAM_table)data_ptr;

	return new_obj;
}

/* SystemDesign methods */

static PyObject *
SystemDesign_assign(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "TcsmoltenSalt", "SystemDesign")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
SystemDesign_export(VarGroupObject *self, PyObject *args)
{
	PyTypeObject* tp = &SystemDesign_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef SystemDesign_methods[] = {
		{"assign",            (PyCFunction)SystemDesign_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``SystemDesign_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)SystemDesign_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
SystemDesign_get_P_ref(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemDesign_P_ref_nget, self->data_ptr);
}

static int
SystemDesign_set_P_ref(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemDesign_P_ref_nset, self->data_ptr);
}

static PyObject *
SystemDesign_get_T_htf_cold_des(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemDesign_T_htf_cold_des_nget, self->data_ptr);
}

static int
SystemDesign_set_T_htf_cold_des(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemDesign_T_htf_cold_des_nset, self->data_ptr);
}

static PyObject *
SystemDesign_get_T_htf_hot_des(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemDesign_T_htf_hot_des_nget, self->data_ptr);
}

static int
SystemDesign_set_T_htf_hot_des(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemDesign_T_htf_hot_des_nset, self->data_ptr);
}

static PyObject *
SystemDesign_get_design_eff(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemDesign_design_eff_nget, self->data_ptr);
}

static int
SystemDesign_set_design_eff(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemDesign_design_eff_nset, self->data_ptr);
}

static PyObject *
SystemDesign_get_dni_des(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemDesign_dni_des_nget, self->data_ptr);
}

static int
SystemDesign_set_dni_des(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemDesign_dni_des_nset, self->data_ptr);
}

static PyObject *
SystemDesign_get_gross_net_conversion_factor(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemDesign_gross_net_conversion_factor_nget, self->data_ptr);
}

static int
SystemDesign_set_gross_net_conversion_factor(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemDesign_gross_net_conversion_factor_nset, self->data_ptr);
}

static PyObject *
SystemDesign_get_sf_excess(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemDesign_sf_excess_nget, self->data_ptr);
}

static int
SystemDesign_set_sf_excess(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemDesign_sf_excess_nset, self->data_ptr);
}

static PyObject *
SystemDesign_get_solarm(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemDesign_solarm_nget, self->data_ptr);
}

static int
SystemDesign_set_solarm(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemDesign_solarm_nset, self->data_ptr);
}

static PyObject *
SystemDesign_get_tshours(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemDesign_tshours_nget, self->data_ptr);
}

static int
SystemDesign_set_tshours(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemDesign_tshours_nset, self->data_ptr);
}

static PyGetSetDef SystemDesign_getset[] = {
{"P_ref", (getter)SystemDesign_get_P_ref,(setter)SystemDesign_set_P_ref,
	PyDoc_STR("*float*: Reference output electric power at design condition [MW]\n\n*Required*: True"),
 	NULL},
{"T_htf_cold_des", (getter)SystemDesign_get_T_htf_cold_des,(setter)SystemDesign_set_T_htf_cold_des,
	PyDoc_STR("*float*: Cold HTF inlet temperature at design conditions [C]\n\n*Required*: True"),
 	NULL},
{"T_htf_hot_des", (getter)SystemDesign_get_T_htf_hot_des,(setter)SystemDesign_set_T_htf_hot_des,
	PyDoc_STR("*float*: Hot HTF outlet temperature at design conditions [C]\n\n*Required*: True"),
 	NULL},
{"design_eff", (getter)SystemDesign_get_design_eff,(setter)SystemDesign_set_design_eff,
	PyDoc_STR("*float*: Power cycle efficiency at design [none]\n\n*Required*: True"),
 	NULL},
{"dni_des", (getter)SystemDesign_get_dni_des,(setter)SystemDesign_set_dni_des,
	PyDoc_STR("*float*: Design-point DNI [W/m2]\n\n*Required*: True"),
 	NULL},
{"gross_net_conversion_factor", (getter)SystemDesign_get_gross_net_conversion_factor,(setter)SystemDesign_set_gross_net_conversion_factor,
	PyDoc_STR("*float*: Estimated gross to net conversion factor\n\n*Required*: True"),
 	NULL},
{"sf_excess", (getter)SystemDesign_get_sf_excess,(setter)SystemDesign_set_sf_excess,
	PyDoc_STR("*float*: Heliostat field multiple\n\n*Required*: If not provided, assumed to be 1.0"),
 	NULL},
{"solarm", (getter)SystemDesign_get_solarm,(setter)SystemDesign_set_solarm,
	PyDoc_STR("*float*: Solar multiple [-]\n\n*Required*: True"),
 	NULL},
{"tshours", (getter)SystemDesign_get_tshours,(setter)SystemDesign_set_tshours,
	PyDoc_STR("*float*: Equivalent full-load thermal storage hours [hr]\n\n*Required*: True"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject SystemDesign_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"TcsmoltenSalt.SystemDesign",             /*tp_name*/
		sizeof(VarGroupObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		SystemDesign_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		SystemDesign_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * TowerAndReceiver Group
 */ 

static PyTypeObject TowerAndReceiver_Type;

static PyObject *
TowerAndReceiver_new(SAM_TcsmoltenSalt data_ptr)
{
	PyObject* new_obj = TowerAndReceiver_Type.tp_alloc(&TowerAndReceiver_Type,0);

	VarGroupObject* TowerAndReceiver_obj = (VarGroupObject*)new_obj;

	TowerAndReceiver_obj->data_ptr = (SAM_table)data_ptr;

	return new_obj;
}

/* TowerAndReceiver methods */

static PyObject *
TowerAndReceiver_assign(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "TcsmoltenSalt", "TowerAndReceiver")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
TowerAndReceiver_export(VarGroupObject *self, PyObject *args)
{
	PyTypeObject* tp = &TowerAndReceiver_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef TowerAndReceiver_methods[] = {
		{"assign",            (PyCFunction)TowerAndReceiver_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``TowerAndReceiver_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)TowerAndReceiver_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
TowerAndReceiver_get_D_rec(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_D_rec_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_D_rec(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_D_rec_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_Flow_type(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_Flow_type_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_Flow_type(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_Flow_type_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_N_panels(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_N_panels_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_N_panels(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_N_panels_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_crossover_shift(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_crossover_shift_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_crossover_shift(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_crossover_shift_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_csp_pt_rec_max_oper_frac(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_csp_pt_rec_max_oper_frac_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_csp_pt_rec_max_oper_frac(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_csp_pt_rec_max_oper_frac_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_d_tube_out(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_d_tube_out_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_d_tube_out(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_d_tube_out_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_delta_flux_hrs(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_delta_flux_hrs_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_delta_flux_hrs(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_delta_flux_hrs_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_downc_tm_mult(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_downc_tm_mult_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_downc_tm_mult(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_downc_tm_mult_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_epsilon(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_epsilon_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_epsilon(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_epsilon_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_eta_pump(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_eta_pump_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_eta_pump(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_eta_pump_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_f_rec_min(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_f_rec_min_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_f_rec_min(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_f_rec_min_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_field_fl_props(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_TowerAndReceiver_field_fl_props_mget, self->data_ptr);
}

static int
TowerAndReceiver_set_field_fl_props(VarGroupObject *self, PyObject *value, void *closure)
{
		return PySAM_matrix_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_field_fl_props_mset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_flux_max(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_flux_max_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_flux_max(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_flux_max_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_h_tower(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_h_tower_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_h_tower(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_h_tower_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_heat_trace_power(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_heat_trace_power_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_heat_trace_power(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_heat_trace_power_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_hl_ffact(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_hl_ffact_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_hl_ffact(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_hl_ffact_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_is_rec_enforce_min_startup(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_is_rec_enforce_min_startup_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_is_rec_enforce_min_startup(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_is_rec_enforce_min_startup_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_is_rec_model_trans(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_is_rec_model_trans_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_is_rec_model_trans(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_is_rec_model_trans_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_is_rec_startup_from_T_soln(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_is_rec_startup_from_T_soln_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_is_rec_startup_from_T_soln(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_is_rec_startup_from_T_soln_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_is_rec_startup_trans(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_is_rec_startup_trans_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_is_rec_startup_trans(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_is_rec_startup_trans_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_mat_tube(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_mat_tube_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_mat_tube(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_mat_tube_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_min_fill_time(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_min_fill_time_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_min_fill_time(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_min_fill_time_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_min_preheat_time(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_min_preheat_time_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_min_preheat_time(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_min_preheat_time_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_n_flux_days(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_n_flux_days_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_n_flux_days(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_n_flux_days_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_piping_length_const(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_piping_length_const_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_piping_length_const(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_piping_length_const_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_piping_length_mult(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_piping_length_mult_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_piping_length_mult(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_piping_length_mult_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_piping_loss(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_piping_loss_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_piping_loss(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_piping_loss_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_preheat_flux(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_preheat_flux_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_preheat_flux(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_preheat_flux_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_rec_absorptance(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_rec_absorptance_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_rec_absorptance(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_rec_absorptance_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_rec_clearsky_dni(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_TowerAndReceiver_rec_clearsky_dni_aget, self->data_ptr);
}

static int
TowerAndReceiver_set_rec_clearsky_dni(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_array_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_rec_clearsky_dni_aset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_rec_clearsky_fraction(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_rec_clearsky_fraction_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_rec_clearsky_fraction(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_rec_clearsky_fraction_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_rec_clearsky_model(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_rec_clearsky_model_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_rec_clearsky_model(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_rec_clearsky_model_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_rec_height(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_rec_height_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_rec_height(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_rec_height_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_rec_hl_perm2(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_rec_hl_perm2_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_rec_hl_perm2(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_rec_hl_perm2_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_rec_htf(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_rec_htf_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_rec_htf(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_rec_htf_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_rec_qf_delay(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_rec_qf_delay_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_rec_qf_delay(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_rec_qf_delay_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_rec_su_delay(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_rec_su_delay_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_rec_su_delay(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_rec_su_delay_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_rec_tm_mult(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_rec_tm_mult_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_rec_tm_mult(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_rec_tm_mult_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_riser_tm_mult(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_riser_tm_mult_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_riser_tm_mult(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_riser_tm_mult_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_startup_ramp_time(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_startup_ramp_time_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_startup_ramp_time(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_startup_ramp_time_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_startup_target_Tdiff(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_startup_target_Tdiff_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_startup_target_Tdiff(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_startup_target_Tdiff_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_th_riser(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_th_riser_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_th_riser(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_th_riser_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_th_tube(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_th_tube_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_th_tube(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_th_tube_nset, self->data_ptr);
}

static PyObject *
TowerAndReceiver_get_u_riser(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_TowerAndReceiver_u_riser_nget, self->data_ptr);
}

static int
TowerAndReceiver_set_u_riser(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_TowerAndReceiver_u_riser_nset, self->data_ptr);
}

static PyGetSetDef TowerAndReceiver_getset[] = {
{"D_rec", (getter)TowerAndReceiver_get_D_rec,(setter)TowerAndReceiver_set_D_rec,
	PyDoc_STR("*float*: The overall outer diameter of the receiver [m]\n\n*Required*: True"),
 	NULL},
{"Flow_type", (getter)TowerAndReceiver_get_Flow_type,(setter)TowerAndReceiver_set_Flow_type,
	PyDoc_STR("*float*: Receiver flow pattern: see figure on SAM Receiver page\n\n*Required*: True"),
 	NULL},
{"N_panels", (getter)TowerAndReceiver_get_N_panels,(setter)TowerAndReceiver_set_N_panels,
	PyDoc_STR("*float*: Number of individual panels on the receiver\n\n*Constraints*: INTEGER\n\n*Required*: True"),
 	NULL},
{"crossover_shift", (getter)TowerAndReceiver_get_crossover_shift,(setter)TowerAndReceiver_set_crossover_shift,
	PyDoc_STR("*float*: Number of panels shift in receiver crossover position\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"csp_pt_rec_max_oper_frac", (getter)TowerAndReceiver_get_csp_pt_rec_max_oper_frac,(setter)TowerAndReceiver_set_csp_pt_rec_max_oper_frac,
	PyDoc_STR("*float*: Maximum receiver mass flow rate fraction\n\n*Required*: True"),
 	NULL},
{"d_tube_out", (getter)TowerAndReceiver_get_d_tube_out,(setter)TowerAndReceiver_set_d_tube_out,
	PyDoc_STR("*float*: The outer diameter of an individual receiver tube [mm]\n\n*Required*: True"),
 	NULL},
{"delta_flux_hrs", (getter)TowerAndReceiver_get_delta_flux_hrs,(setter)TowerAndReceiver_set_delta_flux_hrs,
	PyDoc_STR("*float*: Hourly frequency in flux map lookup\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"downc_tm_mult", (getter)TowerAndReceiver_get_downc_tm_mult,(setter)TowerAndReceiver_set_downc_tm_mult,
	PyDoc_STR("*float*: Downcomer thermal mass multiplier\n\n*Required*: If not provided, assumed to be 1.0"),
 	NULL},
{"epsilon", (getter)TowerAndReceiver_get_epsilon,(setter)TowerAndReceiver_set_epsilon,
	PyDoc_STR("*float*: The emissivity of the receiver surface coating\n\n*Required*: True"),
 	NULL},
{"eta_pump", (getter)TowerAndReceiver_get_eta_pump,(setter)TowerAndReceiver_set_eta_pump,
	PyDoc_STR("*float*: Receiver HTF pump efficiency\n\n*Required*: True"),
 	NULL},
{"f_rec_min", (getter)TowerAndReceiver_get_f_rec_min,(setter)TowerAndReceiver_set_f_rec_min,
	PyDoc_STR("*float*: Minimum receiver mass flow rate turn down fraction\n\n*Required*: True"),
 	NULL},
{"field_fl_props", (getter)TowerAndReceiver_get_field_fl_props,(setter)TowerAndReceiver_set_field_fl_props,
	PyDoc_STR("*sequence[sequence]*: User defined field fluid property data [-]\n\n*Required*: True"),
 	NULL},
{"flux_max", (getter)TowerAndReceiver_get_flux_max,(setter)TowerAndReceiver_set_flux_max,
	PyDoc_STR("*float*: Maximum allowable flux\n\n*Required*: If not provided, assumed to be 1000"),
 	NULL},
{"h_tower", (getter)TowerAndReceiver_get_h_tower,(setter)TowerAndReceiver_set_h_tower,
	PyDoc_STR("*float*: Tower height [m]\n\n*Required*: True"),
 	NULL},
{"heat_trace_power", (getter)TowerAndReceiver_get_heat_trace_power,(setter)TowerAndReceiver_set_heat_trace_power,
	PyDoc_STR("*float*: Riser/downcomer heat trace power during startup [kW/m]\n\n*Required*: If not provided, assumed to be 500.0"),
 	NULL},
{"hl_ffact", (getter)TowerAndReceiver_get_hl_ffact,(setter)TowerAndReceiver_set_hl_ffact,
	PyDoc_STR("*float*: The heat loss factor (thermal loss fudge factor)\n\n*Required*: True"),
 	NULL},
{"is_rec_enforce_min_startup", (getter)TowerAndReceiver_get_is_rec_enforce_min_startup,(setter)TowerAndReceiver_set_is_rec_enforce_min_startup,
	PyDoc_STR("*float*: Always enforce minimum startup time\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"is_rec_model_trans", (getter)TowerAndReceiver_get_is_rec_model_trans,(setter)TowerAndReceiver_set_is_rec_model_trans,
	PyDoc_STR("*float*: Formulate receiver model as transient?\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"is_rec_startup_from_T_soln", (getter)TowerAndReceiver_get_is_rec_startup_from_T_soln,(setter)TowerAndReceiver_set_is_rec_startup_from_T_soln,
	PyDoc_STR("*float*: Begin receiver startup from solved temperature profiles?\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"is_rec_startup_trans", (getter)TowerAndReceiver_get_is_rec_startup_trans,(setter)TowerAndReceiver_set_is_rec_startup_trans,
	PyDoc_STR("*float*: Formulate receiver startup model as transient?\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"mat_tube", (getter)TowerAndReceiver_get_mat_tube,(setter)TowerAndReceiver_set_mat_tube,
	PyDoc_STR("*float*: Receiver tube material, 2=Stainless AISI316\n\n*Required*: True"),
 	NULL},
{"min_fill_time", (getter)TowerAndReceiver_get_min_fill_time,(setter)TowerAndReceiver_set_min_fill_time,
	PyDoc_STR("*float*: Startup time delay for filling the receiver/piping [hr]\n\n*Required*: If not provided, assumed to be 0.1333"),
 	NULL},
{"min_preheat_time", (getter)TowerAndReceiver_get_min_preheat_time,(setter)TowerAndReceiver_set_min_preheat_time,
	PyDoc_STR("*float*: Minimum time required in preheat startup stage [hr]\n\n*Required*: If not provided, assumed to be 0.0"),
 	NULL},
{"n_flux_days", (getter)TowerAndReceiver_get_n_flux_days,(setter)TowerAndReceiver_set_n_flux_days,
	PyDoc_STR("*float*: Number of days in flux map lookup\n\n*Required*: If not provided, assumed to be 8"),
 	NULL},
{"piping_length_const", (getter)TowerAndReceiver_get_piping_length_const,(setter)TowerAndReceiver_set_piping_length_const,
	PyDoc_STR("*float*: Piping constant length [m]\n\n*Required*: True"),
 	NULL},
{"piping_length_mult", (getter)TowerAndReceiver_get_piping_length_mult,(setter)TowerAndReceiver_set_piping_length_mult,
	PyDoc_STR("*float*: Piping length multiplier\n\n*Required*: True"),
 	NULL},
{"piping_loss", (getter)TowerAndReceiver_get_piping_loss,(setter)TowerAndReceiver_set_piping_loss,
	PyDoc_STR("*float*: Thermal loss per meter of piping [Wt/m]\n\n*Required*: True"),
 	NULL},
{"preheat_flux", (getter)TowerAndReceiver_get_preheat_flux,(setter)TowerAndReceiver_set_preheat_flux,
	PyDoc_STR("*float*: Tube absorbed solar flux during preheat [kW/m2]\n\n*Required*: If not provided, assumed to be 50.0"),
 	NULL},
{"rec_absorptance", (getter)TowerAndReceiver_get_rec_absorptance,(setter)TowerAndReceiver_set_rec_absorptance,
	PyDoc_STR("*float*: Receiver absorptance\n\n*Required*: True"),
 	NULL},
{"rec_clearsky_dni", (getter)TowerAndReceiver_get_rec_clearsky_dni,(setter)TowerAndReceiver_set_rec_clearsky_dni,
	PyDoc_STR("*sequence*: User-defined clear-sky DNI [W/m2]\n\n*Required*: True if rec_clearsky_model=0"),
 	NULL},
{"rec_clearsky_fraction", (getter)TowerAndReceiver_get_rec_clearsky_fraction,(setter)TowerAndReceiver_set_rec_clearsky_fraction,
	PyDoc_STR("*float*: Weighting fraction on clear-sky DNI for receiver flow control\n\n*Required*: If not provided, assumed to be 0.0"),
 	NULL},
{"rec_clearsky_model", (getter)TowerAndReceiver_get_rec_clearsky_model,(setter)TowerAndReceiver_set_rec_clearsky_model,
	PyDoc_STR("*float*: Clearsky model: None = -1, User-defined data = 0, Meinel = 1; Hottel = 2; Allen = 3; Moon = 4\n\n*Required*: If not provided, assumed to be -1"),
 	NULL},
{"rec_height", (getter)TowerAndReceiver_get_rec_height,(setter)TowerAndReceiver_set_rec_height,
	PyDoc_STR("*float*: Receiver height [m]\n\n*Required*: True"),
 	NULL},
{"rec_hl_perm2", (getter)TowerAndReceiver_get_rec_hl_perm2,(setter)TowerAndReceiver_set_rec_hl_perm2,
	PyDoc_STR("*float*: Receiver design heatloss [kW/m2]\n\n*Required*: True"),
 	NULL},
{"rec_htf", (getter)TowerAndReceiver_get_rec_htf,(setter)TowerAndReceiver_set_rec_htf,
	PyDoc_STR("*float*: Receiver HTF, 17=Salt (60% NaNO3, 40% KNO3) 10=Salt (46.5% LiF 11.5% NaF 42% KF) 50=Lookup tables\n\n*Required*: True"),
 	NULL},
{"rec_qf_delay", (getter)TowerAndReceiver_get_rec_qf_delay,(setter)TowerAndReceiver_set_rec_qf_delay,
	PyDoc_STR("*float*: Energy-based receiver startup delay (fraction of rated thermal power)\n\n*Required*: True"),
 	NULL},
{"rec_su_delay", (getter)TowerAndReceiver_get_rec_su_delay,(setter)TowerAndReceiver_set_rec_su_delay,
	PyDoc_STR("*float*: Fixed startup delay time for the receiver [hr]\n\n*Required*: True"),
 	NULL},
{"rec_tm_mult", (getter)TowerAndReceiver_get_rec_tm_mult,(setter)TowerAndReceiver_set_rec_tm_mult,
	PyDoc_STR("*float*: Receiver thermal mass multiplier\n\n*Required*: If not provided, assumed to be 1.0"),
 	NULL},
{"riser_tm_mult", (getter)TowerAndReceiver_get_riser_tm_mult,(setter)TowerAndReceiver_set_riser_tm_mult,
	PyDoc_STR("*float*: Riser thermal mass multiplier\n\n*Required*: If not provided, assumed to be 1.0"),
 	NULL},
{"startup_ramp_time", (getter)TowerAndReceiver_get_startup_ramp_time,(setter)TowerAndReceiver_set_startup_ramp_time,
	PyDoc_STR("*float*: Time required to reach full flux during receiver startup [hr]\n\n*Required*: If not provided, assumed to be 0.1333"),
 	NULL},
{"startup_target_Tdiff", (getter)TowerAndReceiver_get_startup_target_Tdiff,(setter)TowerAndReceiver_set_startup_target_Tdiff,
	PyDoc_STR("*float*: Target HTF T at end of startup - steady state hot HTF temperature [C]\n\n*Required*: If not provided, assumed to be -5.0"),
 	NULL},
{"th_riser", (getter)TowerAndReceiver_get_th_riser,(setter)TowerAndReceiver_set_th_riser,
	PyDoc_STR("*float*: Riser or downcomer tube wall thickness [mm]\n\n*Required*: If not provided, assumed to be 15.0"),
 	NULL},
{"th_tube", (getter)TowerAndReceiver_get_th_tube,(setter)TowerAndReceiver_set_th_tube,
	PyDoc_STR("*float*: The wall thickness of a single receiver tube [mm]\n\n*Required*: True"),
 	NULL},
{"u_riser", (getter)TowerAndReceiver_get_u_riser,(setter)TowerAndReceiver_set_u_riser,
	PyDoc_STR("*float*: Design point HTF velocity in riser [m/s]\n\n*Required*: If not provided, assumed to be 4.0"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject TowerAndReceiver_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"TcsmoltenSalt.TowerAndReceiver",             /*tp_name*/
		sizeof(VarGroupObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		TowerAndReceiver_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		TowerAndReceiver_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * SystemCosts Group
 */ 

static PyTypeObject SystemCosts_Type;

static PyObject *
SystemCosts_new(SAM_TcsmoltenSalt data_ptr)
{
	PyObject* new_obj = SystemCosts_Type.tp_alloc(&SystemCosts_Type,0);

	VarGroupObject* SystemCosts_obj = (VarGroupObject*)new_obj;

	SystemCosts_obj->data_ptr = (SAM_table)data_ptr;

	return new_obj;
}

/* SystemCosts methods */

static PyObject *
SystemCosts_assign(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "TcsmoltenSalt", "SystemCosts")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
SystemCosts_export(VarGroupObject *self, PyObject *args)
{
	PyTypeObject* tp = &SystemCosts_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef SystemCosts_methods[] = {
		{"assign",            (PyCFunction)SystemCosts_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``SystemCosts_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)SystemCosts_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
SystemCosts_get_bop_spec_cost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_bop_spec_cost_nget, self->data_ptr);
}

static int
SystemCosts_set_bop_spec_cost(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_bop_spec_cost_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_contingency_rate(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_contingency_rate_nget, self->data_ptr);
}

static int
SystemCosts_set_contingency_rate(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_contingency_rate_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_cost_sf_fixed(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_cost_sf_fixed_nget, self->data_ptr);
}

static int
SystemCosts_set_cost_sf_fixed(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_cost_sf_fixed_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_csp_pt_cost_epc_fixed(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_csp_pt_cost_epc_fixed_nget, self->data_ptr);
}

static int
SystemCosts_set_csp_pt_cost_epc_fixed(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_csp_pt_cost_epc_fixed_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_csp_pt_cost_epc_per_acre(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_csp_pt_cost_epc_per_acre_nget, self->data_ptr);
}

static int
SystemCosts_set_csp_pt_cost_epc_per_acre(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_csp_pt_cost_epc_per_acre_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_csp_pt_cost_epc_per_watt(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_csp_pt_cost_epc_per_watt_nget, self->data_ptr);
}

static int
SystemCosts_set_csp_pt_cost_epc_per_watt(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_csp_pt_cost_epc_per_watt_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_csp_pt_cost_epc_percent(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_csp_pt_cost_epc_percent_nget, self->data_ptr);
}

static int
SystemCosts_set_csp_pt_cost_epc_percent(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_csp_pt_cost_epc_percent_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_csp_pt_cost_plm_fixed(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_csp_pt_cost_plm_fixed_nget, self->data_ptr);
}

static int
SystemCosts_set_csp_pt_cost_plm_fixed(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_csp_pt_cost_plm_fixed_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_csp_pt_cost_plm_per_watt(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_csp_pt_cost_plm_per_watt_nget, self->data_ptr);
}

static int
SystemCosts_set_csp_pt_cost_plm_per_watt(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_csp_pt_cost_plm_per_watt_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_csp_pt_cost_plm_percent(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_csp_pt_cost_plm_percent_nget, self->data_ptr);
}

static int
SystemCosts_set_csp_pt_cost_plm_percent(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_csp_pt_cost_plm_percent_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_fossil_spec_cost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_fossil_spec_cost_nget, self->data_ptr);
}

static int
SystemCosts_set_fossil_spec_cost(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_fossil_spec_cost_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_heliostat_spec_cost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_heliostat_spec_cost_nget, self->data_ptr);
}

static int
SystemCosts_set_heliostat_spec_cost(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_heliostat_spec_cost_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_land_spec_cost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_land_spec_cost_nget, self->data_ptr);
}

static int
SystemCosts_set_land_spec_cost(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_land_spec_cost_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_plant_spec_cost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_plant_spec_cost_nget, self->data_ptr);
}

static int
SystemCosts_set_plant_spec_cost(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_plant_spec_cost_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_rec_cost_exp(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_rec_cost_exp_nget, self->data_ptr);
}

static int
SystemCosts_set_rec_cost_exp(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_rec_cost_exp_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_rec_ref_area(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_rec_ref_area_nget, self->data_ptr);
}

static int
SystemCosts_set_rec_ref_area(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_rec_ref_area_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_rec_ref_cost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_rec_ref_cost_nget, self->data_ptr);
}

static int
SystemCosts_set_rec_ref_cost(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_rec_ref_cost_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_sales_tax_frac(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_sales_tax_frac_nget, self->data_ptr);
}

static int
SystemCosts_set_sales_tax_frac(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_sales_tax_frac_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_site_spec_cost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_site_spec_cost_nget, self->data_ptr);
}

static int
SystemCosts_set_site_spec_cost(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_site_spec_cost_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_tes_spec_cost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_tes_spec_cost_nget, self->data_ptr);
}

static int
SystemCosts_set_tes_spec_cost(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_tes_spec_cost_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_tower_exp(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_tower_exp_nget, self->data_ptr);
}

static int
SystemCosts_set_tower_exp(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_tower_exp_nset, self->data_ptr);
}

static PyObject *
SystemCosts_get_tower_fixed_cost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemCosts_tower_fixed_cost_nget, self->data_ptr);
}

static int
SystemCosts_set_tower_fixed_cost(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemCosts_tower_fixed_cost_nset, self->data_ptr);
}

static PyGetSetDef SystemCosts_getset[] = {
{"bop_spec_cost", (getter)SystemCosts_get_bop_spec_cost,(setter)SystemCosts_set_bop_spec_cost,
	PyDoc_STR("*float*: BOS specific cost [$/kWe]\n\n*Required*: True"),
 	NULL},
{"contingency_rate", (getter)SystemCosts_get_contingency_rate,(setter)SystemCosts_set_contingency_rate,
	PyDoc_STR("*float*: Contingency for cost overrun [%]\n\n*Required*: True"),
 	NULL},
{"cost_sf_fixed", (getter)SystemCosts_get_cost_sf_fixed,(setter)SystemCosts_set_cost_sf_fixed,
	PyDoc_STR("*float*: Solar field fixed cost [$]\n\n*Required*: True"),
 	NULL},
{"csp_pt_cost_epc_fixed", (getter)SystemCosts_get_csp_pt_cost_epc_fixed,(setter)SystemCosts_set_csp_pt_cost_epc_fixed,
	PyDoc_STR("*float*: EPC fixed [$]\n\n*Required*: True"),
 	NULL},
{"csp_pt_cost_epc_per_acre", (getter)SystemCosts_get_csp_pt_cost_epc_per_acre,(setter)SystemCosts_set_csp_pt_cost_epc_per_acre,
	PyDoc_STR("*float*: EPC cost per acre [$/acre]\n\n*Required*: True"),
 	NULL},
{"csp_pt_cost_epc_per_watt", (getter)SystemCosts_get_csp_pt_cost_epc_per_watt,(setter)SystemCosts_set_csp_pt_cost_epc_per_watt,
	PyDoc_STR("*float*: EPC cost per watt [$/W]\n\n*Required*: True"),
 	NULL},
{"csp_pt_cost_epc_percent", (getter)SystemCosts_get_csp_pt_cost_epc_percent,(setter)SystemCosts_set_csp_pt_cost_epc_percent,
	PyDoc_STR("*float*: EPC cost percent of direct [%]\n\n*Required*: True"),
 	NULL},
{"csp_pt_cost_plm_fixed", (getter)SystemCosts_get_csp_pt_cost_plm_fixed,(setter)SystemCosts_set_csp_pt_cost_plm_fixed,
	PyDoc_STR("*float*: PLM fixed [$]\n\n*Required*: True"),
 	NULL},
{"csp_pt_cost_plm_per_watt", (getter)SystemCosts_get_csp_pt_cost_plm_per_watt,(setter)SystemCosts_set_csp_pt_cost_plm_per_watt,
	PyDoc_STR("*float*: PLM cost per watt [$/W]\n\n*Required*: True"),
 	NULL},
{"csp_pt_cost_plm_percent", (getter)SystemCosts_get_csp_pt_cost_plm_percent,(setter)SystemCosts_set_csp_pt_cost_plm_percent,
	PyDoc_STR("*float*: PLM cost percent of direct [%]\n\n*Required*: True"),
 	NULL},
{"fossil_spec_cost", (getter)SystemCosts_get_fossil_spec_cost,(setter)SystemCosts_set_fossil_spec_cost,
	PyDoc_STR("*float*: Fossil system specific cost [$/kWe]\n\n*Required*: True"),
 	NULL},
{"heliostat_spec_cost", (getter)SystemCosts_get_heliostat_spec_cost,(setter)SystemCosts_set_heliostat_spec_cost,
	PyDoc_STR("*float*: Heliostat field cost [$/m2]\n\n*Required*: True"),
 	NULL},
{"land_spec_cost", (getter)SystemCosts_get_land_spec_cost,(setter)SystemCosts_set_land_spec_cost,
	PyDoc_STR("*float*: Total land area cost [$/acre]\n\n*Required*: True"),
 	NULL},
{"plant_spec_cost", (getter)SystemCosts_get_plant_spec_cost,(setter)SystemCosts_set_plant_spec_cost,
	PyDoc_STR("*float*: Power cycle specific cost [$/kWe]\n\n*Required*: True"),
 	NULL},
{"rec_cost_exp", (getter)SystemCosts_get_rec_cost_exp,(setter)SystemCosts_set_rec_cost_exp,
	PyDoc_STR("*float*: Receiver cost scaling exponent\n\n*Required*: True"),
 	NULL},
{"rec_ref_area", (getter)SystemCosts_get_rec_ref_area,(setter)SystemCosts_set_rec_ref_area,
	PyDoc_STR("*float*: Receiver reference area for cost scale\n\n*Required*: True"),
 	NULL},
{"rec_ref_cost", (getter)SystemCosts_get_rec_ref_cost,(setter)SystemCosts_set_rec_ref_cost,
	PyDoc_STR("*float*: Receiver reference cost [$]\n\n*Required*: True"),
 	NULL},
{"sales_tax_frac", (getter)SystemCosts_get_sales_tax_frac,(setter)SystemCosts_set_sales_tax_frac,
	PyDoc_STR("*float*: Percent of cost to which sales tax applies [%]\n\n*Required*: True"),
 	NULL},
{"site_spec_cost", (getter)SystemCosts_get_site_spec_cost,(setter)SystemCosts_set_site_spec_cost,
	PyDoc_STR("*float*: Site improvement cost [$/m2]\n\n*Required*: True"),
 	NULL},
{"tes_spec_cost", (getter)SystemCosts_get_tes_spec_cost,(setter)SystemCosts_set_tes_spec_cost,
	PyDoc_STR("*float*: Thermal energy storage cost [$/kWht]\n\n*Required*: True"),
 	NULL},
{"tower_exp", (getter)SystemCosts_get_tower_exp,(setter)SystemCosts_set_tower_exp,
	PyDoc_STR("*float*: Tower cost scaling exponent\n\n*Required*: True"),
 	NULL},
{"tower_fixed_cost", (getter)SystemCosts_get_tower_fixed_cost,(setter)SystemCosts_set_tower_fixed_cost,
	PyDoc_STR("*float*: Tower fixed cost [$]\n\n*Required*: True"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject SystemCosts_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"TcsmoltenSalt.SystemCosts",             /*tp_name*/
		sizeof(VarGroupObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		SystemCosts_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		SystemCosts_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * FinancialParameters Group
 */ 

static PyTypeObject FinancialParameters_Type;

static PyObject *
FinancialParameters_new(SAM_TcsmoltenSalt data_ptr)
{
	PyObject* new_obj = FinancialParameters_Type.tp_alloc(&FinancialParameters_Type,0);

	VarGroupObject* FinancialParameters_obj = (VarGroupObject*)new_obj;

	FinancialParameters_obj->data_ptr = (SAM_table)data_ptr;

	return new_obj;
}

/* FinancialParameters methods */

static PyObject *
FinancialParameters_assign(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "TcsmoltenSalt", "FinancialParameters")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
FinancialParameters_export(VarGroupObject *self, PyObject *args)
{
	PyTypeObject* tp = &FinancialParameters_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef FinancialParameters_methods[] = {
		{"assign",            (PyCFunction)FinancialParameters_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``FinancialParameters_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)FinancialParameters_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
FinancialParameters_get_const_per_interest_rate1(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_interest_rate1_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_interest_rate1(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_interest_rate1_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_interest_rate2(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_interest_rate2_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_interest_rate2(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_interest_rate2_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_interest_rate3(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_interest_rate3_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_interest_rate3(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_interest_rate3_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_interest_rate4(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_interest_rate4_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_interest_rate4(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_interest_rate4_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_interest_rate5(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_interest_rate5_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_interest_rate5(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_interest_rate5_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_months1(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_months1_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_months1(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_months1_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_months2(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_months2_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_months2(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_months2_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_months3(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_months3_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_months3(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_months3_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_months4(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_months4_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_months4(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_months4_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_months5(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_months5_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_months5(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_months5_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_percent1(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_percent1_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_percent1(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_percent1_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_percent2(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_percent2_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_percent2(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_percent2_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_percent3(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_percent3_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_percent3(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_percent3_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_percent4(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_percent4_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_percent4(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_percent4_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_percent5(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_percent5_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_percent5(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_percent5_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_upfront_rate1(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_upfront_rate1_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_upfront_rate1(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_upfront_rate1_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_upfront_rate2(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_upfront_rate2_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_upfront_rate2(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_upfront_rate2_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_upfront_rate3(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_upfront_rate3_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_upfront_rate3(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_upfront_rate3_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_upfront_rate4(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_upfront_rate4_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_upfront_rate4(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_upfront_rate4_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_const_per_upfront_rate5(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_const_per_upfront_rate5_nget, self->data_ptr);
}

static int
FinancialParameters_set_const_per_upfront_rate5(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_const_per_upfront_rate5_nset, self->data_ptr);
}

static PyObject *
FinancialParameters_get_sales_tax_rate(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_FinancialParameters_sales_tax_rate_nget, self->data_ptr);
}

static int
FinancialParameters_set_sales_tax_rate(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_FinancialParameters_sales_tax_rate_nset, self->data_ptr);
}

static PyGetSetDef FinancialParameters_getset[] = {
{"const_per_interest_rate1", (getter)FinancialParameters_get_const_per_interest_rate1,(setter)FinancialParameters_set_const_per_interest_rate1,
	PyDoc_STR("*float*: Interest rate, loan 1 [%]\n\n*Required*: True"),
 	NULL},
{"const_per_interest_rate2", (getter)FinancialParameters_get_const_per_interest_rate2,(setter)FinancialParameters_set_const_per_interest_rate2,
	PyDoc_STR("*float*: Interest rate, loan 2 [%]\n\n*Required*: True"),
 	NULL},
{"const_per_interest_rate3", (getter)FinancialParameters_get_const_per_interest_rate3,(setter)FinancialParameters_set_const_per_interest_rate3,
	PyDoc_STR("*float*: Interest rate, loan 3 [%]\n\n*Required*: True"),
 	NULL},
{"const_per_interest_rate4", (getter)FinancialParameters_get_const_per_interest_rate4,(setter)FinancialParameters_set_const_per_interest_rate4,
	PyDoc_STR("*float*: Interest rate, loan 4 [%]\n\n*Required*: True"),
 	NULL},
{"const_per_interest_rate5", (getter)FinancialParameters_get_const_per_interest_rate5,(setter)FinancialParameters_set_const_per_interest_rate5,
	PyDoc_STR("*float*: Interest rate, loan 5 [%]\n\n*Required*: True"),
 	NULL},
{"const_per_months1", (getter)FinancialParameters_get_const_per_months1,(setter)FinancialParameters_set_const_per_months1,
	PyDoc_STR("*float*: Months prior to operation, loan 1\n\n*Required*: True"),
 	NULL},
{"const_per_months2", (getter)FinancialParameters_get_const_per_months2,(setter)FinancialParameters_set_const_per_months2,
	PyDoc_STR("*float*: Months prior to operation, loan 2\n\n*Required*: True"),
 	NULL},
{"const_per_months3", (getter)FinancialParameters_get_const_per_months3,(setter)FinancialParameters_set_const_per_months3,
	PyDoc_STR("*float*: Months prior to operation, loan 3\n\n*Required*: True"),
 	NULL},
{"const_per_months4", (getter)FinancialParameters_get_const_per_months4,(setter)FinancialParameters_set_const_per_months4,
	PyDoc_STR("*float*: Months prior to operation, loan 4\n\n*Required*: True"),
 	NULL},
{"const_per_months5", (getter)FinancialParameters_get_const_per_months5,(setter)FinancialParameters_set_const_per_months5,
	PyDoc_STR("*float*: Months prior to operation, loan 5\n\n*Required*: True"),
 	NULL},
{"const_per_percent1", (getter)FinancialParameters_get_const_per_percent1,(setter)FinancialParameters_set_const_per_percent1,
	PyDoc_STR("*float*: Percent of total installed cost, loan 1 [%]\n\n*Required*: True"),
 	NULL},
{"const_per_percent2", (getter)FinancialParameters_get_const_per_percent2,(setter)FinancialParameters_set_const_per_percent2,
	PyDoc_STR("*float*: Percent of total installed cost, loan 2 [%]\n\n*Required*: True"),
 	NULL},
{"const_per_percent3", (getter)FinancialParameters_get_const_per_percent3,(setter)FinancialParameters_set_const_per_percent3,
	PyDoc_STR("*float*: Percent of total installed cost, loan 3 [%]\n\n*Required*: True"),
 	NULL},
{"const_per_percent4", (getter)FinancialParameters_get_const_per_percent4,(setter)FinancialParameters_set_const_per_percent4,
	PyDoc_STR("*float*: Percent of total installed cost, loan 4 [%]\n\n*Required*: True"),
 	NULL},
{"const_per_percent5", (getter)FinancialParameters_get_const_per_percent5,(setter)FinancialParameters_set_const_per_percent5,
	PyDoc_STR("*float*: Percent of total installed cost, loan 5 [%]\n\n*Required*: True"),
 	NULL},
{"const_per_upfront_rate1", (getter)FinancialParameters_get_const_per_upfront_rate1,(setter)FinancialParameters_set_const_per_upfront_rate1,
	PyDoc_STR("*float*: Upfront fee on principal, loan 1 [%]\n\n*Required*: True"),
 	NULL},
{"const_per_upfront_rate2", (getter)FinancialParameters_get_const_per_upfront_rate2,(setter)FinancialParameters_set_const_per_upfront_rate2,
	PyDoc_STR("*float*: Upfront fee on principal, loan 2 [%]\n\n*Required*: True"),
 	NULL},
{"const_per_upfront_rate3", (getter)FinancialParameters_get_const_per_upfront_rate3,(setter)FinancialParameters_set_const_per_upfront_rate3,
	PyDoc_STR("*float*: Upfront fee on principal, loan 3 [%]\n\n*Required*: True"),
 	NULL},
{"const_per_upfront_rate4", (getter)FinancialParameters_get_const_per_upfront_rate4,(setter)FinancialParameters_set_const_per_upfront_rate4,
	PyDoc_STR("*float*: Upfront fee on principal, loan 4 [%]\n\n*Required*: True"),
 	NULL},
{"const_per_upfront_rate5", (getter)FinancialParameters_get_const_per_upfront_rate5,(setter)FinancialParameters_set_const_per_upfront_rate5,
	PyDoc_STR("*float*: Upfront fee on principal, loan 5 [%]\n\n*Required*: True"),
 	NULL},
{"sales_tax_rate", (getter)FinancialParameters_get_sales_tax_rate,(setter)FinancialParameters_set_sales_tax_rate,
	PyDoc_STR("*float*: Sales tax rate [%]\n\n*Required*: True"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject FinancialParameters_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"TcsmoltenSalt.FinancialParameters",             /*tp_name*/
		sizeof(VarGroupObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		FinancialParameters_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		FinancialParameters_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * ThermalStorage Group
 */ 

static PyTypeObject ThermalStorage_Type;

static PyObject *
ThermalStorage_new(SAM_TcsmoltenSalt data_ptr)
{
	PyObject* new_obj = ThermalStorage_Type.tp_alloc(&ThermalStorage_Type,0);

	VarGroupObject* ThermalStorage_obj = (VarGroupObject*)new_obj;

	ThermalStorage_obj->data_ptr = (SAM_table)data_ptr;

	return new_obj;
}

/* ThermalStorage methods */

static PyObject *
ThermalStorage_assign(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "TcsmoltenSalt", "ThermalStorage")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
ThermalStorage_export(VarGroupObject *self, PyObject *args)
{
	PyTypeObject* tp = &ThermalStorage_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef ThermalStorage_methods[] = {
		{"assign",            (PyCFunction)ThermalStorage_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``ThermalStorage_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)ThermalStorage_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
ThermalStorage_get_cold_tank_Thtr(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_ThermalStorage_cold_tank_Thtr_nget, self->data_ptr);
}

static int
ThermalStorage_set_cold_tank_Thtr(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_ThermalStorage_cold_tank_Thtr_nset, self->data_ptr);
}

static PyObject *
ThermalStorage_get_cold_tank_max_heat(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_ThermalStorage_cold_tank_max_heat_nget, self->data_ptr);
}

static int
ThermalStorage_set_cold_tank_max_heat(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_ThermalStorage_cold_tank_max_heat_nset, self->data_ptr);
}

static PyObject *
ThermalStorage_get_csp_pt_tes_init_hot_htf_percent(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_ThermalStorage_csp_pt_tes_init_hot_htf_percent_nget, self->data_ptr);
}

static int
ThermalStorage_set_csp_pt_tes_init_hot_htf_percent(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_ThermalStorage_csp_pt_tes_init_hot_htf_percent_nset, self->data_ptr);
}

static PyObject *
ThermalStorage_get_h_tank(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_ThermalStorage_h_tank_nget, self->data_ptr);
}

static int
ThermalStorage_set_h_tank(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_ThermalStorage_h_tank_nset, self->data_ptr);
}

static PyObject *
ThermalStorage_get_h_tank_min(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_ThermalStorage_h_tank_min_nget, self->data_ptr);
}

static int
ThermalStorage_set_h_tank_min(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_ThermalStorage_h_tank_min_nset, self->data_ptr);
}

static PyObject *
ThermalStorage_get_hot_tank_Thtr(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_ThermalStorage_hot_tank_Thtr_nget, self->data_ptr);
}

static int
ThermalStorage_set_hot_tank_Thtr(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_ThermalStorage_hot_tank_Thtr_nset, self->data_ptr);
}

static PyObject *
ThermalStorage_get_hot_tank_max_heat(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_ThermalStorage_hot_tank_max_heat_nget, self->data_ptr);
}

static int
ThermalStorage_set_hot_tank_max_heat(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_ThermalStorage_hot_tank_max_heat_nset, self->data_ptr);
}

static PyObject *
ThermalStorage_get_tank_pairs(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_ThermalStorage_tank_pairs_nget, self->data_ptr);
}

static int
ThermalStorage_set_tank_pairs(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_ThermalStorage_tank_pairs_nset, self->data_ptr);
}

static PyObject *
ThermalStorage_get_tanks_in_parallel(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_ThermalStorage_tanks_in_parallel_nget, self->data_ptr);
}

static int
ThermalStorage_set_tanks_in_parallel(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_ThermalStorage_tanks_in_parallel_nset, self->data_ptr);
}

static PyObject *
ThermalStorage_get_u_tank(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_ThermalStorage_u_tank_nget, self->data_ptr);
}

static int
ThermalStorage_set_u_tank(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_ThermalStorage_u_tank_nset, self->data_ptr);
}

static PyGetSetDef ThermalStorage_getset[] = {
{"cold_tank_Thtr", (getter)ThermalStorage_get_cold_tank_Thtr,(setter)ThermalStorage_set_cold_tank_Thtr,
	PyDoc_STR("*float*: Minimum allowable cold tank HTF temperature [C]\n\n*Required*: True"),
 	NULL},
{"cold_tank_max_heat", (getter)ThermalStorage_get_cold_tank_max_heat,(setter)ThermalStorage_set_cold_tank_max_heat,
	PyDoc_STR("*float*: Rated heater capacity for cold tank heating [MW]\n\n*Required*: True"),
 	NULL},
{"csp_pt_tes_init_hot_htf_percent", (getter)ThermalStorage_get_csp_pt_tes_init_hot_htf_percent,(setter)ThermalStorage_set_csp_pt_tes_init_hot_htf_percent,
	PyDoc_STR("*float*: Initial fraction of available volume that is hot [%]\n\n*Required*: True"),
 	NULL},
{"h_tank", (getter)ThermalStorage_get_h_tank,(setter)ThermalStorage_set_h_tank,
	PyDoc_STR("*float*: Total height of tank (height of HTF when tank is full) [m]\n\n*Required*: True"),
 	NULL},
{"h_tank_min", (getter)ThermalStorage_get_h_tank_min,(setter)ThermalStorage_set_h_tank_min,
	PyDoc_STR("*float*: Minimum allowable HTF height in storage tank [m]\n\n*Required*: True"),
 	NULL},
{"hot_tank_Thtr", (getter)ThermalStorage_get_hot_tank_Thtr,(setter)ThermalStorage_set_hot_tank_Thtr,
	PyDoc_STR("*float*: Minimum allowable hot tank HTF temperature [C]\n\n*Required*: True"),
 	NULL},
{"hot_tank_max_heat", (getter)ThermalStorage_get_hot_tank_max_heat,(setter)ThermalStorage_set_hot_tank_max_heat,
	PyDoc_STR("*float*: Rated heater capacity for hot tank heating [MW]\n\n*Required*: True"),
 	NULL},
{"tank_pairs", (getter)ThermalStorage_get_tank_pairs,(setter)ThermalStorage_set_tank_pairs,
	PyDoc_STR("*float*: Number of equivalent tank pairs\n\n*Constraints*: INTEGER\n\n*Required*: True"),
 	NULL},
{"tanks_in_parallel", (getter)ThermalStorage_get_tanks_in_parallel,(setter)ThermalStorage_set_tanks_in_parallel,
	PyDoc_STR("*float*: Tanks are in parallel, not in series, with solar field [-]\n\n*Required*: True"),
 	NULL},
{"u_tank", (getter)ThermalStorage_get_u_tank,(setter)ThermalStorage_set_u_tank,
	PyDoc_STR("*float*: Loss coefficient from the tank [W/m2-K]\n\n*Required*: True"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject ThermalStorage_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"TcsmoltenSalt.ThermalStorage",             /*tp_name*/
		sizeof(VarGroupObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		ThermalStorage_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		ThermalStorage_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * RADCOOL Group
 */ 

static PyTypeObject RADCOOL_Type;

static PyObject *
RADCOOL_new(SAM_TcsmoltenSalt data_ptr)
{
	PyObject* new_obj = RADCOOL_Type.tp_alloc(&RADCOOL_Type,0);

	VarGroupObject* RADCOOL_obj = (VarGroupObject*)new_obj;

	RADCOOL_obj->data_ptr = (SAM_table)data_ptr;

	return new_obj;
}

/* RADCOOL methods */

static PyObject *
RADCOOL_assign(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "TcsmoltenSalt", "RADCOOL")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
RADCOOL_export(VarGroupObject *self, PyObject *args)
{
	PyTypeObject* tp = &RADCOOL_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef RADCOOL_methods[] = {
		{"assign",            (PyCFunction)RADCOOL_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``RADCOOL_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)RADCOOL_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
RADCOOL_get_D_rad_tubes(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_D_rad_tubes_nget, self->data_ptr);
}

static int
RADCOOL_set_D_rad_tubes(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_D_rad_tubes_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_L_rad(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_L_rad_nget, self->data_ptr);
}

static int
RADCOOL_set_L_rad(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_L_rad_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_L_rad_sections(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_L_rad_sections_nget, self->data_ptr);
}

static int
RADCOOL_set_L_rad_sections(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_L_rad_sections_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_T_ctes_cold_design(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_T_ctes_cold_design_nget, self->data_ptr);
}

static int
RADCOOL_set_T_ctes_cold_design(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_T_ctes_cold_design_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_T_ctes_cold_ini(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_T_ctes_cold_ini_nget, self->data_ptr);
}

static int
RADCOOL_set_T_ctes_cold_ini(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_T_ctes_cold_ini_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_T_ctes_warm_design(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_T_ctes_warm_design_nget, self->data_ptr);
}

static int
RADCOOL_set_T_ctes_warm_design(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_T_ctes_warm_design_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_T_ctes_warm_ini(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_T_ctes_warm_ini_nget, self->data_ptr);
}

static int
RADCOOL_set_T_ctes_warm_ini(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_T_ctes_warm_ini_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_W_rad_tubes(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_W_rad_tubes_nget, self->data_ptr);
}

static int
RADCOOL_set_W_rad_tubes(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_W_rad_tubes_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_ctes_cost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_ctes_cost_nget, self->data_ptr);
}

static int
RADCOOL_set_ctes_cost(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_ctes_cost_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_ctes_field_fl(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_ctes_field_fl_nget, self->data_ptr);
}

static int
RADCOOL_set_ctes_field_fl(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_ctes_field_fl_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_ctes_tankpairs(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_ctes_tankpairs_nget, self->data_ptr);
}

static int
RADCOOL_set_ctes_tankpairs(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_ctes_tankpairs_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_ctes_tshours(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_ctes_tshours_nget, self->data_ptr);
}

static int
RADCOOL_set_ctes_tshours(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_ctes_tshours_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_ctes_type(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_ctes_type_nget, self->data_ptr);
}

static int
RADCOOL_set_ctes_type(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_ctes_type_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_epsilon_radHX(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_epsilon_radHX_nget, self->data_ptr);
}

static int
RADCOOL_set_epsilon_radHX(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_epsilon_radHX_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_epsilon_radbot(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_epsilon_radbot_nget, self->data_ptr);
}

static int
RADCOOL_set_epsilon_radbot(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_epsilon_radbot_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_epsilon_radgrnd(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_epsilon_radgrnd_nget, self->data_ptr);
}

static int
RADCOOL_set_epsilon_radgrnd(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_epsilon_radgrnd_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_epsilon_radtop(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_epsilon_radtop_nget, self->data_ptr);
}

static int
RADCOOL_set_epsilon_radtop(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_epsilon_radtop_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_f_ctes_warm_ini(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_f_ctes_warm_ini_nget, self->data_ptr);
}

static int
RADCOOL_set_f_ctes_warm_ini(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_f_ctes_warm_ini_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_h_ctes_tank(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_h_ctes_tank_nget, self->data_ptr);
}

static int
RADCOOL_set_h_ctes_tank(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_h_ctes_tank_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_h_ctes_tank_min(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_h_ctes_tank_min_nget, self->data_ptr);
}

static int
RADCOOL_set_h_ctes_tank_min(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_h_ctes_tank_min_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_helio_area_tot(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_helio_area_tot_nget, self->data_ptr);
}

static int
RADCOOL_set_helio_area_tot(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_helio_area_tot_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_k_panel(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_k_panel_nget, self->data_ptr);
}

static int
RADCOOL_set_k_panel(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_k_panel_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_m_dot_radpanel(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_m_dot_radpanel_nget, self->data_ptr);
}

static int
RADCOOL_set_m_dot_radpanel(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_m_dot_radpanel_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_n_rad_tubes(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_n_rad_tubes_nget, self->data_ptr);
}

static int
RADCOOL_set_n_rad_tubes(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_n_rad_tubes_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_rad_multiplier(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_rad_multiplier_nget, self->data_ptr);
}

static int
RADCOOL_set_rad_multiplier(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_rad_multiplier_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_rad_pressuredrop(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_rad_pressuredrop_nget, self->data_ptr);
}

static int
RADCOOL_set_rad_pressuredrop(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_rad_pressuredrop_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_radfluid_vol_ratio(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_radfluid_vol_ratio_nget, self->data_ptr);
}

static int
RADCOOL_set_radfluid_vol_ratio(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_radfluid_vol_ratio_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_radiator_fluidcost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_radiator_fluidcost_nget, self->data_ptr);
}

static int
RADCOOL_set_radiator_fluidcost(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_radiator_fluidcost_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_radiator_installcost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_radiator_installcost_nget, self->data_ptr);
}

static int
RADCOOL_set_radiator_installcost(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_radiator_installcost_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_radiator_unitcost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_radiator_unitcost_nget, self->data_ptr);
}

static int
RADCOOL_set_radiator_unitcost(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_radiator_unitcost_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_th_rad_panel(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_th_rad_panel_nget, self->data_ptr);
}

static int
RADCOOL_set_th_rad_panel(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_th_rad_panel_nset, self->data_ptr);
}

static PyObject *
RADCOOL_get_u_ctes_tank(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RADCOOL_u_ctes_tank_nget, self->data_ptr);
}

static int
RADCOOL_set_u_ctes_tank(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RADCOOL_u_ctes_tank_nset, self->data_ptr);
}

static PyGetSetDef RADCOOL_getset[] = {
{"D_rad_tubes", (getter)RADCOOL_get_D_rad_tubes,(setter)RADCOOL_set_D_rad_tubes,
	PyDoc_STR("*float*: Inner diameter of tubes in radiator panel [m]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"L_rad", (getter)RADCOOL_get_L_rad,(setter)RADCOOL_set_L_rad,
	PyDoc_STR("*float*: Length of radiator panel row [m]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"L_rad_sections", (getter)RADCOOL_get_L_rad_sections,(setter)RADCOOL_set_L_rad_sections,
	PyDoc_STR("*float*: Length of individual radiator panel [m]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"T_ctes_cold_design", (getter)RADCOOL_get_T_ctes_cold_design,(setter)RADCOOL_set_T_ctes_cold_design,
	PyDoc_STR("*float*: Design value of cooled water to power block [C]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"T_ctes_cold_ini", (getter)RADCOOL_get_T_ctes_cold_ini,(setter)RADCOOL_set_T_ctes_cold_ini,
	PyDoc_STR("*float*: Initial value of cold tank [C]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"T_ctes_warm_design", (getter)RADCOOL_get_T_ctes_warm_design,(setter)RADCOOL_set_T_ctes_warm_design,
	PyDoc_STR("*float*: Design value of warm water returning from power block [C]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"T_ctes_warm_ini", (getter)RADCOOL_get_T_ctes_warm_ini,(setter)RADCOOL_set_T_ctes_warm_ini,
	PyDoc_STR("*float*: Initial value of warm tank [C]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"W_rad_tubes", (getter)RADCOOL_get_W_rad_tubes,(setter)RADCOOL_set_W_rad_tubes,
	PyDoc_STR("*float*: Center-to-center distance between tubes in radiator panel [m]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"ctes_cost", (getter)RADCOOL_get_ctes_cost,(setter)RADCOOL_set_ctes_cost,
	PyDoc_STR("*float*: Cost of cold storage construction [$/L]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"ctes_field_fl", (getter)RADCOOL_get_ctes_field_fl,(setter)RADCOOL_set_ctes_field_fl,
	PyDoc_STR("*float*: Fluid in radiator field. 3=liquid water. Other = Glycol. [-]\n\n*Required*: If not provided, assumed to be 3"),
 	NULL},
{"ctes_tankpairs", (getter)RADCOOL_get_ctes_tankpairs,(setter)RADCOOL_set_ctes_tankpairs,
	PyDoc_STR("*float*: Number of equivalent tank pairs [-]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"ctes_tshours", (getter)RADCOOL_get_ctes_tshours,(setter)RADCOOL_set_ctes_tshours,
	PyDoc_STR("*float*: Equivalent full load storage hours [hr]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"ctes_type", (getter)RADCOOL_get_ctes_type,(setter)RADCOOL_set_ctes_type,
	PyDoc_STR("*float*: Type of cold storage (2=two tank, 3= three node) [-]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"epsilon_radHX", (getter)RADCOOL_get_epsilon_radHX,(setter)RADCOOL_set_epsilon_radHX,
	PyDoc_STR("*float*: Effectiveness of HX between radiative field and cold storage [-]\n\n*Required*: If not provided, assumed to be .8"),
 	NULL},
{"epsilon_radbot", (getter)RADCOOL_get_epsilon_radbot,(setter)RADCOOL_set_epsilon_radbot,
	PyDoc_STR("*float*: Emmissivity of top of radiator panel bottom (facing ground) [-]\n\n*Required*: If not provided, assumed to be .07"),
 	NULL},
{"epsilon_radgrnd", (getter)RADCOOL_get_epsilon_radgrnd,(setter)RADCOOL_set_epsilon_radgrnd,
	PyDoc_STR("*float*: Emmissivity of ground underneath radiator panel [-]\n\n*Required*: If not provided, assumed to be .90"),
 	NULL},
{"epsilon_radtop", (getter)RADCOOL_get_epsilon_radtop,(setter)RADCOOL_set_epsilon_radtop,
	PyDoc_STR("*float*: Emmissivity of top of radiator panel [-]\n\n*Required*: If not provided, assumed to be .95"),
 	NULL},
{"f_ctes_warm_ini", (getter)RADCOOL_get_f_ctes_warm_ini,(setter)RADCOOL_set_f_ctes_warm_ini,
	PyDoc_STR("*float*: Initial fraction of avail. volume that is warm [-]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"h_ctes_tank", (getter)RADCOOL_get_h_ctes_tank,(setter)RADCOOL_set_h_ctes_tank,
	PyDoc_STR("*float*: Total height of cold storage tank when full [m]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"h_ctes_tank_min", (getter)RADCOOL_get_h_ctes_tank_min,(setter)RADCOOL_set_h_ctes_tank_min,
	PyDoc_STR("*float*: Minimum allowable water height in storage tank [m]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"helio_area_tot", (getter)RADCOOL_get_helio_area_tot,(setter)RADCOOL_set_helio_area_tot,
	PyDoc_STR("*float*: Heliostat total reflective area [-]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"k_panel", (getter)RADCOOL_get_k_panel,(setter)RADCOOL_set_k_panel,
	PyDoc_STR("*float*: Thermal conductivity of radiator panel material [W/m-K]\n\n*Required*: If not provided, assumed to be 235"),
 	NULL},
{"m_dot_radpanel", (getter)RADCOOL_get_m_dot_radpanel,(setter)RADCOOL_set_m_dot_radpanel,
	PyDoc_STR("*float*: Mass flow rate through single radiator panel [kg/sec]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"n_rad_tubes", (getter)RADCOOL_get_n_rad_tubes,(setter)RADCOOL_set_n_rad_tubes,
	PyDoc_STR("*float*: Number of parallel tubes in single radiator panel [-]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"rad_multiplier", (getter)RADCOOL_get_rad_multiplier,(setter)RADCOOL_set_rad_multiplier,
	PyDoc_STR("*float*: Ratio of radiator field area to solar aperature area [-]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"rad_pressuredrop", (getter)RADCOOL_get_rad_pressuredrop,(setter)RADCOOL_set_rad_pressuredrop,
	PyDoc_STR("*float*: Average pressure drop through a radiative panel & distribution [kPa]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"radfluid_vol_ratio", (getter)RADCOOL_get_radfluid_vol_ratio,(setter)RADCOOL_set_radfluid_vol_ratio,
	PyDoc_STR("*float*: Ratio of fluid in distribution to fluid in panels [-]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"radiator_fluidcost", (getter)RADCOOL_get_radiator_fluidcost,(setter)RADCOOL_set_radiator_fluidcost,
	PyDoc_STR("*float*: Cost of circulating fluid in radiative panels [$/L]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"radiator_installcost", (getter)RADCOOL_get_radiator_installcost,(setter)RADCOOL_set_radiator_installcost,
	PyDoc_STR("*float*: Installation cost of radiative panels [$/m^2]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"radiator_unitcost", (getter)RADCOOL_get_radiator_unitcost,(setter)RADCOOL_set_radiator_unitcost,
	PyDoc_STR("*float*: Cost of radiative panels [$/m^2]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"th_rad_panel", (getter)RADCOOL_get_th_rad_panel,(setter)RADCOOL_set_th_rad_panel,
	PyDoc_STR("*float*: Thickness of radiator panel [m]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"u_ctes_tank", (getter)RADCOOL_get_u_ctes_tank,(setter)RADCOOL_set_u_ctes_tank,
	PyDoc_STR("*float*: Loss coefficient from cold storage tank [W/m2-K]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject RADCOOL_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"TcsmoltenSalt.RADCOOL",             /*tp_name*/
		sizeof(VarGroupObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		RADCOOL_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		RADCOOL_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * PowerCycle Group
 */ 

static PyTypeObject PowerCycle_Type;

static PyObject *
PowerCycle_new(SAM_TcsmoltenSalt data_ptr)
{
	PyObject* new_obj = PowerCycle_Type.tp_alloc(&PowerCycle_Type,0);

	VarGroupObject* PowerCycle_obj = (VarGroupObject*)new_obj;

	PowerCycle_obj->data_ptr = (SAM_table)data_ptr;

	return new_obj;
}

/* PowerCycle methods */

static PyObject *
PowerCycle_assign(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "TcsmoltenSalt", "PowerCycle")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
PowerCycle_export(VarGroupObject *self, PyObject *args)
{
	PyTypeObject* tp = &PowerCycle_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef PowerCycle_methods[] = {
		{"assign",            (PyCFunction)PowerCycle_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``PowerCycle_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)PowerCycle_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
PowerCycle_get_cycle_cutoff_frac(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_PowerCycle_cycle_cutoff_frac_nget, self->data_ptr);
}

static int
PowerCycle_set_cycle_cutoff_frac(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_PowerCycle_cycle_cutoff_frac_nset, self->data_ptr);
}

static PyObject *
PowerCycle_get_cycle_max_frac(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_PowerCycle_cycle_max_frac_nget, self->data_ptr);
}

static int
PowerCycle_set_cycle_max_frac(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_PowerCycle_cycle_max_frac_nset, self->data_ptr);
}

static PyObject *
PowerCycle_get_pb_pump_coef(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_PowerCycle_pb_pump_coef_nget, self->data_ptr);
}

static int
PowerCycle_set_pb_pump_coef(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_PowerCycle_pb_pump_coef_nset, self->data_ptr);
}

static PyObject *
PowerCycle_get_pc_config(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_PowerCycle_pc_config_nget, self->data_ptr);
}

static int
PowerCycle_set_pc_config(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_PowerCycle_pc_config_nset, self->data_ptr);
}

static PyObject *
PowerCycle_get_q_sby_frac(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_PowerCycle_q_sby_frac_nget, self->data_ptr);
}

static int
PowerCycle_set_q_sby_frac(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_PowerCycle_q_sby_frac_nset, self->data_ptr);
}

static PyObject *
PowerCycle_get_startup_frac(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_PowerCycle_startup_frac_nget, self->data_ptr);
}

static int
PowerCycle_set_startup_frac(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_PowerCycle_startup_frac_nset, self->data_ptr);
}

static PyObject *
PowerCycle_get_startup_time(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_PowerCycle_startup_time_nget, self->data_ptr);
}

static int
PowerCycle_set_startup_time(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_PowerCycle_startup_time_nset, self->data_ptr);
}

static PyGetSetDef PowerCycle_getset[] = {
{"cycle_cutoff_frac", (getter)PowerCycle_get_cycle_cutoff_frac,(setter)PowerCycle_set_cycle_cutoff_frac,
	PyDoc_STR("*float*: Minimum turbine operation fraction before shutdown\n\n*Required*: True"),
 	NULL},
{"cycle_max_frac", (getter)PowerCycle_get_cycle_max_frac,(setter)PowerCycle_set_cycle_max_frac,
	PyDoc_STR("*float*: Maximum turbine over design operation fraction\n\n*Required*: True"),
 	NULL},
{"pb_pump_coef", (getter)PowerCycle_get_pb_pump_coef,(setter)PowerCycle_set_pb_pump_coef,
	PyDoc_STR("*float*: Pumping power to move 1kg of HTF through PB loop [kW/kg]\n\n*Required*: True"),
 	NULL},
{"pc_config", (getter)PowerCycle_get_pc_config,(setter)PowerCycle_set_pc_config,
	PyDoc_STR("*float*: PC configuration 0=Steam Rankine (224), 1=user defined, 2=sCO2 Recompression (424)\n\n*Constraints*: INTEGER\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"q_sby_frac", (getter)PowerCycle_get_q_sby_frac,(setter)PowerCycle_set_q_sby_frac,
	PyDoc_STR("*float*: Fraction of thermal power required for standby\n\n*Required*: True"),
 	NULL},
{"startup_frac", (getter)PowerCycle_get_startup_frac,(setter)PowerCycle_set_startup_frac,
	PyDoc_STR("*float*: Fraction of design thermal power needed for startup [none]\n\n*Required*: True"),
 	NULL},
{"startup_time", (getter)PowerCycle_get_startup_time,(setter)PowerCycle_set_startup_time,
	PyDoc_STR("*float*: Time needed for power block startup [hr]\n\n*Required*: True"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject PowerCycle_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"TcsmoltenSalt.PowerCycle",             /*tp_name*/
		sizeof(VarGroupObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		PowerCycle_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		PowerCycle_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * RankineCycle Group
 */ 

static PyTypeObject RankineCycle_Type;

static PyObject *
RankineCycle_new(SAM_TcsmoltenSalt data_ptr)
{
	PyObject* new_obj = RankineCycle_Type.tp_alloc(&RankineCycle_Type,0);

	VarGroupObject* RankineCycle_obj = (VarGroupObject*)new_obj;

	RankineCycle_obj->data_ptr = (SAM_table)data_ptr;

	return new_obj;
}

/* RankineCycle methods */

static PyObject *
RankineCycle_assign(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "TcsmoltenSalt", "RankineCycle")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
RankineCycle_export(VarGroupObject *self, PyObject *args)
{
	PyTypeObject* tp = &RankineCycle_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef RankineCycle_methods[] = {
		{"assign",            (PyCFunction)RankineCycle_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``RankineCycle_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)RankineCycle_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
RankineCycle_get_CT(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RankineCycle_CT_nget, self->data_ptr);
}

static int
RankineCycle_set_CT(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RankineCycle_CT_nset, self->data_ptr);
}

static PyObject *
RankineCycle_get_P_boil(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RankineCycle_P_boil_nget, self->data_ptr);
}

static int
RankineCycle_set_P_boil(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RankineCycle_P_boil_nset, self->data_ptr);
}

static PyObject *
RankineCycle_get_P_cond_min(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RankineCycle_P_cond_min_nget, self->data_ptr);
}

static int
RankineCycle_set_P_cond_min(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RankineCycle_P_cond_min_nset, self->data_ptr);
}

static PyObject *
RankineCycle_get_P_cond_ratio(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RankineCycle_P_cond_ratio_nget, self->data_ptr);
}

static int
RankineCycle_set_P_cond_ratio(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RankineCycle_P_cond_ratio_nset, self->data_ptr);
}

static PyObject *
RankineCycle_get_T_ITD_des(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RankineCycle_T_ITD_des_nget, self->data_ptr);
}

static int
RankineCycle_set_T_ITD_des(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RankineCycle_T_ITD_des_nset, self->data_ptr);
}

static PyObject *
RankineCycle_get_T_amb_des(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RankineCycle_T_amb_des_nget, self->data_ptr);
}

static int
RankineCycle_set_T_amb_des(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RankineCycle_T_amb_des_nset, self->data_ptr);
}

static PyObject *
RankineCycle_get_T_approach(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RankineCycle_T_approach_nget, self->data_ptr);
}

static int
RankineCycle_set_T_approach(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RankineCycle_T_approach_nset, self->data_ptr);
}

static PyObject *
RankineCycle_get_dT_cw_ref(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RankineCycle_dT_cw_ref_nget, self->data_ptr);
}

static int
RankineCycle_set_dT_cw_ref(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RankineCycle_dT_cw_ref_nset, self->data_ptr);
}

static PyObject *
RankineCycle_get_n_pl_inc(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RankineCycle_n_pl_inc_nget, self->data_ptr);
}

static int
RankineCycle_set_n_pl_inc(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RankineCycle_n_pl_inc_nset, self->data_ptr);
}

static PyObject *
RankineCycle_get_pb_bd_frac(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RankineCycle_pb_bd_frac_nget, self->data_ptr);
}

static int
RankineCycle_set_pb_bd_frac(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RankineCycle_pb_bd_frac_nset, self->data_ptr);
}

static PyObject *
RankineCycle_get_tech_type(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_RankineCycle_tech_type_nget, self->data_ptr);
}

static int
RankineCycle_set_tech_type(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_RankineCycle_tech_type_nset, self->data_ptr);
}

static PyGetSetDef RankineCycle_getset[] = {
{"CT", (getter)RankineCycle_get_CT,(setter)RankineCycle_set_CT,
	PyDoc_STR("*float*: Condensor type: 1=evaporative, 2=air, 3=hybrid\n\n*Required*: True if pc_config=0"),
 	NULL},
{"P_boil", (getter)RankineCycle_get_P_boil,(setter)RankineCycle_set_P_boil,
	PyDoc_STR("*float*: Boiler operating pressure [bar]\n\n*Required*: True if pc_config=0"),
 	NULL},
{"P_cond_min", (getter)RankineCycle_get_P_cond_min,(setter)RankineCycle_set_P_cond_min,
	PyDoc_STR("*float*: Minimum condenser pressure [inHg]\n\n*Required*: True if pc_config=0"),
 	NULL},
{"P_cond_ratio", (getter)RankineCycle_get_P_cond_ratio,(setter)RankineCycle_set_P_cond_ratio,
	PyDoc_STR("*float*: Condenser pressure ratio\n\n*Required*: True if pc_config=0"),
 	NULL},
{"T_ITD_des", (getter)RankineCycle_get_T_ITD_des,(setter)RankineCycle_set_T_ITD_des,
	PyDoc_STR("*float*: ITD at design for dry system [C]\n\n*Required*: True if pc_config=0"),
 	NULL},
{"T_amb_des", (getter)RankineCycle_get_T_amb_des,(setter)RankineCycle_set_T_amb_des,
	PyDoc_STR("*float*: Reference ambient temperature at design point [C]\n\n*Required*: True if pc_config=0"),
 	NULL},
{"T_approach", (getter)RankineCycle_get_T_approach,(setter)RankineCycle_set_T_approach,
	PyDoc_STR("*float*: Cooling tower approach temperature [C]\n\n*Required*: True if pc_config=0"),
 	NULL},
{"dT_cw_ref", (getter)RankineCycle_get_dT_cw_ref,(setter)RankineCycle_set_dT_cw_ref,
	PyDoc_STR("*float*: Reference condenser cooling water inlet/outlet temperature difference [C]\n\n*Required*: True if pc_config=0"),
 	NULL},
{"n_pl_inc", (getter)RankineCycle_get_n_pl_inc,(setter)RankineCycle_set_n_pl_inc,
	PyDoc_STR("*float*: Number of part-load increments for the heat rejection system [none]\n\n*Constraints*: INTEGER\n\n*Required*: True if pc_config=0"),
 	NULL},
{"pb_bd_frac", (getter)RankineCycle_get_pb_bd_frac,(setter)RankineCycle_set_pb_bd_frac,
	PyDoc_STR("*float*: Power block blowdown steam fraction\n\n*Required*: True if pc_config=0"),
 	NULL},
{"tech_type", (getter)RankineCycle_get_tech_type,(setter)RankineCycle_set_tech_type,
	PyDoc_STR("*float*: Turbine inlet pressure control 1=Fixed, 3=Sliding\n\n*Required*: True if pc_config=0"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject RankineCycle_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"TcsmoltenSalt.RankineCycle",             /*tp_name*/
		sizeof(VarGroupObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		RankineCycle_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		RankineCycle_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * SystemControl Group
 */ 

static PyTypeObject SystemControl_Type;

static PyObject *
SystemControl_new(SAM_TcsmoltenSalt data_ptr)
{
	PyObject* new_obj = SystemControl_Type.tp_alloc(&SystemControl_Type,0);

	VarGroupObject* SystemControl_obj = (VarGroupObject*)new_obj;

	SystemControl_obj->data_ptr = (SAM_table)data_ptr;

	return new_obj;
}

/* SystemControl methods */

static PyObject *
SystemControl_assign(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "TcsmoltenSalt", "SystemControl")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
SystemControl_export(VarGroupObject *self, PyObject *args)
{
	PyTypeObject* tp = &SystemControl_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef SystemControl_methods[] = {
		{"assign",            (PyCFunction)SystemControl_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``SystemControl_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)SystemControl_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
SystemControl_get_F_wc(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_SystemControl_F_wc_aget, self->data_ptr);
}

static int
SystemControl_set_F_wc(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_array_setter(value, SAM_TcsmoltenSalt_SystemControl_F_wc_aset, self->data_ptr);
}

static PyObject *
SystemControl_get_ampl_data_dir(VarGroupObject *self, void *closure)
{
	return PySAM_string_getter(SAM_TcsmoltenSalt_SystemControl_ampl_data_dir_sget, self->data_ptr);
}

static int
SystemControl_set_ampl_data_dir(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_string_setter(value, SAM_TcsmoltenSalt_SystemControl_ampl_data_dir_sset, self->data_ptr);
}

static PyObject *
SystemControl_get_ampl_exec_call(VarGroupObject *self, void *closure)
{
	return PySAM_string_getter(SAM_TcsmoltenSalt_SystemControl_ampl_exec_call_sget, self->data_ptr);
}

static int
SystemControl_set_ampl_exec_call(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_string_setter(value, SAM_TcsmoltenSalt_SystemControl_ampl_exec_call_sset, self->data_ptr);
}

static PyObject *
SystemControl_get_aux_par(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_aux_par_nget, self->data_ptr);
}

static int
SystemControl_set_aux_par(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_aux_par_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_aux_par_0(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_aux_par_0_nget, self->data_ptr);
}

static int
SystemControl_set_aux_par_0(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_aux_par_0_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_aux_par_1(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_aux_par_1_nget, self->data_ptr);
}

static int
SystemControl_set_aux_par_1(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_aux_par_1_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_aux_par_2(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_aux_par_2_nget, self->data_ptr);
}

static int
SystemControl_set_aux_par_2(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_aux_par_2_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_aux_par_f(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_aux_par_f_nget, self->data_ptr);
}

static int
SystemControl_set_aux_par_f(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_aux_par_f_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_bop_par(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_bop_par_nget, self->data_ptr);
}

static int
SystemControl_set_bop_par(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_bop_par_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_bop_par_0(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_bop_par_0_nget, self->data_ptr);
}

static int
SystemControl_set_bop_par_0(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_bop_par_0_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_bop_par_1(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_bop_par_1_nget, self->data_ptr);
}

static int
SystemControl_set_bop_par_1(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_bop_par_1_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_bop_par_2(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_bop_par_2_nget, self->data_ptr);
}

static int
SystemControl_set_bop_par_2(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_bop_par_2_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_bop_par_f(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_bop_par_f_nget, self->data_ptr);
}

static int
SystemControl_set_bop_par_f(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_bop_par_f_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_disp_csu_cost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_disp_csu_cost_nget, self->data_ptr);
}

static int
SystemControl_set_disp_csu_cost(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_disp_csu_cost_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_disp_frequency(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_disp_frequency_nget, self->data_ptr);
}

static int
SystemControl_set_disp_frequency(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_disp_frequency_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_disp_horizon(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_disp_horizon_nget, self->data_ptr);
}

static int
SystemControl_set_disp_horizon(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_disp_horizon_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_disp_inventory_incentive(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_disp_inventory_incentive_nget, self->data_ptr);
}

static int
SystemControl_set_disp_inventory_incentive(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_disp_inventory_incentive_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_disp_max_iter(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_disp_max_iter_nget, self->data_ptr);
}

static int
SystemControl_set_disp_max_iter(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_disp_max_iter_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_disp_mip_gap(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_disp_mip_gap_nget, self->data_ptr);
}

static int
SystemControl_set_disp_mip_gap(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_disp_mip_gap_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_disp_pen_delta_w(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_disp_pen_delta_w_nget, self->data_ptr);
}

static int
SystemControl_set_disp_pen_delta_w(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_disp_pen_delta_w_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_disp_reporting(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_disp_reporting_nget, self->data_ptr);
}

static int
SystemControl_set_disp_reporting(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_disp_reporting_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_disp_rsu_cost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_disp_rsu_cost_nget, self->data_ptr);
}

static int
SystemControl_set_disp_rsu_cost(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_disp_rsu_cost_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_disp_spec_bb(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_disp_spec_bb_nget, self->data_ptr);
}

static int
SystemControl_set_disp_spec_bb(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_disp_spec_bb_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_disp_spec_presolve(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_disp_spec_presolve_nget, self->data_ptr);
}

static int
SystemControl_set_disp_spec_presolve(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_disp_spec_presolve_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_disp_spec_scaling(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_disp_spec_scaling_nget, self->data_ptr);
}

static int
SystemControl_set_disp_spec_scaling(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_disp_spec_scaling_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_disp_steps_per_hour(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_disp_steps_per_hour_nget, self->data_ptr);
}

static int
SystemControl_set_disp_steps_per_hour(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_disp_steps_per_hour_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_disp_time_weighting(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_disp_time_weighting_nget, self->data_ptr);
}

static int
SystemControl_set_disp_time_weighting(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_disp_time_weighting_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_disp_timeout(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_disp_timeout_nget, self->data_ptr);
}

static int
SystemControl_set_disp_timeout(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_disp_timeout_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_dispatch_series(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_SystemControl_dispatch_series_aget, self->data_ptr);
}

static int
SystemControl_set_dispatch_series(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_array_setter(value, SAM_TcsmoltenSalt_SystemControl_dispatch_series_aset, self->data_ptr);
}

static PyObject *
SystemControl_get_f_turb_tou_periods(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_SystemControl_f_turb_tou_periods_aget, self->data_ptr);
}

static int
SystemControl_set_f_turb_tou_periods(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_array_setter(value, SAM_TcsmoltenSalt_SystemControl_f_turb_tou_periods_aset, self->data_ptr);
}

static PyObject *
SystemControl_get_is_ampl_engine(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_is_ampl_engine_nget, self->data_ptr);
}

static int
SystemControl_set_is_ampl_engine(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_is_ampl_engine_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_is_dispatch(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_is_dispatch_nget, self->data_ptr);
}

static int
SystemControl_set_is_dispatch(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_is_dispatch_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_is_dispatch_series(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_is_dispatch_series_nget, self->data_ptr);
}

static int
SystemControl_set_is_dispatch_series(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_is_dispatch_series_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_is_tod_pc_target_also_pc_max(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_is_tod_pc_target_also_pc_max_nget, self->data_ptr);
}

static int
SystemControl_set_is_tod_pc_target_also_pc_max(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_is_tod_pc_target_also_pc_max_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_is_wlim_series(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_is_wlim_series_nget, self->data_ptr);
}

static int
SystemControl_set_is_wlim_series(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_is_wlim_series_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_is_write_ampl_dat(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_is_write_ampl_dat_nget, self->data_ptr);
}

static int
SystemControl_set_is_write_ampl_dat(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_is_write_ampl_dat_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_pb_fixed_par(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_pb_fixed_par_nget, self->data_ptr);
}

static int
SystemControl_set_pb_fixed_par(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_pb_fixed_par_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_q_rec_heattrace(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_q_rec_heattrace_nget, self->data_ptr);
}

static int
SystemControl_set_q_rec_heattrace(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_q_rec_heattrace_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_q_rec_standby(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_q_rec_standby_nget, self->data_ptr);
}

static int
SystemControl_set_q_rec_standby(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_q_rec_standby_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_time_start(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_time_start_nget, self->data_ptr);
}

static int
SystemControl_set_time_start(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_time_start_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_time_steps_per_hour(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_time_steps_per_hour_nget, self->data_ptr);
}

static int
SystemControl_set_time_steps_per_hour(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_time_steps_per_hour_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_time_stop(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_time_stop_nget, self->data_ptr);
}

static int
SystemControl_set_time_stop(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_time_stop_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_vacuum_arrays(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SystemControl_vacuum_arrays_nget, self->data_ptr);
}

static int
SystemControl_set_vacuum_arrays(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SystemControl_vacuum_arrays_nset, self->data_ptr);
}

static PyObject *
SystemControl_get_weekday_schedule(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_SystemControl_weekday_schedule_mget, self->data_ptr);
}

static int
SystemControl_set_weekday_schedule(VarGroupObject *self, PyObject *value, void *closure)
{
		return PySAM_matrix_setter(value, SAM_TcsmoltenSalt_SystemControl_weekday_schedule_mset, self->data_ptr);
}

static PyObject *
SystemControl_get_weekend_schedule(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_SystemControl_weekend_schedule_mget, self->data_ptr);
}

static int
SystemControl_set_weekend_schedule(VarGroupObject *self, PyObject *value, void *closure)
{
		return PySAM_matrix_setter(value, SAM_TcsmoltenSalt_SystemControl_weekend_schedule_mset, self->data_ptr);
}

static PyObject *
SystemControl_get_wlim_series(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_SystemControl_wlim_series_aget, self->data_ptr);
}

static int
SystemControl_set_wlim_series(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_array_setter(value, SAM_TcsmoltenSalt_SystemControl_wlim_series_aset, self->data_ptr);
}

static PyGetSetDef SystemControl_getset[] = {
{"F_wc", (getter)SystemControl_get_F_wc,(setter)SystemControl_set_F_wc,
	PyDoc_STR("*sequence*: TOU array of fractions indicating wet cooling share for hybrid cooling\n\n*Required*: True if pc_config=0"),
 	NULL},
{"ampl_data_dir", (getter)SystemControl_get_ampl_data_dir,(setter)SystemControl_set_ampl_data_dir,
	PyDoc_STR("*str*: AMPL data file directory\n\n*Required*: If not provided, assumed to be ''"),
 	NULL},
{"ampl_exec_call", (getter)SystemControl_get_ampl_exec_call,(setter)SystemControl_set_ampl_exec_call,
	PyDoc_STR("*str*: System command to run AMPL code\n\n*Required*: If not provided, assumed to be 'ampl sdk_solution.run'"),
 	NULL},
{"aux_par", (getter)SystemControl_get_aux_par,(setter)SystemControl_set_aux_par,
	PyDoc_STR("*float*: Aux heater, boiler parasitic [MWe/MWcap]\n\n*Required*: True"),
 	NULL},
{"aux_par_0", (getter)SystemControl_get_aux_par_0,(setter)SystemControl_set_aux_par_0,
	PyDoc_STR("*float*: Aux heater, boiler parasitic - constant coefficient\n\n*Required*: True"),
 	NULL},
{"aux_par_1", (getter)SystemControl_get_aux_par_1,(setter)SystemControl_set_aux_par_1,
	PyDoc_STR("*float*: Aux heater, boiler parasitic - linear coefficient\n\n*Required*: True"),
 	NULL},
{"aux_par_2", (getter)SystemControl_get_aux_par_2,(setter)SystemControl_set_aux_par_2,
	PyDoc_STR("*float*: Aux heater, boiler parasitic - quadratic coefficient\n\n*Required*: True"),
 	NULL},
{"aux_par_f", (getter)SystemControl_get_aux_par_f,(setter)SystemControl_set_aux_par_f,
	PyDoc_STR("*float*: Aux heater, boiler parasitic - multiplying fraction\n\n*Required*: True"),
 	NULL},
{"bop_par", (getter)SystemControl_get_bop_par,(setter)SystemControl_set_bop_par,
	PyDoc_STR("*float*: Balance of plant parasitic power fraction [MWe/MWcap]\n\n*Required*: True"),
 	NULL},
{"bop_par_0", (getter)SystemControl_get_bop_par_0,(setter)SystemControl_set_bop_par_0,
	PyDoc_STR("*float*: Balance of plant parasitic power fraction - const coeff\n\n*Required*: True"),
 	NULL},
{"bop_par_1", (getter)SystemControl_get_bop_par_1,(setter)SystemControl_set_bop_par_1,
	PyDoc_STR("*float*: Balance of plant parasitic power fraction - linear coeff\n\n*Required*: True"),
 	NULL},
{"bop_par_2", (getter)SystemControl_get_bop_par_2,(setter)SystemControl_set_bop_par_2,
	PyDoc_STR("*float*: Balance of plant parasitic power fraction - quadratic coeff\n\n*Required*: True"),
 	NULL},
{"bop_par_f", (getter)SystemControl_get_bop_par_f,(setter)SystemControl_set_bop_par_f,
	PyDoc_STR("*float*: Balance of plant parasitic power fraction - mult frac\n\n*Required*: True"),
 	NULL},
{"disp_csu_cost", (getter)SystemControl_get_disp_csu_cost,(setter)SystemControl_set_disp_csu_cost,
	PyDoc_STR("*float*: Cycle startup cost [$]\n\n*Required*: True if is_dispatch=1"),
 	NULL},
{"disp_frequency", (getter)SystemControl_get_disp_frequency,(setter)SystemControl_set_disp_frequency,
	PyDoc_STR("*float*: Frequency for dispatch optimization calculations [hour]\n\n*Required*: True if is_dispatch=1"),
 	NULL},
{"disp_horizon", (getter)SystemControl_get_disp_horizon,(setter)SystemControl_set_disp_horizon,
	PyDoc_STR("*float*: Time horizon for dispatch optimization [hour]\n\n*Required*: True if is_dispatch=1"),
 	NULL},
{"disp_inventory_incentive", (getter)SystemControl_get_disp_inventory_incentive,(setter)SystemControl_set_disp_inventory_incentive,
	PyDoc_STR("*float*: Dispatch storage terminal inventory incentive multiplier\n\n*Required*: If not provided, assumed to be 0.0"),
 	NULL},
{"disp_max_iter", (getter)SystemControl_get_disp_max_iter,(setter)SystemControl_set_disp_max_iter,
	PyDoc_STR("*float*: Max number of dispatch optimization iterations\n\n*Required*: True if is_dispatch=1"),
 	NULL},
{"disp_mip_gap", (getter)SystemControl_get_disp_mip_gap,(setter)SystemControl_set_disp_mip_gap,
	PyDoc_STR("*float*: Dispatch optimization solution tolerance\n\n*Required*: True if is_dispatch=1"),
 	NULL},
{"disp_pen_delta_w", (getter)SystemControl_get_disp_pen_delta_w,(setter)SystemControl_set_disp_pen_delta_w,
	PyDoc_STR("*float*: Dispatch cycle production change penalty [$/kWe-change]\n\n*Required*: True if is_dispatch=1"),
 	NULL},
{"disp_reporting", (getter)SystemControl_get_disp_reporting,(setter)SystemControl_set_disp_reporting,
	PyDoc_STR("*float*: Dispatch optimization reporting level\n\n*Required*: If not provided, assumed to be -1"),
 	NULL},
{"disp_rsu_cost", (getter)SystemControl_get_disp_rsu_cost,(setter)SystemControl_set_disp_rsu_cost,
	PyDoc_STR("*float*: Receiver startup cost [$]\n\n*Required*: True if is_dispatch=1"),
 	NULL},
{"disp_spec_bb", (getter)SystemControl_get_disp_spec_bb,(setter)SystemControl_set_disp_spec_bb,
	PyDoc_STR("*float*: Dispatch optimization B&B heuristic\n\n*Required*: If not provided, assumed to be -1"),
 	NULL},
{"disp_spec_presolve", (getter)SystemControl_get_disp_spec_presolve,(setter)SystemControl_set_disp_spec_presolve,
	PyDoc_STR("*float*: Dispatch optimization presolve heuristic\n\n*Required*: If not provided, assumed to be -1"),
 	NULL},
{"disp_spec_scaling", (getter)SystemControl_get_disp_spec_scaling,(setter)SystemControl_set_disp_spec_scaling,
	PyDoc_STR("*float*: Dispatch optimization scaling heuristic\n\n*Required*: If not provided, assumed to be -1"),
 	NULL},
{"disp_steps_per_hour", (getter)SystemControl_get_disp_steps_per_hour,(setter)SystemControl_set_disp_steps_per_hour,
	PyDoc_STR("*float*: Time steps per hour for dispatch optimization calculations\n\n*Required*: If not provided, assumed to be 1"),
 	NULL},
{"disp_time_weighting", (getter)SystemControl_get_disp_time_weighting,(setter)SystemControl_set_disp_time_weighting,
	PyDoc_STR("*float*: Dispatch optimization future time discounting factor\n\n*Required*: If not provided, assumed to be 0.99"),
 	NULL},
{"disp_timeout", (getter)SystemControl_get_disp_timeout,(setter)SystemControl_set_disp_timeout,
	PyDoc_STR("*float*: Max dispatch optimization solve duration [s]\n\n*Required*: True if is_dispatch=1"),
 	NULL},
{"dispatch_series", (getter)SystemControl_get_dispatch_series,(setter)SystemControl_set_dispatch_series,
	PyDoc_STR("*sequence*: Time series dispatch factors"),
 	NULL},
{"f_turb_tou_periods", (getter)SystemControl_get_f_turb_tou_periods,(setter)SystemControl_set_f_turb_tou_periods,
	PyDoc_STR("*sequence*: Dispatch logic for turbine load fraction\n\n*Required*: True"),
 	NULL},
{"is_ampl_engine", (getter)SystemControl_get_is_ampl_engine,(setter)SystemControl_set_is_ampl_engine,
	PyDoc_STR("*float*: Run dispatch optimization with external AMPL engine\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"is_dispatch", (getter)SystemControl_get_is_dispatch,(setter)SystemControl_set_is_dispatch,
	PyDoc_STR("*float*: Allow dispatch optimization?\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"is_dispatch_series", (getter)SystemControl_get_is_dispatch_series,(setter)SystemControl_set_is_dispatch_series,
	PyDoc_STR("*float*: Use time-series dispatch factors\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"is_tod_pc_target_also_pc_max", (getter)SystemControl_get_is_tod_pc_target_also_pc_max,(setter)SystemControl_set_is_tod_pc_target_also_pc_max,
	PyDoc_STR("*float*: Is the TOD target cycle heat input also the max cycle heat input?\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"is_wlim_series", (getter)SystemControl_get_is_wlim_series,(setter)SystemControl_set_is_wlim_series,
	PyDoc_STR("*float*: Use time-series net electricity generation limits\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"is_write_ampl_dat", (getter)SystemControl_get_is_write_ampl_dat,(setter)SystemControl_set_is_write_ampl_dat,
	PyDoc_STR("*float*: Write AMPL data files for dispatch run\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"pb_fixed_par", (getter)SystemControl_get_pb_fixed_par,(setter)SystemControl_set_pb_fixed_par,
	PyDoc_STR("*float*: Fixed parasitic load - runs at all times [MWe/MWcap]\n\n*Required*: True"),
 	NULL},
{"q_rec_heattrace", (getter)SystemControl_get_q_rec_heattrace,(setter)SystemControl_set_q_rec_heattrace,
	PyDoc_STR("*float*: Receiver heat trace energy consumption during startup [kWe-hr]\n\n*Required*: If not provided, assumed to be 0.0"),
 	NULL},
{"q_rec_standby", (getter)SystemControl_get_q_rec_standby,(setter)SystemControl_set_q_rec_standby,
	PyDoc_STR("*float*: Receiver standby energy consumption [kWt]\n\n*Required*: If not provided, assumed to be 9e99"),
 	NULL},
{"time_start", (getter)SystemControl_get_time_start,(setter)SystemControl_set_time_start,
	PyDoc_STR("*float*: Simulation start time [s]\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"time_steps_per_hour", (getter)SystemControl_get_time_steps_per_hour,(setter)SystemControl_set_time_steps_per_hour,
	PyDoc_STR("*float*: Number of simulation time steps per hour\n\n*Required*: If not provided, assumed to be -1"),
 	NULL},
{"time_stop", (getter)SystemControl_get_time_stop,(setter)SystemControl_set_time_stop,
	PyDoc_STR("*float*: Simulation stop time [s]\n\n*Required*: If not provided, assumed to be 31536000"),
 	NULL},
{"vacuum_arrays", (getter)SystemControl_get_vacuum_arrays,(setter)SystemControl_set_vacuum_arrays,
	PyDoc_STR("*float*: Allocate arrays for only the required number of steps\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"weekday_schedule", (getter)SystemControl_get_weekday_schedule,(setter)SystemControl_set_weekday_schedule,
	PyDoc_STR("*sequence[sequence]*: 12x24 CSP operation Time-of-Use Weekday schedule\n\n*Required*: True"),
 	NULL},
{"weekend_schedule", (getter)SystemControl_get_weekend_schedule,(setter)SystemControl_set_weekend_schedule,
	PyDoc_STR("*sequence[sequence]*: 12x24 CSP operation Time-of-Use Weekend schedule\n\n*Required*: True"),
 	NULL},
{"wlim_series", (getter)SystemControl_get_wlim_series,(setter)SystemControl_set_wlim_series,
	PyDoc_STR("*sequence*: Time series net electicity generation limits [kWe]\n\n*Required*: True if is_wlim_series=1"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject SystemControl_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"TcsmoltenSalt.SystemControl",             /*tp_name*/
		sizeof(VarGroupObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		SystemControl_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		SystemControl_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * UserDefinedPowerCycle Group
 */ 

static PyTypeObject UserDefinedPowerCycle_Type;

static PyObject *
UserDefinedPowerCycle_new(SAM_TcsmoltenSalt data_ptr)
{
	PyObject* new_obj = UserDefinedPowerCycle_Type.tp_alloc(&UserDefinedPowerCycle_Type,0);

	VarGroupObject* UserDefinedPowerCycle_obj = (VarGroupObject*)new_obj;

	UserDefinedPowerCycle_obj->data_ptr = (SAM_table)data_ptr;

	return new_obj;
}

/* UserDefinedPowerCycle methods */

static PyObject *
UserDefinedPowerCycle_assign(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "TcsmoltenSalt", "UserDefinedPowerCycle")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
UserDefinedPowerCycle_export(VarGroupObject *self, PyObject *args)
{
	PyTypeObject* tp = &UserDefinedPowerCycle_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef UserDefinedPowerCycle_methods[] = {
		{"assign",            (PyCFunction)UserDefinedPowerCycle_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``UserDefinedPowerCycle_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)UserDefinedPowerCycle_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
UserDefinedPowerCycle_get_ud_f_W_dot_cool_des(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_UserDefinedPowerCycle_ud_f_W_dot_cool_des_nget, self->data_ptr);
}

static int
UserDefinedPowerCycle_set_ud_f_W_dot_cool_des(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_UserDefinedPowerCycle_ud_f_W_dot_cool_des_nset, self->data_ptr);
}

static PyObject *
UserDefinedPowerCycle_get_ud_ind_od(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_UserDefinedPowerCycle_ud_ind_od_mget, self->data_ptr);
}

static int
UserDefinedPowerCycle_set_ud_ind_od(VarGroupObject *self, PyObject *value, void *closure)
{
		return PySAM_matrix_setter(value, SAM_TcsmoltenSalt_UserDefinedPowerCycle_ud_ind_od_mset, self->data_ptr);
}

static PyObject *
UserDefinedPowerCycle_get_ud_m_dot_water_cool_des(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_UserDefinedPowerCycle_ud_m_dot_water_cool_des_nget, self->data_ptr);
}

static int
UserDefinedPowerCycle_set_ud_m_dot_water_cool_des(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_UserDefinedPowerCycle_ud_m_dot_water_cool_des_nset, self->data_ptr);
}

static PyGetSetDef UserDefinedPowerCycle_getset[] = {
{"ud_f_W_dot_cool_des", (getter)UserDefinedPowerCycle_get_ud_f_W_dot_cool_des,(setter)UserDefinedPowerCycle_set_ud_f_W_dot_cool_des,
	PyDoc_STR("*float*: Percent of user-defined power cycle design gross output consumed by cooling [%]\n\n*Required*: True if pc_config=1"),
 	NULL},
{"ud_ind_od", (getter)UserDefinedPowerCycle_get_ud_ind_od,(setter)UserDefinedPowerCycle_set_ud_ind_od,
	PyDoc_STR("*sequence[sequence]*: Off design user-defined power cycle performance as function of T_htf, m_dot_htf [ND], and T_amb\n\n*Required*: True if pc_config=1"),
 	NULL},
{"ud_m_dot_water_cool_des", (getter)UserDefinedPowerCycle_get_ud_m_dot_water_cool_des,(setter)UserDefinedPowerCycle_set_ud_m_dot_water_cool_des,
	PyDoc_STR("*float*: Mass flow rate of water required at user-defined power cycle design point [kg/s]\n\n*Required*: True if pc_config=1"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject UserDefinedPowerCycle_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"TcsmoltenSalt.UserDefinedPowerCycle",             /*tp_name*/
		sizeof(VarGroupObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		UserDefinedPowerCycle_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		UserDefinedPowerCycle_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * SCO2Cycle Group
 */ 

static PyTypeObject SCO2Cycle_Type;

static PyObject *
SCO2Cycle_new(SAM_TcsmoltenSalt data_ptr)
{
	PyObject* new_obj = SCO2Cycle_Type.tp_alloc(&SCO2Cycle_Type,0);

	VarGroupObject* SCO2Cycle_obj = (VarGroupObject*)new_obj;

	SCO2Cycle_obj->data_ptr = (SAM_table)data_ptr;

	return new_obj;
}

/* SCO2Cycle methods */

static PyObject *
SCO2Cycle_assign(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "TcsmoltenSalt", "SCO2Cycle")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
SCO2Cycle_export(VarGroupObject *self, PyObject *args)
{
	PyTypeObject* tp = &SCO2Cycle_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef SCO2Cycle_methods[] = {
		{"assign",            (PyCFunction)SCO2Cycle_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``SCO2Cycle_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)SCO2Cycle_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
SCO2Cycle_get_P_high_limit(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle_P_high_limit_nget, self->data_ptr);
}

static int
SCO2Cycle_set_P_high_limit(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_P_high_limit_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get__sco2_P_high_limit(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle__sco2_P_high_limit_nget, self->data_ptr);
}

static int
SCO2Cycle_set__sco2_P_high_limit(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle__sco2_P_high_limit_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get__sco2_P_ref(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle__sco2_P_ref_nget, self->data_ptr);
}

static int
SCO2Cycle_set__sco2_P_ref(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle__sco2_P_ref_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get__sco2_T_amb_des(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle__sco2_T_amb_des_nget, self->data_ptr);
}

static int
SCO2Cycle_set__sco2_T_amb_des(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle__sco2_T_amb_des_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get__sco2_T_approach(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle__sco2_T_approach_nget, self->data_ptr);
}

static int
SCO2Cycle_set__sco2_T_approach(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle__sco2_T_approach_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get__sco2_T_htf_hot_des(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle__sco2_T_htf_hot_des_nget, self->data_ptr);
}

static int
SCO2Cycle_set__sco2_T_htf_hot_des(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle__sco2_T_htf_hot_des_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get__sco2_deltaT_PHX(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle__sco2_deltaT_PHX_nget, self->data_ptr);
}

static int
SCO2Cycle_set__sco2_deltaT_PHX(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle__sco2_deltaT_PHX_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get__sco2_design_eff(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle__sco2_design_eff_nget, self->data_ptr);
}

static int
SCO2Cycle_set__sco2_design_eff(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle__sco2_design_eff_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get__sco2_eta_c(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle__sco2_eta_c_nget, self->data_ptr);
}

static int
SCO2Cycle_set__sco2_eta_c(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle__sco2_eta_c_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get__sco2_eta_t(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle__sco2_eta_t_nget, self->data_ptr);
}

static int
SCO2Cycle_set__sco2_eta_t(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle__sco2_eta_t_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get__sco2_recup_eff_max(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle__sco2_recup_eff_max_nget, self->data_ptr);
}

static int
SCO2Cycle_set__sco2_recup_eff_max(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle__sco2_recup_eff_max_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_deltaT_PHX(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle_deltaT_PHX_nget, self->data_ptr);
}

static int
SCO2Cycle_set_deltaT_PHX(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_deltaT_PHX_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_eta_c(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle_eta_c_nget, self->data_ptr);
}

static int
SCO2Cycle_set_eta_c(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_eta_c_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_eta_t(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle_eta_t_nget, self->data_ptr);
}

static int
SCO2Cycle_set_eta_t(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_eta_t_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_fan_power_perc_net(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle_fan_power_perc_net_nget, self->data_ptr);
}

static int
SCO2Cycle_set_fan_power_perc_net(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_fan_power_perc_net_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_is_sco2_preprocess(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle_is_sco2_preprocess_nget, self->data_ptr);
}

static int
SCO2Cycle_set_is_sco2_preprocess(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_is_sco2_preprocess_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_recup_eff_max(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle_recup_eff_max_nget, self->data_ptr);
}

static int
SCO2Cycle_set_recup_eff_max(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_recup_eff_max_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_sco2_T_amb_des(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle_sco2_T_amb_des_nget, self->data_ptr);
}

static int
SCO2Cycle_set_sco2_T_amb_des(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_sco2_T_amb_des_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_sco2_T_approach(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle_sco2_T_approach_nget, self->data_ptr);
}

static int
SCO2Cycle_set_sco2_T_approach(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_sco2_T_approach_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_sco2_cycle_config(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle_sco2_cycle_config_nget, self->data_ptr);
}

static int
SCO2Cycle_set_sco2_cycle_config(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_sco2_cycle_config_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_sco2ud_T_amb_high(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_T_amb_high_nget, self->data_ptr);
}

static int
SCO2Cycle_set_sco2ud_T_amb_high(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_T_amb_high_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_sco2ud_T_amb_ind_od(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_T_amb_ind_od_mget, self->data_ptr);
}

static int
SCO2Cycle_set_sco2ud_T_amb_ind_od(VarGroupObject *self, PyObject *value, void *closure)
{
		return PySAM_matrix_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_T_amb_ind_od_mset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_sco2ud_T_amb_low(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_T_amb_low_nget, self->data_ptr);
}

static int
SCO2Cycle_set_sco2ud_T_amb_low(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_T_amb_low_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_sco2ud_T_htf_cold_calc(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_T_htf_cold_calc_nget, self->data_ptr);
}

static int
SCO2Cycle_set_sco2ud_T_htf_cold_calc(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_T_htf_cold_calc_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_sco2ud_T_htf_high(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_T_htf_high_nget, self->data_ptr);
}

static int
SCO2Cycle_set_sco2ud_T_htf_high(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_T_htf_high_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_sco2ud_T_htf_ind_od(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_T_htf_ind_od_mget, self->data_ptr);
}

static int
SCO2Cycle_set_sco2ud_T_htf_ind_od(VarGroupObject *self, PyObject *value, void *closure)
{
		return PySAM_matrix_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_T_htf_ind_od_mset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_sco2ud_T_htf_low(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_T_htf_low_nget, self->data_ptr);
}

static int
SCO2Cycle_set_sco2ud_T_htf_low(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_T_htf_low_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_sco2ud_m_dot_htf_high(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_m_dot_htf_high_nget, self->data_ptr);
}

static int
SCO2Cycle_set_sco2ud_m_dot_htf_high(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_m_dot_htf_high_nset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_sco2ud_m_dot_htf_ind_od(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_m_dot_htf_ind_od_mget, self->data_ptr);
}

static int
SCO2Cycle_set_sco2ud_m_dot_htf_ind_od(VarGroupObject *self, PyObject *value, void *closure)
{
		return PySAM_matrix_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_m_dot_htf_ind_od_mset, self->data_ptr);
}

static PyObject *
SCO2Cycle_get_sco2ud_m_dot_htf_low(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_m_dot_htf_low_nget, self->data_ptr);
}

static int
SCO2Cycle_set_sco2ud_m_dot_htf_low(VarGroupObject *self, PyObject *value, void *closure)
{
	return PySAM_double_setter(value, SAM_TcsmoltenSalt_SCO2Cycle_sco2ud_m_dot_htf_low_nset, self->data_ptr);
}

static PyGetSetDef SCO2Cycle_getset[] = {
{"P_high_limit", (getter)SCO2Cycle_get_P_high_limit,(setter)SCO2Cycle_set_P_high_limit,
	PyDoc_STR("*float*: Upper pressure limit in cycle [MPa]\n\n*Required*: True if pc_config=2"),
 	NULL},
{"_sco2_P_high_limit", (getter)SCO2Cycle_get__sco2_P_high_limit,(setter)SCO2Cycle_set__sco2_P_high_limit,
	PyDoc_STR("*float*: Preprocess input: upper pressure limit [MPa]\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"_sco2_P_ref", (getter)SCO2Cycle_get__sco2_P_ref,(setter)SCO2Cycle_set__sco2_P_ref,
	PyDoc_STR("*float*: Preprocess input: gross power output [MWe]\n\n*Info*: sco2_pc_pre"),
 	NULL},
{"_sco2_T_amb_des", (getter)SCO2Cycle_get__sco2_T_amb_des,(setter)SCO2Cycle_set__sco2_T_amb_des,
	PyDoc_STR("*float*: Preprocess input: design ambient temperature [C]\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"_sco2_T_approach", (getter)SCO2Cycle_get__sco2_T_approach,(setter)SCO2Cycle_set__sco2_T_approach,
	PyDoc_STR("*float*: Preprocess input: compressor approach temperature [C]\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"_sco2_T_htf_hot_des", (getter)SCO2Cycle_get__sco2_T_htf_hot_des,(setter)SCO2Cycle_set__sco2_T_htf_hot_des,
	PyDoc_STR("*float*: Preprocess input: HTF hot temperature [C]\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"_sco2_deltaT_PHX", (getter)SCO2Cycle_get__sco2_deltaT_PHX,(setter)SCO2Cycle_set__sco2_deltaT_PHX,
	PyDoc_STR("*float*: Preprocess input: PHX approach temperature [C]\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"_sco2_design_eff", (getter)SCO2Cycle_get__sco2_design_eff,(setter)SCO2Cycle_set__sco2_design_eff,
	PyDoc_STR("*float*: Preprocess input: cycle thermal efficiency\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"_sco2_eta_c", (getter)SCO2Cycle_get__sco2_eta_c,(setter)SCO2Cycle_set__sco2_eta_c,
	PyDoc_STR("*float*: Preprocess input: compressor isentropic efficiency\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"_sco2_eta_t", (getter)SCO2Cycle_get__sco2_eta_t,(setter)SCO2Cycle_set__sco2_eta_t,
	PyDoc_STR("*float*: Preprocess input: turbine isentropic efficiency\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"_sco2_recup_eff_max", (getter)SCO2Cycle_get__sco2_recup_eff_max,(setter)SCO2Cycle_set__sco2_recup_eff_max,
	PyDoc_STR("*float*: Preprocess input: max recuperator effectiveness\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"deltaT_PHX", (getter)SCO2Cycle_get_deltaT_PHX,(setter)SCO2Cycle_set_deltaT_PHX,
	PyDoc_STR("*float*: Design temperature difference in PHX [C]\n\n*Required*: True if pc_config=2"),
 	NULL},
{"eta_c", (getter)SCO2Cycle_get_eta_c,(setter)SCO2Cycle_set_eta_c,
	PyDoc_STR("*float*: Isentropic efficiency of compressor(s)\n\n*Required*: True if pc_config=2"),
 	NULL},
{"eta_t", (getter)SCO2Cycle_get_eta_t,(setter)SCO2Cycle_set_eta_t,
	PyDoc_STR("*float*: Isentropic efficiency of turbine\n\n*Required*: True if pc_config=2"),
 	NULL},
{"fan_power_perc_net", (getter)SCO2Cycle_get_fan_power_perc_net,(setter)SCO2Cycle_set_fan_power_perc_net,
	PyDoc_STR("*float*: Percent of net cycle output used for fan power at design [%]\n\n*Required*: True if pc_config=2"),
 	NULL},
{"is_sco2_preprocess", (getter)SCO2Cycle_get_is_sco2_preprocess,(setter)SCO2Cycle_set_is_sco2_preprocess,
	PyDoc_STR("*float*: Is sco2 off-design performance preprocessed? 1=yes\n\n*Required*: If not provided, assumed to be 0"),
 	NULL},
{"recup_eff_max", (getter)SCO2Cycle_get_recup_eff_max,(setter)SCO2Cycle_set_recup_eff_max,
	PyDoc_STR("*float*: Maximum recuperator effectiveness\n\n*Required*: True if pc_config=2"),
 	NULL},
{"sco2_T_amb_des", (getter)SCO2Cycle_get_sco2_T_amb_des,(setter)SCO2Cycle_set_sco2_T_amb_des,
	PyDoc_STR("*float*: Ambient temperature at design point [C]\n\n*Required*: True if pc_config=2"),
 	NULL},
{"sco2_T_approach", (getter)SCO2Cycle_get_sco2_T_approach,(setter)SCO2Cycle_set_sco2_T_approach,
	PyDoc_STR("*float*: Temperature difference between main compressor CO2 inlet and ambient air [C]\n\n*Required*: True if pc_config=2"),
 	NULL},
{"sco2_cycle_config", (getter)SCO2Cycle_get_sco2_cycle_config,(setter)SCO2Cycle_set_sco2_cycle_config,
	PyDoc_STR("*float*: SCO2 cycle configuration, 1=recompression, 2=partial cooling\n\n*Required*: True if pc_config=2"),
 	NULL},
{"sco2ud_T_amb_high", (getter)SCO2Cycle_get_sco2ud_T_amb_high,(setter)SCO2Cycle_set_sco2ud_T_amb_high,
	PyDoc_STR("*float*: High level ambient temperature for HTF mass flow rate parametric [C]\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"sco2ud_T_amb_ind_od", (getter)SCO2Cycle_get_sco2ud_T_amb_ind_od,(setter)SCO2Cycle_set_sco2ud_T_amb_ind_od,
	PyDoc_STR("*sequence[sequence]*: Off design table of user-defined power cycle performance formed from parametric on T_amb [C]\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"sco2ud_T_amb_low", (getter)SCO2Cycle_get_sco2ud_T_amb_low,(setter)SCO2Cycle_set_sco2ud_T_amb_low,
	PyDoc_STR("*float*: Low level ambient temperature for HTF mass flow rate parametric [C]\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"sco2ud_T_htf_cold_calc", (getter)SCO2Cycle_get_sco2ud_T_htf_cold_calc,(setter)SCO2Cycle_set_sco2ud_T_htf_cold_calc,
	PyDoc_STR("*float*: HTF cold temperature from sCO2 cycle des, may be different than T_htf_cold_des [C]\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"sco2ud_T_htf_high", (getter)SCO2Cycle_get_sco2ud_T_htf_high,(setter)SCO2Cycle_set_sco2ud_T_htf_high,
	PyDoc_STR("*float*: High level HTF inlet temperature for T_amb parametric [C]\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"sco2ud_T_htf_ind_od", (getter)SCO2Cycle_get_sco2ud_T_htf_ind_od,(setter)SCO2Cycle_set_sco2ud_T_htf_ind_od,
	PyDoc_STR("*sequence[sequence]*: Off design table of user-defined power cycle performance formed from parametric on T_htf_hot [C]\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"sco2ud_T_htf_low", (getter)SCO2Cycle_get_sco2ud_T_htf_low,(setter)SCO2Cycle_set_sco2ud_T_htf_low,
	PyDoc_STR("*float*: Low level HTF inlet temperature for T_amb parametric [C]\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"sco2ud_m_dot_htf_high", (getter)SCO2Cycle_get_sco2ud_m_dot_htf_high,(setter)SCO2Cycle_set_sco2ud_m_dot_htf_high,
	PyDoc_STR("*float*: High level normalized HTF mass flow rate for T_HTF parametric\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"sco2ud_m_dot_htf_ind_od", (getter)SCO2Cycle_get_sco2ud_m_dot_htf_ind_od,(setter)SCO2Cycle_set_sco2ud_m_dot_htf_ind_od,
	PyDoc_STR("*sequence[sequence]*: Off design table of user-defined power cycle performance formed from parametric on m_dot_htf [ND]\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
{"sco2ud_m_dot_htf_low", (getter)SCO2Cycle_get_sco2ud_m_dot_htf_low,(setter)SCO2Cycle_set_sco2ud_m_dot_htf_low,
	PyDoc_STR("*float*: Low level normalized HTF mass flow rate for T_HTF parametric\n\n*Required*: True if is_sco2_preprocess=1"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject SCO2Cycle_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"TcsmoltenSalt.SCO2Cycle",             /*tp_name*/
		sizeof(VarGroupObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		SCO2Cycle_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		SCO2Cycle_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};


/*
 * Outputs Group
 */ 

static PyTypeObject Outputs_Type;

static PyObject *
Outputs_new(SAM_TcsmoltenSalt data_ptr)
{
	PyObject* new_obj = Outputs_Type.tp_alloc(&Outputs_Type,0);

	VarGroupObject* Outputs_obj = (VarGroupObject*)new_obj;

	Outputs_obj->data_ptr = (SAM_table)data_ptr;

	return new_obj;
}

/* Outputs methods */

static PyObject *
Outputs_assign(VarGroupObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_dict(self->data_ptr, dict, "TcsmoltenSalt", "Outputs")){
		return NULL;
	}

	Py_INCREF(Py_None);
	return Py_None;
}

static PyObject *
Outputs_export(VarGroupObject *self, PyObject *args)
{
	PyTypeObject* tp = &Outputs_Type;
	PyObject* dict = PySAM_export_to_dict((PyObject *) self, tp);
	return dict;
}

static PyMethodDef Outputs_methods[] = {
		{"assign",            (PyCFunction)Outputs_assign,  METH_VARARGS,
			PyDoc_STR("assign() -> None\n Assign attributes from dictionary\n\n``Outputs_vals = { var: val, ...}``")},
		{"export",            (PyCFunction)Outputs_export,  METH_VARARGS,
			PyDoc_STR("export() -> dict\n Export attributes into dictionary")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
Outputs_get_A_radfield(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_A_radfield_nget, self->data_ptr);
}

static PyObject *
Outputs_get_A_sf(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_A_sf_nget, self->data_ptr);
}

static PyObject *
Outputs_get_P_cond(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_P_cond_aget, self->data_ptr);
}

static PyObject *
Outputs_get_P_cooling_tower_tot(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_P_cooling_tower_tot_aget, self->data_ptr);
}

static PyObject *
Outputs_get_P_cycle(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_P_cycle_aget, self->data_ptr);
}

static PyObject *
Outputs_get_P_fixed(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_P_fixed_aget, self->data_ptr);
}

static PyObject *
Outputs_get_P_out_net(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_P_out_net_aget, self->data_ptr);
}

static PyObject *
Outputs_get_P_plant_balance_tot(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_P_plant_balance_tot_aget, self->data_ptr);
}

static PyObject *
Outputs_get_P_rec_heattrace(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_P_rec_heattrace_aget, self->data_ptr);
}

static PyObject *
Outputs_get_P_tower_pump(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_P_tower_pump_aget, self->data_ptr);
}

static PyObject *
Outputs_get_Q_thermal(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_Q_thermal_aget, self->data_ptr);
}

static PyObject *
Outputs_get_Q_thermal_ss(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_Q_thermal_ss_aget, self->data_ptr);
}

static PyObject *
Outputs_get_Q_thermal_ss_csky(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_Q_thermal_ss_csky_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_cold(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_T_cold_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_cond_out(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_T_cond_out_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_panel_out_max(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_T_panel_out_max_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_pc_in(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_T_pc_in_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_pc_out(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_T_pc_out_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_rad_out(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_T_rad_out_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_rec_in(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_T_rec_in_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_rec_out(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_T_rec_out_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_rec_out_end(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_T_rec_out_end_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_rec_out_max(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_T_rec_out_max_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_tes_cold(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_T_tes_cold_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_tes_hot(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_T_tes_hot_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_wall_downcomer(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_T_wall_downcomer_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_wall_rec_inlet(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_T_wall_rec_inlet_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_wall_rec_outlet(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_T_wall_rec_outlet_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_wall_riser(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_T_wall_riser_aget, self->data_ptr);
}

static PyObject *
Outputs_get_T_warm(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_T_warm_aget, self->data_ptr);
}

static PyObject *
Outputs_get_annual_W_cooling_tower(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_annual_W_cooling_tower_nget, self->data_ptr);
}

static PyObject *
Outputs_get_annual_W_cycle_gross(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_annual_W_cycle_gross_nget, self->data_ptr);
}

static PyObject *
Outputs_get_annual_energy(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_annual_energy_nget, self->data_ptr);
}

static PyObject *
Outputs_get_annual_eta_rec_th(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_annual_eta_rec_th_nget, self->data_ptr);
}

static PyObject *
Outputs_get_annual_eta_rec_th_incl_refl(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_annual_eta_rec_th_incl_refl_nget, self->data_ptr);
}

static PyObject *
Outputs_get_annual_q_rec_inc(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_annual_q_rec_inc_nget, self->data_ptr);
}

static PyObject *
Outputs_get_annual_q_rec_loss(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_annual_q_rec_loss_nget, self->data_ptr);
}

static PyObject *
Outputs_get_annual_total_water_use(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_annual_total_water_use_nget, self->data_ptr);
}

static PyObject *
Outputs_get_beam(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_beam_aget, self->data_ptr);
}

static PyObject *
Outputs_get_capacity_factor(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_capacity_factor_nget, self->data_ptr);
}

static PyObject *
Outputs_get_clearsky(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_clearsky_aget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_interest1(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_interest1_nget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_interest2(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_interest2_nget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_interest3(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_interest3_nget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_interest4(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_interest4_nget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_interest5(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_interest5_nget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_interest_total(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_interest_total_nget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_percent_total(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_percent_total_nget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_principal1(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_principal1_nget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_principal2(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_principal2_nget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_principal3(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_principal3_nget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_principal4(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_principal4_nget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_principal5(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_principal5_nget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_principal_total(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_principal_total_nget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_total1(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_total1_nget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_total2(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_total2_nget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_total3(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_total3_nget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_total4(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_total4_nget, self->data_ptr);
}

static PyObject *
Outputs_get_const_per_total5(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_const_per_total5_nget, self->data_ptr);
}

static PyObject *
Outputs_get_construction_financing_cost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_construction_financing_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_conversion_factor(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_conversion_factor_nget, self->data_ptr);
}

static PyObject *
Outputs_get_csp_pt_cost_bop(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_csp_pt_cost_bop_nget, self->data_ptr);
}

static PyObject *
Outputs_get_csp_pt_cost_contingency(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_csp_pt_cost_contingency_nget, self->data_ptr);
}

static PyObject *
Outputs_get_csp_pt_cost_epc_total(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_csp_pt_cost_epc_total_nget, self->data_ptr);
}

static PyObject *
Outputs_get_csp_pt_cost_fossil(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_csp_pt_cost_fossil_nget, self->data_ptr);
}

static PyObject *
Outputs_get_csp_pt_cost_heliostats(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_csp_pt_cost_heliostats_nget, self->data_ptr);
}

static PyObject *
Outputs_get_csp_pt_cost_installed_per_capacity(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_csp_pt_cost_installed_per_capacity_nget, self->data_ptr);
}

static PyObject *
Outputs_get_csp_pt_cost_plm_total(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_csp_pt_cost_plm_total_nget, self->data_ptr);
}

static PyObject *
Outputs_get_csp_pt_cost_power_block(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_csp_pt_cost_power_block_nget, self->data_ptr);
}

static PyObject *
Outputs_get_csp_pt_cost_rad_field(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_csp_pt_cost_rad_field_nget, self->data_ptr);
}

static PyObject *
Outputs_get_csp_pt_cost_rad_fluid(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_csp_pt_cost_rad_fluid_nget, self->data_ptr);
}

static PyObject *
Outputs_get_csp_pt_cost_rad_storage(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_csp_pt_cost_rad_storage_nget, self->data_ptr);
}

static PyObject *
Outputs_get_csp_pt_cost_receiver(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_csp_pt_cost_receiver_nget, self->data_ptr);
}

static PyObject *
Outputs_get_csp_pt_cost_sales_tax_total(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_csp_pt_cost_sales_tax_total_nget, self->data_ptr);
}

static PyObject *
Outputs_get_csp_pt_cost_site_improvements(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_csp_pt_cost_site_improvements_nget, self->data_ptr);
}

static PyObject *
Outputs_get_csp_pt_cost_storage(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_csp_pt_cost_storage_nget, self->data_ptr);
}

static PyObject *
Outputs_get_csp_pt_cost_total_land_area(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_csp_pt_cost_total_land_area_nget, self->data_ptr);
}

static PyObject *
Outputs_get_csp_pt_cost_tower(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_csp_pt_cost_tower_nget, self->data_ptr);
}

static PyObject *
Outputs_get_defocus(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_defocus_aget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_iter_ann(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_disp_iter_ann_nget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_obj_relax(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_disp_obj_relax_aget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_objective(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_disp_objective_aget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_objective_ann(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_disp_objective_ann_nget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_pceff_expected(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_disp_pceff_expected_aget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_presolve_nconstr(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_disp_presolve_nconstr_aget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_presolve_nconstr_ann(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_disp_presolve_nconstr_ann_nget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_presolve_nvar(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_disp_presolve_nvar_aget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_presolve_nvar_ann(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_disp_presolve_nvar_ann_nget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_qpbsu_expected(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_disp_qpbsu_expected_aget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_qsf_expected(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_disp_qsf_expected_aget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_qsfprod_expected(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_disp_qsfprod_expected_aget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_qsfsu_expected(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_disp_qsfsu_expected_aget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_rev_expected(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_disp_rev_expected_aget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_solve_iter(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_disp_solve_iter_aget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_solve_state(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_disp_solve_state_aget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_solve_time(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_disp_solve_time_aget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_solve_time_ann(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_disp_solve_time_ann_nget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_tes_expected(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_disp_tes_expected_aget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_thermeff_expected(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_disp_thermeff_expected_aget, self->data_ptr);
}

static PyObject *
Outputs_get_disp_wpb_expected(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_disp_wpb_expected_aget, self->data_ptr);
}

static PyObject *
Outputs_get_e_ch_tes(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_e_ch_tes_aget, self->data_ptr);
}

static PyObject *
Outputs_get_eta(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_eta_aget, self->data_ptr);
}

static PyObject *
Outputs_get_eta_field(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_eta_field_aget, self->data_ptr);
}

static PyObject *
Outputs_get_eta_map_out(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_Outputs_eta_map_out_mget, self->data_ptr);
}

static PyObject *
Outputs_get_eta_therm(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_eta_therm_aget, self->data_ptr);
}

static PyObject *
Outputs_get_flux_maps_for_import(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_Outputs_flux_maps_for_import_mget, self->data_ptr);
}

static PyObject *
Outputs_get_flux_maps_out(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_Outputs_flux_maps_out_mget, self->data_ptr);
}

static PyObject *
Outputs_get_gen(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_gen_aget, self->data_ptr);
}

static PyObject *
Outputs_get_htf_pump_power(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_htf_pump_power_aget, self->data_ptr);
}

static PyObject *
Outputs_get_is_pc_sb_allowed(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_is_pc_sb_allowed_aget, self->data_ptr);
}

static PyObject *
Outputs_get_is_pc_su_allowed(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_is_pc_su_allowed_aget, self->data_ptr);
}

static PyObject *
Outputs_get_is_rec_su_allowed(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_is_rec_su_allowed_aget, self->data_ptr);
}

static PyObject *
Outputs_get_kwh_per_kw(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_kwh_per_kw_nget, self->data_ptr);
}

static PyObject *
Outputs_get_m_cold(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_m_cold_aget, self->data_ptr);
}

static PyObject *
Outputs_get_m_dot_balance(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_m_dot_balance_aget, self->data_ptr);
}

static PyObject *
Outputs_get_m_dot_cr_to_tes_hot(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_m_dot_cr_to_tes_hot_aget, self->data_ptr);
}

static PyObject *
Outputs_get_m_dot_cycle_to_field(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_m_dot_cycle_to_field_aget, self->data_ptr);
}

static PyObject *
Outputs_get_m_dot_field_to_cycle(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_m_dot_field_to_cycle_aget, self->data_ptr);
}

static PyObject *
Outputs_get_m_dot_pc(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_m_dot_pc_aget, self->data_ptr);
}

static PyObject *
Outputs_get_m_dot_pc_to_tes_cold(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_m_dot_pc_to_tes_cold_aget, self->data_ptr);
}

static PyObject *
Outputs_get_m_dot_rec(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_m_dot_rec_aget, self->data_ptr);
}

static PyObject *
Outputs_get_m_dot_tes_cold_out(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_m_dot_tes_cold_out_aget, self->data_ptr);
}

static PyObject *
Outputs_get_m_dot_tes_hot_out(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_m_dot_tes_hot_out_aget, self->data_ptr);
}

static PyObject *
Outputs_get_m_dot_water_pc(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_m_dot_water_pc_aget, self->data_ptr);
}

static PyObject *
Outputs_get_m_warm(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_m_warm_aget, self->data_ptr);
}

static PyObject *
Outputs_get_mass_tes_cold(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_mass_tes_cold_aget, self->data_ptr);
}

static PyObject *
Outputs_get_mass_tes_hot(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_mass_tes_hot_aget, self->data_ptr);
}

static PyObject *
Outputs_get_n_op_modes(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_n_op_modes_aget, self->data_ptr);
}

static PyObject *
Outputs_get_op_mode_1(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_op_mode_1_aget, self->data_ptr);
}

static PyObject *
Outputs_get_op_mode_2(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_op_mode_2_aget, self->data_ptr);
}

static PyObject *
Outputs_get_op_mode_3(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_op_mode_3_aget, self->data_ptr);
}

static PyObject *
Outputs_get_operating_modes_a(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_operating_modes_a_aget, self->data_ptr);
}

static PyObject *
Outputs_get_operating_modes_b(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_operating_modes_b_aget, self->data_ptr);
}

static PyObject *
Outputs_get_operating_modes_c(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_operating_modes_c_aget, self->data_ptr);
}

static PyObject *
Outputs_get_pparasi(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_pparasi_aget, self->data_ptr);
}

static PyObject *
Outputs_get_pricing_mult(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_pricing_mult_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_balance(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_balance_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_ch_tes(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_ch_tes_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_dc_tes(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_dc_tes_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_dot_est_cr_on(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_dot_est_cr_on_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_dot_est_cr_su(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_dot_est_cr_su_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_dot_est_tes_ch(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_dot_est_tes_ch_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_dot_est_tes_dc(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_dot_est_tes_dc_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_dot_pc_max(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_dot_pc_max_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_dot_pc_min(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_dot_pc_min_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_dot_pc_sb(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_dot_pc_sb_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_dot_pc_startup(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_dot_pc_startup_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_dot_pc_target(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_dot_pc_target_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_dot_rec_inc(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_dot_rec_inc_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_heater(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_heater_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_pb(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_pb_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_pc_startup(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_pc_startup_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_piping_losses(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_piping_losses_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_sf_inc(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_sf_inc_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_startup(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_startup_aget, self->data_ptr);
}

static PyObject *
Outputs_get_q_thermal_loss(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_q_thermal_loss_aget, self->data_ptr);
}

static PyObject *
Outputs_get_radcool_control(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_radcool_control_aget, self->data_ptr);
}

static PyObject *
Outputs_get_rh(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_rh_aget, self->data_ptr);
}

static PyObject *
Outputs_get_sco2_preprocess_table_out(VarGroupObject *self, void *closure)
{
	return PySAM_matrix_getter(SAM_TcsmoltenSalt_Outputs_sco2_preprocess_table_out_mget, self->data_ptr);
}

static PyObject *
Outputs_get_sf_adjust_out(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_sf_adjust_out_aget, self->data_ptr);
}

static PyObject *
Outputs_get_solaz(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_solaz_aget, self->data_ptr);
}

static PyObject *
Outputs_get_solzen(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_solzen_aget, self->data_ptr);
}

static PyObject *
Outputs_get_system_capacity(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_system_capacity_nget, self->data_ptr);
}

static PyObject *
Outputs_get_tank_losses(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_tank_losses_aget, self->data_ptr);
}

static PyObject *
Outputs_get_tdry(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_tdry_aget, self->data_ptr);
}

static PyObject *
Outputs_get_time_hr(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_time_hr_aget, self->data_ptr);
}

static PyObject *
Outputs_get_total_direct_cost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_total_direct_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_total_indirect_cost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_total_indirect_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_total_installed_cost(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_total_installed_cost_nget, self->data_ptr);
}

static PyObject *
Outputs_get_tou_value(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_tou_value_aget, self->data_ptr);
}

static PyObject *
Outputs_get_twet(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_twet_aget, self->data_ptr);
}

static PyObject *
Outputs_get_ui_direct_subtotal(VarGroupObject *self, void *closure)
{
	return PySAM_double_getter(SAM_TcsmoltenSalt_Outputs_ui_direct_subtotal_nget, self->data_ptr);
}

static PyObject *
Outputs_get_wspd(VarGroupObject *self, void *closure)
{
	return PySAM_array_getter(SAM_TcsmoltenSalt_Outputs_wspd_aget, self->data_ptr);
}

static PyGetSetDef Outputs_getset[] = {
{"A_radfield", (getter)Outputs_get_A_radfield,(setter)0,
	PyDoc_STR("*float*: Radiator field surface area [m^2]"),
 	NULL},
{"A_sf", (getter)Outputs_get_A_sf,(setter)0,
	PyDoc_STR("*float*: Solar field area [m^2]"),
 	NULL},
{"P_cond", (getter)Outputs_get_P_cond,(setter)0,
	PyDoc_STR("*sequence*: PC condensing presssure [Pa]"),
 	NULL},
{"P_cooling_tower_tot", (getter)Outputs_get_P_cooling_tower_tot,(setter)0,
	PyDoc_STR("*sequence*: Parasitic power condenser operation [MWe]"),
 	NULL},
{"P_cycle", (getter)Outputs_get_P_cycle,(setter)0,
	PyDoc_STR("*sequence*: PC electrical power output, gross [MWe]"),
 	NULL},
{"P_fixed", (getter)Outputs_get_P_fixed,(setter)0,
	PyDoc_STR("*sequence*: Parasitic power fixed load [MWe]"),
 	NULL},
{"P_out_net", (getter)Outputs_get_P_out_net,(setter)0,
	PyDoc_STR("*sequence*: Total electric power to grid [MWe]"),
 	NULL},
{"P_plant_balance_tot", (getter)Outputs_get_P_plant_balance_tot,(setter)0,
	PyDoc_STR("*sequence*: Parasitic power generation-dependent load [MWe]"),
 	NULL},
{"P_rec_heattrace", (getter)Outputs_get_P_rec_heattrace,(setter)0,
	PyDoc_STR("*sequence*: Receiver heat trace parasitic load [MWe]"),
 	NULL},
{"P_tower_pump", (getter)Outputs_get_P_tower_pump,(setter)0,
	PyDoc_STR("*sequence*: Parasitic power receiver/tower HTF pump [MWe]"),
 	NULL},
{"Q_thermal", (getter)Outputs_get_Q_thermal,(setter)0,
	PyDoc_STR("*sequence*: Receiver thermal power to HTF less piping loss [MWt]"),
 	NULL},
{"Q_thermal_ss", (getter)Outputs_get_Q_thermal_ss,(setter)0,
	PyDoc_STR("*sequence*: Receiver thermal power to HTF less piping loss (steady state) [MWt]"),
 	NULL},
{"Q_thermal_ss_csky", (getter)Outputs_get_Q_thermal_ss_csky,(setter)0,
	PyDoc_STR("*sequence*: Receiver thermal power to HTF less piping loss under clear-sky conditions (steady state) [MWt]"),
 	NULL},
{"T_cold", (getter)Outputs_get_T_cold,(setter)0,
	PyDoc_STR("*sequence*: Cold storage cold temperature [C]"),
 	NULL},
{"T_cond_out", (getter)Outputs_get_T_cond_out,(setter)0,
	PyDoc_STR("*sequence*: PC condenser water outlet temperature [C]"),
 	NULL},
{"T_panel_out_max", (getter)Outputs_get_T_panel_out_max,(setter)0,
	PyDoc_STR("*sequence*: Receiver panel maximum HTF outlet temperature during timestep [C]"),
 	NULL},
{"T_pc_in", (getter)Outputs_get_T_pc_in,(setter)0,
	PyDoc_STR("*sequence*: PC HTF inlet temperature [C]"),
 	NULL},
{"T_pc_out", (getter)Outputs_get_T_pc_out,(setter)0,
	PyDoc_STR("*sequence*: PC HTF outlet temperature [C]"),
 	NULL},
{"T_rad_out", (getter)Outputs_get_T_rad_out,(setter)0,
	PyDoc_STR("*sequence*: Radiator outlet temperature [C]"),
 	NULL},
{"T_rec_in", (getter)Outputs_get_T_rec_in,(setter)0,
	PyDoc_STR("*sequence*: Receiver HTF inlet temperature [C]"),
 	NULL},
{"T_rec_out", (getter)Outputs_get_T_rec_out,(setter)0,
	PyDoc_STR("*sequence*: Receiver HTF outlet temperature [C]"),
 	NULL},
{"T_rec_out_end", (getter)Outputs_get_T_rec_out_end,(setter)0,
	PyDoc_STR("*sequence*: Receiver HTF outlet temperature at end of timestep [C]"),
 	NULL},
{"T_rec_out_max", (getter)Outputs_get_T_rec_out_max,(setter)0,
	PyDoc_STR("*sequence*: Receiver maximum HTF outlet temperature during timestep [C]"),
 	NULL},
{"T_tes_cold", (getter)Outputs_get_T_tes_cold,(setter)0,
	PyDoc_STR("*sequence*: TES cold temperature [C]"),
 	NULL},
{"T_tes_hot", (getter)Outputs_get_T_tes_hot,(setter)0,
	PyDoc_STR("*sequence*: TES hot temperature [C]"),
 	NULL},
{"T_wall_downcomer", (getter)Outputs_get_T_wall_downcomer,(setter)0,
	PyDoc_STR("*sequence*: Receiver downcomer wall temperature at end of timestep [C]"),
 	NULL},
{"T_wall_rec_inlet", (getter)Outputs_get_T_wall_rec_inlet,(setter)0,
	PyDoc_STR("*sequence*: Receiver inlet panel wall temperature at end of timestep [C]"),
 	NULL},
{"T_wall_rec_outlet", (getter)Outputs_get_T_wall_rec_outlet,(setter)0,
	PyDoc_STR("*sequence*: Receiver outlet panel wall temperature at end of timestep [C]"),
 	NULL},
{"T_wall_riser", (getter)Outputs_get_T_wall_riser,(setter)0,
	PyDoc_STR("*sequence*: Receiver riser wall temperature at end of timestep [C]"),
 	NULL},
{"T_warm", (getter)Outputs_get_T_warm,(setter)0,
	PyDoc_STR("*sequence*: Cold storage warm tank temperature [C]"),
 	NULL},
{"annual_W_cooling_tower", (getter)Outputs_get_annual_W_cooling_tower,(setter)0,
	PyDoc_STR("*float*: Total of condenser operation parasitics [kWhe]"),
 	NULL},
{"annual_W_cycle_gross", (getter)Outputs_get_annual_W_cycle_gross,(setter)0,
	PyDoc_STR("*float*: Electrical source - power cycle gross output [kWhe]"),
 	NULL},
{"annual_energy", (getter)Outputs_get_annual_energy,(setter)0,
	PyDoc_STR("*float*: Annual total electric power to grid [kWhe]"),
 	NULL},
{"annual_eta_rec_th", (getter)Outputs_get_annual_eta_rec_th,(setter)0,
	PyDoc_STR("*float*: Annual receiver thermal efficiency ignoring rec reflective loss"),
 	NULL},
{"annual_eta_rec_th_incl_refl", (getter)Outputs_get_annual_eta_rec_th_incl_refl,(setter)0,
	PyDoc_STR("*float*: Annual receiver thermal efficiency including reflective loss"),
 	NULL},
{"annual_q_rec_inc", (getter)Outputs_get_annual_q_rec_inc,(setter)0,
	PyDoc_STR("*float*: Annual receiver incident thermal power after reflective losses [MWt-hr]"),
 	NULL},
{"annual_q_rec_loss", (getter)Outputs_get_annual_q_rec_loss,(setter)0,
	PyDoc_STR("*float*: Annual receiver convective and radiative losses [MWt-hr]"),
 	NULL},
{"annual_total_water_use", (getter)Outputs_get_annual_total_water_use,(setter)0,
	PyDoc_STR("*float*: Total annual water usage, cycle + mirror washing [m3]"),
 	NULL},
{"beam", (getter)Outputs_get_beam,(setter)0,
	PyDoc_STR("*sequence*: Resource beam normal irradiance [W/m2]"),
 	NULL},
{"capacity_factor", (getter)Outputs_get_capacity_factor,(setter)0,
	PyDoc_STR("*float*: Capacity factor [%]"),
 	NULL},
{"clearsky", (getter)Outputs_get_clearsky,(setter)0,
	PyDoc_STR("*sequence*: Predicted clear-sky beam normal irradiance [W/m2]"),
 	NULL},
{"const_per_interest1", (getter)Outputs_get_const_per_interest1,(setter)0,
	PyDoc_STR("*float*: Interest cost, loan 1 [$]"),
 	NULL},
{"const_per_interest2", (getter)Outputs_get_const_per_interest2,(setter)0,
	PyDoc_STR("*float*: Interest cost, loan 2 [$]"),
 	NULL},
{"const_per_interest3", (getter)Outputs_get_const_per_interest3,(setter)0,
	PyDoc_STR("*float*: Interest cost, loan 3 [$]"),
 	NULL},
{"const_per_interest4", (getter)Outputs_get_const_per_interest4,(setter)0,
	PyDoc_STR("*float*: Interest cost, loan 4 [$]"),
 	NULL},
{"const_per_interest5", (getter)Outputs_get_const_per_interest5,(setter)0,
	PyDoc_STR("*float*: Interest cost, loan 5 [$]"),
 	NULL},
{"const_per_interest_total", (getter)Outputs_get_const_per_interest_total,(setter)0,
	PyDoc_STR("*float*: Total interest costs, all loans [$]"),
 	NULL},
{"const_per_percent_total", (getter)Outputs_get_const_per_percent_total,(setter)0,
	PyDoc_STR("*float*: Total percent of installed costs, all loans [%]"),
 	NULL},
{"const_per_principal1", (getter)Outputs_get_const_per_principal1,(setter)0,
	PyDoc_STR("*float*: Principal, loan 1 [$]"),
 	NULL},
{"const_per_principal2", (getter)Outputs_get_const_per_principal2,(setter)0,
	PyDoc_STR("*float*: Principal, loan 2 [$]"),
 	NULL},
{"const_per_principal3", (getter)Outputs_get_const_per_principal3,(setter)0,
	PyDoc_STR("*float*: Principal, loan 3 [$]"),
 	NULL},
{"const_per_principal4", (getter)Outputs_get_const_per_principal4,(setter)0,
	PyDoc_STR("*float*: Principal, loan 4 [$]"),
 	NULL},
{"const_per_principal5", (getter)Outputs_get_const_per_principal5,(setter)0,
	PyDoc_STR("*float*: Principal, loan 5 [$]"),
 	NULL},
{"const_per_principal_total", (getter)Outputs_get_const_per_principal_total,(setter)0,
	PyDoc_STR("*float*: Total principal, all loans [$]"),
 	NULL},
{"const_per_total1", (getter)Outputs_get_const_per_total1,(setter)0,
	PyDoc_STR("*float*: Total financing cost, loan 1 [$]"),
 	NULL},
{"const_per_total2", (getter)Outputs_get_const_per_total2,(setter)0,
	PyDoc_STR("*float*: Total financing cost, loan 2 [$]"),
 	NULL},
{"const_per_total3", (getter)Outputs_get_const_per_total3,(setter)0,
	PyDoc_STR("*float*: Total financing cost, loan 3 [$]"),
 	NULL},
{"const_per_total4", (getter)Outputs_get_const_per_total4,(setter)0,
	PyDoc_STR("*float*: Total financing cost, loan 4 [$]"),
 	NULL},
{"const_per_total5", (getter)Outputs_get_const_per_total5,(setter)0,
	PyDoc_STR("*float*: Total financing cost, loan 5 [$]"),
 	NULL},
{"construction_financing_cost", (getter)Outputs_get_construction_financing_cost,(setter)0,
	PyDoc_STR("*float*: Total construction financing cost [$]"),
 	NULL},
{"conversion_factor", (getter)Outputs_get_conversion_factor,(setter)0,
	PyDoc_STR("*float*: Gross to net conversion factor [%]"),
 	NULL},
{"csp_pt_cost_bop", (getter)Outputs_get_csp_pt_cost_bop,(setter)0,
	PyDoc_STR("*float*: BOP cost [$]"),
 	NULL},
{"csp_pt_cost_contingency", (getter)Outputs_get_csp_pt_cost_contingency,(setter)0,
	PyDoc_STR("*float*: Contingency cost [$]"),
 	NULL},
{"csp_pt_cost_epc_total", (getter)Outputs_get_csp_pt_cost_epc_total,(setter)0,
	PyDoc_STR("*float*: EPC and owner cost [$]"),
 	NULL},
{"csp_pt_cost_fossil", (getter)Outputs_get_csp_pt_cost_fossil,(setter)0,
	PyDoc_STR("*float*: Fossil backup cost [$]"),
 	NULL},
{"csp_pt_cost_heliostats", (getter)Outputs_get_csp_pt_cost_heliostats,(setter)0,
	PyDoc_STR("*float*: Heliostat cost [$]"),
 	NULL},
{"csp_pt_cost_installed_per_capacity", (getter)Outputs_get_csp_pt_cost_installed_per_capacity,(setter)0,
	PyDoc_STR("*float*: Estimated installed cost per cap [$]"),
 	NULL},
{"csp_pt_cost_plm_total", (getter)Outputs_get_csp_pt_cost_plm_total,(setter)0,
	PyDoc_STR("*float*: Total land cost [$]"),
 	NULL},
{"csp_pt_cost_power_block", (getter)Outputs_get_csp_pt_cost_power_block,(setter)0,
	PyDoc_STR("*float*: Power cycle cost [$]"),
 	NULL},
{"csp_pt_cost_rad_field", (getter)Outputs_get_csp_pt_cost_rad_field,(setter)0,
	PyDoc_STR("*float*: Radiative field cost$"),
 	NULL},
{"csp_pt_cost_rad_fluid", (getter)Outputs_get_csp_pt_cost_rad_fluid,(setter)0,
	PyDoc_STR("*float*: Radiative fluid cost$"),
 	NULL},
{"csp_pt_cost_rad_storage", (getter)Outputs_get_csp_pt_cost_rad_storage,(setter)0,
	PyDoc_STR("*float*: Cold storage cost$"),
 	NULL},
{"csp_pt_cost_receiver", (getter)Outputs_get_csp_pt_cost_receiver,(setter)0,
	PyDoc_STR("*float*: Receiver cost [$]"),
 	NULL},
{"csp_pt_cost_sales_tax_total", (getter)Outputs_get_csp_pt_cost_sales_tax_total,(setter)0,
	PyDoc_STR("*float*: Sales tax cost [$]"),
 	NULL},
{"csp_pt_cost_site_improvements", (getter)Outputs_get_csp_pt_cost_site_improvements,(setter)0,
	PyDoc_STR("*float*: Site improvement cost [$]"),
 	NULL},
{"csp_pt_cost_storage", (getter)Outputs_get_csp_pt_cost_storage,(setter)0,
	PyDoc_STR("*float*: TES cost [$]"),
 	NULL},
{"csp_pt_cost_total_land_area", (getter)Outputs_get_csp_pt_cost_total_land_area,(setter)0,
	PyDoc_STR("*float*: Total land area [acre]"),
 	NULL},
{"csp_pt_cost_tower", (getter)Outputs_get_csp_pt_cost_tower,(setter)0,
	PyDoc_STR("*float*: Tower cost [$]"),
 	NULL},
{"defocus", (getter)Outputs_get_defocus,(setter)0,
	PyDoc_STR("*sequence*: Field optical focus fraction"),
 	NULL},
{"disp_iter_ann", (getter)Outputs_get_disp_iter_ann,(setter)0,
	PyDoc_STR("*float*: Annual sum of dispatch solver iterations"),
 	NULL},
{"disp_obj_relax", (getter)Outputs_get_disp_obj_relax,(setter)0,
	PyDoc_STR("*sequence*: Dispatch objective function - relaxed max"),
 	NULL},
{"disp_objective", (getter)Outputs_get_disp_objective,(setter)0,
	PyDoc_STR("*sequence*: Dispatch objective function value"),
 	NULL},
{"disp_objective_ann", (getter)Outputs_get_disp_objective_ann,(setter)0,
	PyDoc_STR("*float*: Annual sum of dispatch objective function value"),
 	NULL},
{"disp_pceff_expected", (getter)Outputs_get_disp_pceff_expected,(setter)0,
	PyDoc_STR("*sequence*: Dispatch expected power cycle efficiency adj."),
 	NULL},
{"disp_presolve_nconstr", (getter)Outputs_get_disp_presolve_nconstr,(setter)0,
	PyDoc_STR("*sequence*: Dispatch number of constraints in problem"),
 	NULL},
{"disp_presolve_nconstr_ann", (getter)Outputs_get_disp_presolve_nconstr_ann,(setter)0,
	PyDoc_STR("*float*: Annual sum of dispatch problem constraint count"),
 	NULL},
{"disp_presolve_nvar", (getter)Outputs_get_disp_presolve_nvar,(setter)0,
	PyDoc_STR("*sequence*: Dispatch number of variables in problem"),
 	NULL},
{"disp_presolve_nvar_ann", (getter)Outputs_get_disp_presolve_nvar_ann,(setter)0,
	PyDoc_STR("*float*: Annual sum of dispatch problem variable count"),
 	NULL},
{"disp_qpbsu_expected", (getter)Outputs_get_disp_qpbsu_expected,(setter)0,
	PyDoc_STR("*sequence*: Dispatch expected power cycle startup energy [MWht]"),
 	NULL},
{"disp_qsf_expected", (getter)Outputs_get_disp_qsf_expected,(setter)0,
	PyDoc_STR("*sequence*: Dispatch expected solar field available energy [MWt]"),
 	NULL},
{"disp_qsfprod_expected", (getter)Outputs_get_disp_qsfprod_expected,(setter)0,
	PyDoc_STR("*sequence*: Dispatch expected solar field generation [MWt]"),
 	NULL},
{"disp_qsfsu_expected", (getter)Outputs_get_disp_qsfsu_expected,(setter)0,
	PyDoc_STR("*sequence*: Dispatch expected solar field startup enegy [MWt]"),
 	NULL},
{"disp_rev_expected", (getter)Outputs_get_disp_rev_expected,(setter)0,
	PyDoc_STR("*sequence*: Dispatch expected revenue factor"),
 	NULL},
{"disp_solve_iter", (getter)Outputs_get_disp_solve_iter,(setter)0,
	PyDoc_STR("*sequence*: Dispatch iterations count"),
 	NULL},
{"disp_solve_state", (getter)Outputs_get_disp_solve_state,(setter)0,
	PyDoc_STR("*sequence*: Dispatch solver state"),
 	NULL},
{"disp_solve_time", (getter)Outputs_get_disp_solve_time,(setter)0,
	PyDoc_STR("*sequence*: Dispatch solver time [sec]"),
 	NULL},
{"disp_solve_time_ann", (getter)Outputs_get_disp_solve_time_ann,(setter)0,
	PyDoc_STR("*float*: Annual sum of dispatch solver time"),
 	NULL},
{"disp_tes_expected", (getter)Outputs_get_disp_tes_expected,(setter)0,
	PyDoc_STR("*sequence*: Dispatch expected TES charge level [MWht]"),
 	NULL},
{"disp_thermeff_expected", (getter)Outputs_get_disp_thermeff_expected,(setter)0,
	PyDoc_STR("*sequence*: Dispatch expected SF thermal efficiency adj."),
 	NULL},
{"disp_wpb_expected", (getter)Outputs_get_disp_wpb_expected,(setter)0,
	PyDoc_STR("*sequence*: Dispatch expected power generation [MWe]"),
 	NULL},
{"e_ch_tes", (getter)Outputs_get_e_ch_tes,(setter)0,
	PyDoc_STR("*sequence*: TES charge state [MWht]"),
 	NULL},
{"eta", (getter)Outputs_get_eta,(setter)0,
	PyDoc_STR("*sequence*: PC efficiency, gross"),
 	NULL},
{"eta_field", (getter)Outputs_get_eta_field,(setter)0,
	PyDoc_STR("*sequence*: Field optical efficiency"),
 	NULL},
{"eta_map_out", (getter)Outputs_get_eta_map_out,(setter)0,
	PyDoc_STR("*sequence[sequence]*: Solar field optical efficiencies"),
 	NULL},
{"eta_therm", (getter)Outputs_get_eta_therm,(setter)0,
	PyDoc_STR("*sequence*: Receiver thermal efficiency"),
 	NULL},
{"flux_maps_for_import", (getter)Outputs_get_flux_maps_for_import,(setter)0,
	PyDoc_STR("*sequence[sequence]*: Flux map for import"),
 	NULL},
{"flux_maps_out", (getter)Outputs_get_flux_maps_out,(setter)0,
	PyDoc_STR("*sequence[sequence]*: Flux map intensities"),
 	NULL},
{"gen", (getter)Outputs_get_gen,(setter)0,
	PyDoc_STR("*sequence*: Total electric power to grid with available derate [kWe]"),
 	NULL},
{"htf_pump_power", (getter)Outputs_get_htf_pump_power,(setter)0,
	PyDoc_STR("*sequence*: Parasitic power TES and cycle HTF pump [MWe]"),
 	NULL},
{"is_pc_sb_allowed", (getter)Outputs_get_is_pc_sb_allowed,(setter)0,
	PyDoc_STR("*sequence*: Is power cycle standby allowed"),
 	NULL},
{"is_pc_su_allowed", (getter)Outputs_get_is_pc_su_allowed,(setter)0,
	PyDoc_STR("*sequence*: Is power cycle startup allowed"),
 	NULL},
{"is_rec_su_allowed", (getter)Outputs_get_is_rec_su_allowed,(setter)0,
	PyDoc_STR("*sequence*: Is receiver startup allowed"),
 	NULL},
{"kwh_per_kw", (getter)Outputs_get_kwh_per_kw,(setter)0,
	PyDoc_STR("*float*: First year kWh/kW [kWh/kW]"),
 	NULL},
{"m_cold", (getter)Outputs_get_m_cold,(setter)0,
	PyDoc_STR("*sequence*: Cold storage cold tank mass [kg]"),
 	NULL},
{"m_dot_balance", (getter)Outputs_get_m_dot_balance,(setter)0,
	PyDoc_STR("*sequence*: Relative mass flow balance error"),
 	NULL},
{"m_dot_cr_to_tes_hot", (getter)Outputs_get_m_dot_cr_to_tes_hot,(setter)0,
	PyDoc_STR("*sequence*: Mass flow: field to hot TES [kg/s]"),
 	NULL},
{"m_dot_cycle_to_field", (getter)Outputs_get_m_dot_cycle_to_field,(setter)0,
	PyDoc_STR("*sequence*: Mass flow: cycle to field [kg/s]"),
 	NULL},
{"m_dot_field_to_cycle", (getter)Outputs_get_m_dot_field_to_cycle,(setter)0,
	PyDoc_STR("*sequence*: Mass flow: field to cycle [kg/s]"),
 	NULL},
{"m_dot_pc", (getter)Outputs_get_m_dot_pc,(setter)0,
	PyDoc_STR("*sequence*: PC HTF mass flow rate [kg/s]"),
 	NULL},
{"m_dot_pc_to_tes_cold", (getter)Outputs_get_m_dot_pc_to_tes_cold,(setter)0,
	PyDoc_STR("*sequence*: Mass flow: cycle to cold TES [kg/s]"),
 	NULL},
{"m_dot_rec", (getter)Outputs_get_m_dot_rec,(setter)0,
	PyDoc_STR("*sequence*: Receiver mass flow rate [kg/s]"),
 	NULL},
{"m_dot_tes_cold_out", (getter)Outputs_get_m_dot_tes_cold_out,(setter)0,
	PyDoc_STR("*sequence*: Mass flow: TES cold out [kg/s]"),
 	NULL},
{"m_dot_tes_hot_out", (getter)Outputs_get_m_dot_tes_hot_out,(setter)0,
	PyDoc_STR("*sequence*: Mass flow: TES hot out [kg/s]"),
 	NULL},
{"m_dot_water_pc", (getter)Outputs_get_m_dot_water_pc,(setter)0,
	PyDoc_STR("*sequence*: PC water consumption, makeup + cooling [kg/s]"),
 	NULL},
{"m_warm", (getter)Outputs_get_m_warm,(setter)0,
	PyDoc_STR("*sequence*: Cold storage warm tank mass [kg]"),
 	NULL},
{"mass_tes_cold", (getter)Outputs_get_mass_tes_cold,(setter)0,
	PyDoc_STR("*sequence*: TES cold tank mass (end) [kg]"),
 	NULL},
{"mass_tes_hot", (getter)Outputs_get_mass_tes_hot,(setter)0,
	PyDoc_STR("*sequence*: TES hot tank mass (end) [kg]"),
 	NULL},
{"n_op_modes", (getter)Outputs_get_n_op_modes,(setter)0,
	PyDoc_STR("*sequence*: Operating modes in reporting timestep"),
 	NULL},
{"op_mode_1", (getter)Outputs_get_op_mode_1,(setter)0,
	PyDoc_STR("*sequence*: 1st operating mode"),
 	NULL},
{"op_mode_2", (getter)Outputs_get_op_mode_2,(setter)0,
	PyDoc_STR("*sequence*: 2nd operating mode, if applicable"),
 	NULL},
{"op_mode_3", (getter)Outputs_get_op_mode_3,(setter)0,
	PyDoc_STR("*sequence*: 3rd operating mode, if applicable"),
 	NULL},
{"operating_modes_a", (getter)Outputs_get_operating_modes_a,(setter)0,
	PyDoc_STR("*sequence*: First 3 operating modes tried"),
 	NULL},
{"operating_modes_b", (getter)Outputs_get_operating_modes_b,(setter)0,
	PyDoc_STR("*sequence*: Next 3 operating modes tried"),
 	NULL},
{"operating_modes_c", (getter)Outputs_get_operating_modes_c,(setter)0,
	PyDoc_STR("*sequence*: Final 3 operating modes tried"),
 	NULL},
{"pparasi", (getter)Outputs_get_pparasi,(setter)0,
	PyDoc_STR("*sequence*: Parasitic power heliostat drives [MWe]"),
 	NULL},
{"pricing_mult", (getter)Outputs_get_pricing_mult,(setter)0,
	PyDoc_STR("*sequence*: PPA price multiplier"),
 	NULL},
{"q_balance", (getter)Outputs_get_q_balance,(setter)0,
	PyDoc_STR("*sequence*: Relative energy balance error"),
 	NULL},
{"q_ch_tes", (getter)Outputs_get_q_ch_tes,(setter)0,
	PyDoc_STR("*sequence*: TES charge thermal power [MWt]"),
 	NULL},
{"q_dc_tes", (getter)Outputs_get_q_dc_tes,(setter)0,
	PyDoc_STR("*sequence*: TES discharge thermal power [MWt]"),
 	NULL},
{"q_dot_est_cr_on", (getter)Outputs_get_q_dot_est_cr_on,(setter)0,
	PyDoc_STR("*sequence*: Estimated receiver thermal power TO HTF [MWt]"),
 	NULL},
{"q_dot_est_cr_su", (getter)Outputs_get_q_dot_est_cr_su,(setter)0,
	PyDoc_STR("*sequence*: Estimated receiver startup thermal power [MWt]"),
 	NULL},
{"q_dot_est_tes_ch", (getter)Outputs_get_q_dot_est_tes_ch,(setter)0,
	PyDoc_STR("*sequence*: Estimated max TES charge thermal power [MWt]"),
 	NULL},
{"q_dot_est_tes_dc", (getter)Outputs_get_q_dot_est_tes_dc,(setter)0,
	PyDoc_STR("*sequence*: Estimated max TES discharge thermal power [MWt]"),
 	NULL},
{"q_dot_pc_max", (getter)Outputs_get_q_dot_pc_max,(setter)0,
	PyDoc_STR("*sequence*: Max thermal power to PC [MWt]"),
 	NULL},
{"q_dot_pc_min", (getter)Outputs_get_q_dot_pc_min,(setter)0,
	PyDoc_STR("*sequence*: Thermal power for PC min operation [MWt]"),
 	NULL},
{"q_dot_pc_sb", (getter)Outputs_get_q_dot_pc_sb,(setter)0,
	PyDoc_STR("*sequence*: Thermal power for PC standby [MWt]"),
 	NULL},
{"q_dot_pc_startup", (getter)Outputs_get_q_dot_pc_startup,(setter)0,
	PyDoc_STR("*sequence*: PC startup thermal power [MWt]"),
 	NULL},
{"q_dot_pc_target", (getter)Outputs_get_q_dot_pc_target,(setter)0,
	PyDoc_STR("*sequence*: Target thermal power to PC [MWt]"),
 	NULL},
{"q_dot_rec_inc", (getter)Outputs_get_q_dot_rec_inc,(setter)0,
	PyDoc_STR("*sequence*: Receiver incident thermal power [MWt]"),
 	NULL},
{"q_heater", (getter)Outputs_get_q_heater,(setter)0,
	PyDoc_STR("*sequence*: TES freeze protection power [MWe]"),
 	NULL},
{"q_pb", (getter)Outputs_get_q_pb,(setter)0,
	PyDoc_STR("*sequence*: PC input energy [MWt]"),
 	NULL},
{"q_pc_startup", (getter)Outputs_get_q_pc_startup,(setter)0,
	PyDoc_STR("*sequence*: PC startup thermal energy [MWht]"),
 	NULL},
{"q_piping_losses", (getter)Outputs_get_q_piping_losses,(setter)0,
	PyDoc_STR("*sequence*: Receiver header/tower piping losses [MWt]"),
 	NULL},
{"q_sf_inc", (getter)Outputs_get_q_sf_inc,(setter)0,
	PyDoc_STR("*sequence*: Field incident thermal power [MWt]"),
 	NULL},
{"q_startup", (getter)Outputs_get_q_startup,(setter)0,
	PyDoc_STR("*sequence*: Receiver startup thermal energy consumed [MWt]"),
 	NULL},
{"q_thermal_loss", (getter)Outputs_get_q_thermal_loss,(setter)0,
	PyDoc_STR("*sequence*: Receiver convection and emission losses [MWt]"),
 	NULL},
{"radcool_control", (getter)Outputs_get_radcool_control,(setter)0,
	PyDoc_STR("*sequence*: Radiative cooling status code [-]"),
 	NULL},
{"rh", (getter)Outputs_get_rh,(setter)0,
	PyDoc_STR("*sequence*: Resource relative humidity [%]"),
 	NULL},
{"sco2_preprocess_table_out", (getter)Outputs_get_sco2_preprocess_table_out,(setter)0,
	PyDoc_STR("*sequence[sequence]*: sCO2 cycle preprocessed data in UDPC format"),
 	NULL},
{"sf_adjust_out", (getter)Outputs_get_sf_adjust_out,(setter)0,
	PyDoc_STR("*sequence*: Field availability adjustment factor"),
 	NULL},
{"solaz", (getter)Outputs_get_solaz,(setter)0,
	PyDoc_STR("*sequence*: Resource solar azimuth [deg]"),
 	NULL},
{"solzen", (getter)Outputs_get_solzen,(setter)0,
	PyDoc_STR("*sequence*: Resource solar zenith [deg]"),
 	NULL},
{"system_capacity", (getter)Outputs_get_system_capacity,(setter)0,
	PyDoc_STR("*float*: System capacity [kWe]"),
 	NULL},
{"tank_losses", (getter)Outputs_get_tank_losses,(setter)0,
	PyDoc_STR("*sequence*: TES thermal losses [MWt]"),
 	NULL},
{"tdry", (getter)Outputs_get_tdry,(setter)0,
	PyDoc_STR("*sequence*: Resource dry Bulb temperature [C]"),
 	NULL},
{"time_hr", (getter)Outputs_get_time_hr,(setter)0,
	PyDoc_STR("*sequence*: Time at end of timestep [hr]"),
 	NULL},
{"total_direct_cost", (getter)Outputs_get_total_direct_cost,(setter)0,
	PyDoc_STR("*float*: Total direct cost [$]"),
 	NULL},
{"total_indirect_cost", (getter)Outputs_get_total_indirect_cost,(setter)0,
	PyDoc_STR("*float*: Total indirect cost [$]"),
 	NULL},
{"total_installed_cost", (getter)Outputs_get_total_installed_cost,(setter)0,
	PyDoc_STR("*float*: Total installed cost [$]"),
 	NULL},
{"tou_value", (getter)Outputs_get_tou_value,(setter)0,
	PyDoc_STR("*sequence*: CSP operating time-of-use value"),
 	NULL},
{"twet", (getter)Outputs_get_twet,(setter)0,
	PyDoc_STR("*sequence*: Resource wet Bulb temperature [C]"),
 	NULL},
{"ui_direct_subtotal", (getter)Outputs_get_ui_direct_subtotal,(setter)0,
	PyDoc_STR("*float*: Direct capital precontingency cost [$]"),
 	NULL},
{"wspd", (getter)Outputs_get_wspd,(setter)0,
	PyDoc_STR("*sequence*: Resource wind velocity [m/s]"),
 	NULL},
	{NULL}  /* Sentinel */
};

static PyTypeObject Outputs_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"TcsmoltenSalt.Outputs",             /*tp_name*/
		sizeof(VarGroupObject),          /*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		0,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		0,                          /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		0,                          /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		0,                          /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		Outputs_methods,         /*tp_methods*/
		0,                          /*tp_members*/
		Outputs_getset,          /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,             /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};

/*
 * TcsmoltenSalt
 */

static PyTypeObject TcsmoltenSalt_Type;

static CmodObject *
newTcsmoltenSaltObject(void* data_ptr)
{
	CmodObject *self;
	self = PyObject_New(CmodObject, &TcsmoltenSalt_Type);

	PySAM_TECH_ATTR()

	PyObject* SolarResource_obj = SolarResource_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "SolarResource", SolarResource_obj);
	Py_DECREF(SolarResource_obj);

	PyObject* TimeOfDeliveryFactors_obj = TimeOfDeliveryFactors_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "TimeOfDeliveryFactors", TimeOfDeliveryFactors_obj);
	Py_DECREF(TimeOfDeliveryFactors_obj);

	PyObject* HeliostatField_obj = HeliostatField_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "HeliostatField", HeliostatField_obj);
	Py_DECREF(HeliostatField_obj);

	PyObject* SystemDesign_obj = SystemDesign_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "SystemDesign", SystemDesign_obj);
	Py_DECREF(SystemDesign_obj);

	PyObject* TowerAndReceiver_obj = TowerAndReceiver_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "TowerAndReceiver", TowerAndReceiver_obj);
	Py_DECREF(TowerAndReceiver_obj);

	PyObject* SystemCosts_obj = SystemCosts_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "SystemCosts", SystemCosts_obj);
	Py_DECREF(SystemCosts_obj);

	PyObject* FinancialParameters_obj = FinancialParameters_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "FinancialParameters", FinancialParameters_obj);
	Py_DECREF(FinancialParameters_obj);

	PyObject* ThermalStorage_obj = ThermalStorage_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "ThermalStorage", ThermalStorage_obj);
	Py_DECREF(ThermalStorage_obj);

	PyObject* RADCOOL_obj = RADCOOL_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "RADCOOL", RADCOOL_obj);
	Py_DECREF(RADCOOL_obj);

	PyObject* PowerCycle_obj = PowerCycle_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "PowerCycle", PowerCycle_obj);
	Py_DECREF(PowerCycle_obj);

	PyObject* RankineCycle_obj = RankineCycle_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "RankineCycle", RankineCycle_obj);
	Py_DECREF(RankineCycle_obj);

	PyObject* SystemControl_obj = SystemControl_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "SystemControl", SystemControl_obj);
	Py_DECREF(SystemControl_obj);

	PyObject* UserDefinedPowerCycle_obj = UserDefinedPowerCycle_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "UserDefinedPowerCycle", UserDefinedPowerCycle_obj);
	Py_DECREF(UserDefinedPowerCycle_obj);

	PyObject* SCO2Cycle_obj = SCO2Cycle_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "SCO2Cycle", SCO2Cycle_obj);
	Py_DECREF(SCO2Cycle_obj);

	PyObject* AdjustmentFactorsModule = PyImport_ImportModule("AdjustmentFactors");

	PyObject* data_cap = PyCapsule_New(self->data_ptr, NULL, NULL);
	PyObject* Adjust_obj = PyObject_CallMethod(AdjustmentFactorsModule, "new", "(O)", data_cap);
	Py_XDECREF(data_cap);
	Py_XDECREF(AdjustmentFactorsModule);

	if (!Adjust_obj){
		PyErr_SetString(PyExc_Exception, "Couldn't create AdjustmentFactorsObject\n");
		return NULL;
	}

	PyDict_SetItemString(attr_dict, "AdjustmentFactors", Adjust_obj);
	Py_DECREF(Adjust_obj);

	PyObject* Outputs_obj = Outputs_new(self->data_ptr);
	PyDict_SetItemString(attr_dict, "Outputs", Outputs_obj);
	Py_DECREF(Outputs_obj);

	return self;
}

/* TcsmoltenSalt methods */

static void
TcsmoltenSalt_dealloc(CmodObject *self)
{
	Py_XDECREF(self->x_attr);

	if (!self->data_owner_ptr) {
		SAM_error error = new_error();
		SAM_table_destruct(self->data_ptr, &error);
		PySAM_has_error(error);
	}
	PyObject_Del(self);
}


static PyObject *
TcsmoltenSalt_execute(CmodObject *self, PyObject *args)
{
	int verbosity = 0;

	if (!PyArg_ParseTuple(args, "|i", &verbosity))
		return NULL;

	SAM_error error = new_error();
	SAM_TcsmoltenSalt_execute(self->data_ptr, verbosity, &error);
	if (PySAM_has_error(error )) return NULL;
	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject *
TcsmoltenSalt_assign(CmodObject *self, PyObject *args)
{
	PyObject* dict;
	if (!PyArg_ParseTuple(args, "O:assign", &dict)){
		return NULL;
	}

	if (!PySAM_assign_from_nested_dict((PyObject*)self, self->x_attr, self->data_ptr, dict, "TcsmoltenSalt"))
		return NULL;

	Py_INCREF(Py_None);
	return Py_None;
}


static PyObject *
TcsmoltenSalt_export(CmodObject *self, PyObject *args)
{
	return PySAM_export_to_nested_dict((PyObject *) self, self->x_attr);
}

static PyObject *
TcsmoltenSalt_value(CmodObject *self, PyObject *args)
{
	return Cmod_value(self, args);
}

static PyObject *
TcsmoltenSalt_unassign(CmodObject *self, PyObject *args)
{
	return Cmod_unassign(self, args);
}

static PyMethodDef TcsmoltenSalt_methods[] = {
		{"execute",           (PyCFunction)TcsmoltenSalt_execute,  METH_VARARGS,
				PyDoc_STR("execute(int verbosity) -> None\n Execute simulation with verbosity level 0 (default) or 1")},
		{"assign",            (PyCFunction)TcsmoltenSalt_assign,  METH_VARARGS,
				PyDoc_STR("assign(dict) -> None\n Assign attributes from nested dictionary, except for Outputs\n\n``nested_dict = { 'Solar Resource': { var: val, ...}, ...}``")},
		{"export",            (PyCFunction)TcsmoltenSalt_export,  METH_VARARGS,
				PyDoc_STR("export() -> dict\n Export attributes into nested dictionary")},
		{"value",             (PyCFunction)TcsmoltenSalt_value, METH_VARARGS,
				PyDoc_STR("value(name, optional value) -> Union[None, float, dict, sequence, str]\n Get or set by name a value in any of the variable groups.")},
		{"unassign",          (PyCFunction)TcsmoltenSalt_unassign, METH_VARARGS,
				PyDoc_STR("unassign(name) -> None\n Unassign a value in any of the variable groups.")},
		{NULL,              NULL}           /* sentinel */
};

static PyObject *
TcsmoltenSalt_getattro(CmodObject *self, PyObject *name)
{
	return PySAM_get_attr((PyObject*) self, (PyObject*) self->x_attr, name);
}

static int
TcsmoltenSalt_setattr(CmodObject *self, const char *name, PyObject *v)
{
	return PySAM_set_attr((PyObject*)self, (PyObject*)self->x_attr, name, v);
}

static PyTypeObject TcsmoltenSalt_Type = {
		/* The ob_type field must be initialized in the module init function
		 * to be portable to Windows without using C++. */
		PyVarObject_HEAD_INIT(NULL, 0)
		"TcsmoltenSalt",            /*tp_name*/
		sizeof(CmodObject),/*tp_basicsize*/
		0,                          /*tp_itemsize*/
		/* methods */
		(destructor)TcsmoltenSalt_dealloc,    /*tp_dealloc*/
		0,                          /*tp_print*/
		(getattrfunc)0,             /*tp_getattr*/
		(setattrfunc)TcsmoltenSalt_setattr,   /*tp_setattr*/
		0,                          /*tp_reserved*/
		0,                          /*tp_repr*/
		0,                          /*tp_as_number*/
		0,                          /*tp_as_sequence*/
		0,                          /*tp_as_mapping*/
		0,                          /*tp_hash*/
		0,                          /*tp_call*/
		0,                          /*tp_str*/
		(getattrofunc)TcsmoltenSalt_getattro, /*tp_getattro*/
		0,                          /*tp_setattro*/
		0,                          /*tp_as_buffer*/
		Py_TPFLAGS_DEFAULT,         /*tp_flags*/
		"This class contains all the variable information for running a simulation. Variables are grouped together in the subclasses as properties. If property assignments are the wrong type, an error is thrown.",        /*tp_doc*/
		0,                          /*tp_traverse*/
		0,                          /*tp_clear*/
		0,                          /*tp_richcompare*/
		0,                          /*tp_weaklistofnset*/
		0,                          /*tp_iter*/
		0,                          /*tp_iternext*/
		TcsmoltenSalt_methods,      /*tp_methods*/
		0,                          /*tp_members*/
		0,       /*tp_getset*/
		0,                          /*tp_base*/
		0,                          /*tp_dict*/
		0,                          /*tp_descr_get*/
		0,                          /*tp_descr_set*/
		0,                          /*tp_dictofnset*/
		0,                          /*tp_init*/
		0,                          /*tp_alloc*/
		0,                          /*tp_new*/
		0,                          /*tp_free*/
		0,                          /*tp_is_gc*/
};

/* --------------------------------------------------------------------- */


/* Function of no arguments returning new TcsmoltenSalt object */

static PyObject *
TcsmoltenSalt_new(PyObject *self, PyObject *args)
{
	CmodObject *rv;
	rv = newTcsmoltenSaltObject(0);
	if (rv == NULL)
		return NULL;

	rv->data_owner_ptr = NULL;
	return (PyObject *)rv;
}

static PyObject *
TcsmoltenSalt_wrap(PyObject *self, PyObject *args)
{
	CmodObject *rv;
	long long int ptr = 0;  // 64 bit arch
	if (!PyArg_ParseTuple(args, "L:wrap", &ptr)){
		PyErr_BadArgument();
		return NULL;
	}
	rv = newTcsmoltenSaltObject((void*)ptr);
	if (rv == NULL)
		return NULL;

	rv->data_owner_ptr = NULL;
	return (PyObject *)rv;
}

static PyObject *
TcsmoltenSalt_default(PyObject *self, PyObject *args)
{
	CmodObject *rv;
	char* def = 0;
	if (!PyArg_ParseTuple(args, "s:default", &def)){
		PyErr_BadArgument();
		return NULL;
	}
	rv = newTcsmoltenSaltObject(0);
	if (rv == NULL)
		return NULL;

	rv->data_owner_ptr = NULL;
	if (PySAM_load_defaults((PyObject*)rv, rv->x_attr, rv->data_ptr, "TcsmoltenSalt", def) < 0) {
		TcsmoltenSalt_dealloc(rv);
		return NULL;
	}
	return (PyObject *)rv;
}

static PyObject *
TcsmoltenSalt_from_existing(PyObject *self, PyObject *args)
{
	CmodObject *rv;
	PyObject * module = 0;
	char* def = 0;
	if (!PyArg_ParseTuple(args, "O|s:from_existing", &module, &def)){
		PyErr_BadArgument();
		return NULL;
	}
	CmodObject *module_obj = (CmodObject *)module;
	SAM_table ptr = module_obj->data_ptr;

	// do a rough validity check on the data by checking its size
	SAM_error error = new_error();
	int data_size = SAM_table_size(ptr, &error);
	if (PySAM_has_error(error))
		goto fail;
	if (data_size < 0)
		goto fail;

	rv = newTcsmoltenSaltObject((void*)ptr);
	if (rv == NULL)
		goto fail;
	rv->data_owner_ptr = module;
	if (!def)
		return (PyObject *)rv;
	PySAM_load_defaults((PyObject*)rv, rv->x_attr, rv->data_ptr, "TcsmoltenSalt", def);
	return (PyObject *)rv;

	fail:
	Py_DECREF(module);
	return NULL;
}/* ---------- */


/* List of functions defined in the module */

static PyMethodDef TcsmoltenSaltModule_methods[] = {
		{"new",             TcsmoltenSalt_new,         METH_VARARGS,
				PyDoc_STR("new() -> TcsmoltenSalt")},
		{"default",             TcsmoltenSalt_default,         METH_VARARGS,
				PyDoc_STR("default(config) -> TcsmoltenSalt\n\nUse default attributes\n"
				"`config` options:\n\n- \"MSPTAllEquityPartnershipFlip\"\n- \"MSPTLeveragedPartnershipFlip\"\n- \"MSPTMerchantPlant\"\n- \"MSPTSaleLeaseback\"\n- \"MSPTSingleOwner\"")},
		{"wrap",             TcsmoltenSalt_wrap,         METH_VARARGS,
				PyDoc_STR("wrap(ssc_data_t) -> TcsmoltenSalt\n\nUse existing PySSC data\n\n.. warning::\n\n	Do not call PySSC.data_free on the ssc_data_t provided to ``wrap``")},
		{"from_existing",   TcsmoltenSalt_from_existing,        METH_VARARGS,
				PyDoc_STR("from_existing(data, optional config) -> TcsmoltenSalt\n\nShare underlying data with an existing PySAM class. If config provided, default attributes are loaded otherwise.")},
		{NULL,              NULL}           /* sentinel */
};

PyDoc_STRVAR(module_doc,
			 "CSP molten salt power tower for power generation");


static int
TcsmoltenSaltModule_exec(PyObject *m)
{
	/* Finalize the type object including setting type of the new type
	 * object; doing it here is required for portability, too. */

	if (PySAM_load_lib(m) < 0) goto fail;

	TcsmoltenSalt_Type.tp_dict = PyDict_New();
	if (!TcsmoltenSalt_Type.tp_dict) { goto fail; }

	/// Add the AdjustmentFactors type object to TcsmoltenSalt_Type
	PyObject* AdjustmentFactorsModule = PyImport_ImportModule("AdjustmentFactors");
	if (!AdjustmentFactorsModule){
		PyErr_SetImportError(PyUnicode_FromString("Could not import AdjustmentFactors module."), NULL, NULL);
	}

	PyTypeObject* AdjustmentFactors_Type = (PyTypeObject*)PyObject_GetAttrString(AdjustmentFactorsModule, "AdjustmentFactors");
	if (!AdjustmentFactors_Type){
		PyErr_SetImportError(PyUnicode_FromString("Could not import AdjustmentFactors type."), NULL, NULL);
	}
	Py_XDECREF(AdjustmentFactorsModule);

	if (PyType_Ready(AdjustmentFactors_Type) < 0) { goto fail; }
	PyDict_SetItemString(TcsmoltenSalt_Type.tp_dict,
						 "AdjustmentFactors",
						 (PyObject*)AdjustmentFactors_Type);
	Py_DECREF(&AdjustmentFactors_Type);
	Py_XDECREF(AdjustmentFactors_Type);

	/// Add the SolarResource type object to TcsmoltenSalt_Type
	if (PyType_Ready(&SolarResource_Type) < 0) { goto fail; }
	PyDict_SetItemString(TcsmoltenSalt_Type.tp_dict,
				"SolarResource",
				(PyObject*)&SolarResource_Type);
	Py_DECREF(&SolarResource_Type);

	/// Add the TimeOfDeliveryFactors type object to TcsmoltenSalt_Type
	if (PyType_Ready(&TimeOfDeliveryFactors_Type) < 0) { goto fail; }
	PyDict_SetItemString(TcsmoltenSalt_Type.tp_dict,
				"TimeOfDeliveryFactors",
				(PyObject*)&TimeOfDeliveryFactors_Type);
	Py_DECREF(&TimeOfDeliveryFactors_Type);

	/// Add the HeliostatField type object to TcsmoltenSalt_Type
	if (PyType_Ready(&HeliostatField_Type) < 0) { goto fail; }
	PyDict_SetItemString(TcsmoltenSalt_Type.tp_dict,
				"HeliostatField",
				(PyObject*)&HeliostatField_Type);
	Py_DECREF(&HeliostatField_Type);

	/// Add the SystemDesign type object to TcsmoltenSalt_Type
	if (PyType_Ready(&SystemDesign_Type) < 0) { goto fail; }
	PyDict_SetItemString(TcsmoltenSalt_Type.tp_dict,
				"SystemDesign",
				(PyObject*)&SystemDesign_Type);
	Py_DECREF(&SystemDesign_Type);

	/// Add the TowerAndReceiver type object to TcsmoltenSalt_Type
	if (PyType_Ready(&TowerAndReceiver_Type) < 0) { goto fail; }
	PyDict_SetItemString(TcsmoltenSalt_Type.tp_dict,
				"TowerAndReceiver",
				(PyObject*)&TowerAndReceiver_Type);
	Py_DECREF(&TowerAndReceiver_Type);

	/// Add the SystemCosts type object to TcsmoltenSalt_Type
	if (PyType_Ready(&SystemCosts_Type) < 0) { goto fail; }
	PyDict_SetItemString(TcsmoltenSalt_Type.tp_dict,
				"SystemCosts",
				(PyObject*)&SystemCosts_Type);
	Py_DECREF(&SystemCosts_Type);

	/// Add the FinancialParameters type object to TcsmoltenSalt_Type
	if (PyType_Ready(&FinancialParameters_Type) < 0) { goto fail; }
	PyDict_SetItemString(TcsmoltenSalt_Type.tp_dict,
				"FinancialParameters",
				(PyObject*)&FinancialParameters_Type);
	Py_DECREF(&FinancialParameters_Type);

	/// Add the ThermalStorage type object to TcsmoltenSalt_Type
	if (PyType_Ready(&ThermalStorage_Type) < 0) { goto fail; }
	PyDict_SetItemString(TcsmoltenSalt_Type.tp_dict,
				"ThermalStorage",
				(PyObject*)&ThermalStorage_Type);
	Py_DECREF(&ThermalStorage_Type);

	/// Add the RADCOOL type object to TcsmoltenSalt_Type
	if (PyType_Ready(&RADCOOL_Type) < 0) { goto fail; }
	PyDict_SetItemString(TcsmoltenSalt_Type.tp_dict,
				"RADCOOL",
				(PyObject*)&RADCOOL_Type);
	Py_DECREF(&RADCOOL_Type);

	/// Add the PowerCycle type object to TcsmoltenSalt_Type
	if (PyType_Ready(&PowerCycle_Type) < 0) { goto fail; }
	PyDict_SetItemString(TcsmoltenSalt_Type.tp_dict,
				"PowerCycle",
				(PyObject*)&PowerCycle_Type);
	Py_DECREF(&PowerCycle_Type);

	/// Add the RankineCycle type object to TcsmoltenSalt_Type
	if (PyType_Ready(&RankineCycle_Type) < 0) { goto fail; }
	PyDict_SetItemString(TcsmoltenSalt_Type.tp_dict,
				"RankineCycle",
				(PyObject*)&RankineCycle_Type);
	Py_DECREF(&RankineCycle_Type);

	/// Add the SystemControl type object to TcsmoltenSalt_Type
	if (PyType_Ready(&SystemControl_Type) < 0) { goto fail; }
	PyDict_SetItemString(TcsmoltenSalt_Type.tp_dict,
				"SystemControl",
				(PyObject*)&SystemControl_Type);
	Py_DECREF(&SystemControl_Type);

	/// Add the UserDefinedPowerCycle type object to TcsmoltenSalt_Type
	if (PyType_Ready(&UserDefinedPowerCycle_Type) < 0) { goto fail; }
	PyDict_SetItemString(TcsmoltenSalt_Type.tp_dict,
				"UserDefinedPowerCycle",
				(PyObject*)&UserDefinedPowerCycle_Type);
	Py_DECREF(&UserDefinedPowerCycle_Type);

	/// Add the SCO2Cycle type object to TcsmoltenSalt_Type
	if (PyType_Ready(&SCO2Cycle_Type) < 0) { goto fail; }
	PyDict_SetItemString(TcsmoltenSalt_Type.tp_dict,
				"SCO2Cycle",
				(PyObject*)&SCO2Cycle_Type);
	Py_DECREF(&SCO2Cycle_Type);

	/// Add the Outputs type object to TcsmoltenSalt_Type
	if (PyType_Ready(&Outputs_Type) < 0) { goto fail; }
	PyDict_SetItemString(TcsmoltenSalt_Type.tp_dict,
				"Outputs",
				(PyObject*)&Outputs_Type);
	Py_DECREF(&Outputs_Type);

	/// Add the TcsmoltenSalt type object to the module
	if (PyType_Ready(&TcsmoltenSalt_Type) < 0) { goto fail; }
	PyModule_AddObject(m,
				"TcsmoltenSalt",
				(PyObject*)&TcsmoltenSalt_Type);

	return 0;
	fail:
	Py_XDECREF(m);
	return -1;
}

static struct PyModuleDef_Slot TcsmoltenSaltModule_slots[] = {
		{Py_mod_exec, TcsmoltenSaltModule_exec},
		{0, NULL},
};

static struct PyModuleDef TcsmoltenSaltModule = {
		PyModuleDef_HEAD_INIT,
		"TcsmoltenSalt",
		module_doc,
		0,
		TcsmoltenSaltModule_methods,
		TcsmoltenSaltModule_slots,
		NULL,
		NULL,
		NULL
};

/* Export function for the module */

PyMODINIT_FUNC
PyInit_TcsmoltenSalt(void)
{
	return PyModuleDef_Init(&TcsmoltenSaltModule);
}