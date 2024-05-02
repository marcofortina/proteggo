# Copyright (c) 2024 Marco Fortina
# Distributed under the MIT software license, see the accompanying
# file LICENSE or https://opensource.org/license/MIT.

AM_CXXFLAGS =

PROTEGGO_INCLUDES=-I$(builddir)

bin_PROGRAMS = proteggo-node proteggo-cli

proteggo_cli_SOURCES = proteggo-cli.cpp
proteggo_cli_CXXFLAGS = $(AM_CXXFLAGS)
proteggo_cli_LDFLAGS = $(AM_LDFLAGS)
proteggo_cli_LDADD =

proteggo_node_SOURCES = proteggo-node.cpp
proteggo_node_CXXFLAGS = $(AM_CXXFLAGS)
proteggo_node_LDFLAGS = $(AM_LDFLAGS)
proteggo_node_LDADD =

clean-local:
	-rm -f *.o *.a *.lo *.la *.so
	-rm -f proteggo-node proteggo-cli
