#!/bin/bash

../LatheCPP/inc.py src/i2cx.cpp include/i2cx.h
../LatheCPP/inc.py src/lcd.cpp include/lcd.h
cd ../MonitorCPP
./inc.sh
