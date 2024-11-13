//////////////////////////////////////////////////
// Filename : test_all_App.cpp
// Author : Sed Centeno
// Date : 11/12/2024
//
// Description :
// Excercises Molloy's LED & GPIO classes as well as my AnalogIn class
// Manipulate the user LEDs and read the temperature sensor and pushbutton.
//
// Arguments :
// None
//
// Example Invocation :
// sudo ./test_all_App (REQUIRES SUDO DUE TO LED FLASH FUNCTION)
/////////////////////////////////////////////////
#include <iostream>
#include "AnalogIn.h"
#include "GPIO.h"
#include "derek_LED.h"

using namespace exploringBB;

int main(){
  // Problem 2.1a
  LED myLED[3] = {LED(1), LED(2), LED(3)};
  myLED[0].turnOn();
  myLED[2].turnOn();

  // Problem 2.1b
  myLED[1].flash("50");

  // Problem 2.1c
  AnalogIn myAnalog(0);
  cout << "The ADC value of the temperature sensor is: ";
  cout << myAnalog.readAdcSample() << endl;

  // Problem 2.1d
  GPIO Btn(46), Output(60);
  Btn.setDirection(INPUT);

  cout << "GPIO P8.16 value is: " << Btn.getValue() << endl;
 
  // Problem 2.1e
  Output.setDirection(OUTPUT);
  if (Btn.getValue() == LOW){
    Output.setValue(HIGH);
  }else{
    Output.setValue(LOW);
  }

  return 0;
}
