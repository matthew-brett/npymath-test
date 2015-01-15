#################################
Test compiling npymath on Windows
#################################

A test for compiling npymath libs on Windows.

Cncludes the libmingwex.a runtime static library renamed to 'mingwex.lib'.

Library from directory:
https://sourceforge.net/projects/mingw/files/MinGW/Base/mingwrt/mingwrt-3.21/

Extracted from: ``mingwrt-3.21-mingw32-dev.tar.xz``.

Test with (VS builds)::

    python setup.py build_ext -i
    python -c 'import spam; spam.spam_cos()'
