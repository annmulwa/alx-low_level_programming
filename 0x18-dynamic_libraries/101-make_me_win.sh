#!/bin/bash
wget -P .. https://raw.githubusercontent.com/annmulwa/alx-low_level_programming/master/0x18-dynamic_libraries/libbet.so
export LD_PRELOAD="$PWD/../libbet.so"
