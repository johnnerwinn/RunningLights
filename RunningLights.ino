// Define the LED pins
#include "Animations.h"
#include "LedArray.h"
#include "SwitchFuncs.h"

int ledPins[] = {18, 5, 17, 16, 4, 0, 2, 15};


LedArray ledArray(ledPins);
int currentAnimation = 0;



void setup() {

  // Set the LED pins as outputs

  Serial.begin(9600);
  ledArray.initialize();
}


void transition() {
  while (true) {
    int currentFrameNumber = transitionAnimation.getCurrentFrameNumber();
    if (currentFrameNumber == 5) {
      transitionAnimation.reset();
      break;
    }

    int* currentFrame = transitionAnimation.getCurrentFrame();
    ledArray.displayFrame(currentFrame);

    delay(transitionAnimation.getCurrentFrameDelay());

    transitionAnimation.nextFrame();
  }
}


void playAnimation(int animationIndex) {
  animations[animationIndex].reset();
  
  while (true) {
    int* currentFrame = animations[animationIndex].getCurrentFrame();
    int reading = readSwitches();

    Serial.println(reading);

    if (reading != currentAnimation) {
      currentAnimation = reading;
      
      break;
    }

    ledArray.displayFrame(currentFrame);

    delay(animations[animationIndex].getCurrentFrameDelay());

    animations[animationIndex].nextFrame();
  }
  

}


void loop() {
  currentAnimation = readSwitches();

  transition();
  playAnimation(currentAnimation);

}

