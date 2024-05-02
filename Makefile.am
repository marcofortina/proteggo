# Copyright (c) 2024 Marco Fortina
# Distributed under the MIT software license, see the accompanying
# file LICENSE or https://opensource.org/license/MIT.

ACLOCAL_AMFLAGS = -I build-aux/m4
SUBDIRS = src

distclean-local:
	-$(MAKE) -C src clean
	-rm -rf autom4te.cache/
	-rm -f aclocal.m4
	-rm -f config.log config.status
	-rm -f configure configure~
	-rm -f Makefile Makefile.in
	-rm -f src/Makefile src/Makefile.in
	-rm -rf src/.deps
