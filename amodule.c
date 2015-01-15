#include <Python.h>
#include "numpy/npy_math.h"

static PyObject * spam_cos(PyObject *self, PyObject *args)
{
    return PyFloat_FromDouble(npy_cos(0.1));
}

static PyMethodDef SpamMethods[] = {
    {"spam_cos",  spam_cos, METH_VARARGS,
    "Run cos in numpy math"},
    {NULL, NULL, 0, NULL} /* Sentinel */
};

static struct PyModuleDef spammodule = {
   PyModuleDef_HEAD_INIT,
   "spam",   /* name of module */
   NULL, /* module documentation, may be NULL */
   -1,       /* size of per-interpreter state of the module,
                or -1 if the module keeps state in global variables. */
   SpamMethods
};

PyMODINIT_FUNC
PyInit_spam(void)
{
    PyObject *m;

    m = PyModule_Create(&spammodule);
    if (m == NULL)
        return NULL;

    return m;
}

