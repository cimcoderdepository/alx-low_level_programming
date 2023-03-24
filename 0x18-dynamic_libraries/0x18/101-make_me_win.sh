#!/bin/bash
wget -P . ./putshack.so
export LD_PRELOAD=./putshack.so
