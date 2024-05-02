# Copyright (c) 2024 Marco Fortina
# Distributed under the MIT software license, see the accompanying
# file LICENSE or https://opensource.org/license/MIT.

AC_PREREQ([2.69])

AC_INIT([Proteggo],[0.0.1],[https://github.com/marcofortina/proteggo/issues])

dnl Set the source directory for configure
AC_CONFIG_SRCDIR([src])

dnl Set the directory for auxiliary configure files
AC_CONFIG_AUX_DIR([build-aux])

dnl Set the directory for custom macro definitions
AC_CONFIG_MACRO_DIR([build-aux/m4])

dnl Automake init set-up and checks
AM_INIT_AUTOMAKE([1.13 no-define subdir-objects foreign])

dnl make the compilation flags quiet unless V=1 is used
AM_SILENT_RULES([yes])

dnl Check for C++ compiler
AC_PROG_CXX

dnl Require C++20 compiler (no GNU extensions)
AX_CXX_COMPILE_STDCXX([20], [noext], [mandatory])

dnl Generate the following files during configure:
dnl - Makefile: The main top-level Makefile for your project
dnl - src/Makefile: The Makefile for the 'src' directory
AC_CONFIG_FILES([Makefile src/Makefile])

dnl Output the configuration files and finalize configure script
AC_OUTPUT

echo
echo "Options used to compile and link:"
echo
echo "  CXX             = $CXX"
echo "  CXXFLAGS        = $CXXFLAGS"
echo "  LDFLAGS         = $LDFLAGS"
echo

