#!/usr/bin/env bash

cd `dirname $0`
BASE_DIR=`pwd`
cp -rf src build && cd build
autoreconf -ivf
./configure \
    --enable-static \
    --disable-doc \
    --disable-xz \
    --prefix=${BASE_DIR}/inst \
    && make install
cd ${BASE_DIR} && rm -rf ./build/
