#!/bin/bash
wget -P https://github.com/Asmaa231/alx-low_level_programming/tree/main/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
