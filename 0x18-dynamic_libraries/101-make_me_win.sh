#!/bin/bash
#wget -P /tmp -q "https://github.com/pforciol/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/libmmw.so"
wget -P /tmp -q https://github.com/king-pep/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libmmw.so
export LD_PRELOAD="/tmp/libmmw.so"
