#!/bin/bash
wget -P .. https://raw.githubusercontent.com/DRSUCCESS/alx-low_level_programming/main/0x18-dynamic_libraries/libgiga4.so
export LD_PRELOAD="$PWD/../libgiga4.so"
