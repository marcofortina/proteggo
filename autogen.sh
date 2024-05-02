#!/bin/sh

# Copyright (c) 2024 Marco Fortina
# Distributed under the MIT software license, see the accompanying
# file LICENSE or https://opensource.org/license/MIT.

export LC_ALL=C
set -e
srcdir="$(dirname "$0")"
cd "$srcdir"
command -v autoreconf >/dev/null || \
    (echo "configuration failed, please install autoconf first" && exit 1)
autoreconf --install --force --warnings=all
