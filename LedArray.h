#ifndef LedArray_h
#define LedArray_h

#include "Arduino.h"

class LedArray {
  private:
    int* outputPins;

  public:
    LedArray(int*outputPins) {
      this-> outputPins  = outputPins;
    }

    void displayFrame(int* frame) {
      for (int i = 0; i < 8; i++) {
        digitalWrite(outputPins[i], frame[i]);
      }
    }

    void turnOff() {
      for (int i = 0; i < 8; i++) {
        digitalWrite(outputPins[i], 0);
      }
    }

    void initialize() {
      for (int i = 0; i < 8; i++) {
        pinMode(outputPins[i], OUTPUT);
      }
    }

  
};

#endif
