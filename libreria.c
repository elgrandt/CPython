#include <Python.h>

#define MODULE "nombre_libreria"
#define DESCRIPTION "descripcion_libreria"

static PyObject *funcion(PyObject *self, PyObject *args) {

	long long i;
	double d;
	char *s;

	if (!PyArg_ParseTuple(args, "Lds", &i, &d, &s)) {
		return NULL;
	}

	/* MI FUNCION */
	

	Py_RETURN_NONE;
}

static PyMethodDef module_functions[] = {
	{ "nombre_funcion", (PyCFunction)funcion, METH_VARARGS, NULL },
	{ NULL, NULL, 0, NULL }
};

static struct PyModuleDef moduledef = {
	PyModuleDef_HEAD_INIT,
	MODULE,              /* m_name */
	DESCRIPTION,         /* m_doc */
	-1,                  /* m_size */
	module_functions,    /* m_methods */
	NULL,                /* m_reload */
	NULL,                /* m_traverse */
	NULL,                /* m_clear */
	NULL,                /* m_free */
};

PyMODINIT_FUNC PyInit_nombre_libreria(void){
	return PyModule_Create(&moduledef);
}
