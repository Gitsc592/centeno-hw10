#!/bin/bash

### Filename : build.sh
## Author : Sed Centeno
# Date : 11/12/2024
### Description :
## Builds test_analog.cpp

echo "Building test_analog.cpp..."
g++ ./test_analog.cpp ./AnalogIn.cpp -o ./test_analog
echo "Finished Building."
