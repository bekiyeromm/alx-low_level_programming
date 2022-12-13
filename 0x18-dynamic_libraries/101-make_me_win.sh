#!/bin/bash
wget -p /tmp/https://raw.github.com/bekiyeromm/alx-low_level_programming/tree/master/0x18-dynamic_libraries/file1.so
export LD_PRELOAD=/tmp/file1.so
