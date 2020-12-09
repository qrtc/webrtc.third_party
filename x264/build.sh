#!/usr/bin/env bash

cd `dirname $0`
./configure --disable-avs --disable-swscale --disable-lavf --disable-ffms --disable-gpac --disable-lsmash --disable-asm \
	--disable-opencl --enable-static \
	--prefix=`pwd`/inst \
	&& make install
