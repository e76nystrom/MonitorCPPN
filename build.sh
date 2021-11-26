#!/bin/bash

cd Debug
'C:/Program Files (x86)/GnuWin32/bin/make' all
arm-none-eabi-objdump -h -S  MonitorCPPN.elf  > "MonitorCPPN.list"
