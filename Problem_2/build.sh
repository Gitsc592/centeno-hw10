#!/bin/bash

### Filename : build.sh
## Author : Sed Centeno
# Date : 11/12/2024
### Description :
## Builds test_all_App.cpp

config-pin P9.12 gpio
config-pin P8.16 gpio_pu

echo "Building test_all_App.cpp..."
g++ ./test_all_App.cpp ./AnalogIn.cpp ./GPIO.cpp ./derek_LED.cpp -o ./test_all_App -pthread
echo "Finished building."
