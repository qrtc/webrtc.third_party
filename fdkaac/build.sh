#!/usr/bin/env bash

cd `dirname $0`
./autogen.sh \
    && CC=../llvm-build/Release+Asserts/bin/clang && CPP=../llvm-build/Release+Asserts/bin/clang++ && ./configure \
    --disable-shared \
    --enable-static \
    --prefix=`pwd`/inst \
    && make install
