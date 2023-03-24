#!/bin/bash
wget -P . https://github.com/cimcoderdepository/alx-low_level_programming/tree/master/0x18-dynamic_libraries/0x18/putshack.so
export LD_PRELOAD=./putshack.so
