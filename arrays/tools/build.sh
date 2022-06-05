#!/bin/sh

echo '[arrays] Build process...'

mkdir -p build
/usr/bin/clang -g ./code/main.c -std=c99 -o ./build/program

echo '[arrays] Build complete'
