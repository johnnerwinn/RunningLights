#include "Arduino.h"

int switchPins[] = {27, 14, 12};

int binaryToDecimal(String binaryString) {
  // Convert binary string to decimal integer using strtol()
  int decimal = strtol(binaryString.c_str(), NULL, 2);
  
  return decimal;
}

int readSwitches() {
  // Read the state of each switch
  int switch1State = digitalRead(switchPins[0]);
  int switch2State = digitalRead(switchPins[1]);
  int switch3State = digitalRead(switchPins[2]);

  // Combine the switch states into a binary string
  String binaryString = String(switch1State) + String(switch2State) + String(switch3State);
  int reading = binaryToDecimal(binaryString);

  return reading;
}