#!/bin/bash
wget -P . https://github.com/sidneyriffic/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/putshack.so
export LD_PRELOAD=./putshack.so
