from distutils.core import setup, Extension

setup(
	name='nombre_libreria',
	version='1.0',
	ext_modules = [
		Extension('nombre_libreria', ['libreria.c'])
	]
)