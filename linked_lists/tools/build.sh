#!/bin/sh

echo '[linked_lists] Build process...'

mkdir -p build
/usr/bin/clang -g ./code/main.c -std=c99 -o ./build/program

echo '[linked_lists] Build complete'
