# CPython
Simple example to import C modules from python.
Source: https://www.tutorialspoint.com/python/python_further_extensions.htm

To build the library you run the usual commands:
python setup.py build
python setup.py install

Maybe you need tu use the command:
python setup.py build -c mingw32
(only if you have problems detecting the C compiler)
