from distutils.core import setup, Extension

from numpy.distutils.misc_util import get_info

ext_kwargs = get_info('npymath')
ext_kwargs['libraries'].append('mingwex')
spam = Extension('spam', sources = ['amodule.c'],
		**ext_kwargs)

setup (name = 'PackageName',
       version = '1.0',
       description = 'This is a demo package',
       ext_modules = [spam])
