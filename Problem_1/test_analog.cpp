///////////////////////////////////////
// Filename : test_analog.cpp
// Author : Sed Centeno
// Date : 11/12/2024
//
// Description :
// Instatiates an AnalogIn object with a value of 0.
// Then it gets its number and ADC value.
//
// Arguments :
// None
//
// Example Invocation :
// ./test_analog
///////////////////////////////////////

#include <iostream>
#include "AnalogIn.h"

using namespace std;

int main(){
  AnalogIn AIN(0);

  cout << "Analog # is: " << AIN.getNumber() << endl;
  cout << "ADC Value is: " << AIN.readAdcSample() << endl;
  return 0;
}
