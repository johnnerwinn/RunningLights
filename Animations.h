class Animation {

  private:

    int (*animationArray)[9]; // Pointer to array of animation frames

    int currentFrameNumber; // Index of current frame

    int* currentFrame; // Pointer to current frame

    int numFrames;



  public:

    // Constructor that takes the animation array as input

    Animation(int (*animationArray)[9], int numFrames) {

      this->animationArray = animationArray;

      this->currentFrameNumber = 0;

      this->currentFrame = animationArray[0];

      this->numFrames = numFrames;

    }



    // Method to get the current frame

    int* getCurrentFrame() {

      return currentFrame;

    }



    // Method to advance to the next frame

    void nextFrame() {

      currentFrameNumber++;

      if (currentFrameNumber >= numFrames) {

        currentFrameNumber = 0;

      }

      

      currentFrame = animationArray[currentFrameNumber];

    }

    void reset() {
      currentFrameNumber = 0;
    }

    int getCurrentFrameNumber() {
      return currentFrameNumber;
    }

    int getNumFrames() {
      return numFrames;
    }



    // Method to get the delay for the current frame

    int getCurrentFrameDelay() {

      

      return currentFrame[8];

    }

};
int animationZeroArray[][9] = {

{0,0,0,0,0,0,0,0, 300},
{0,0,0,0,0,0,0,0, 300},
{0,0,0,0,0,0,0,0, 300},
{0,0,0,0,0,0,0,0, 300},
{0,0,0,0,0,0,0,0, 300},
{0,0,0,0,0,0,0,0, 300},
{0,0,0,0,0,0,0,0, 300},
{0,0,0,0,0,0,0,0, 300}

};

int animationOneArray[][9] = {

{1,0,0,0,0,0,0,0, 300},
{0,1,0,0,0,0,0,0, 300},
{0,0,1,0,0,0,0,0, 300},
{0,0,0,1,0,0,0,0, 300},
{0,0,0,0,1,0,0,0, 300},
{0,0,0,0,0,1,0,0, 300},
{0,0,0,0,0,0,1,0, 300},
{0,0,0,0,0,0,0,1, 300}

};

int animationTwoArray[][9] = {

{1,0,0,0,0,0,0,0, 300},
{0,0,1,0,0,0,0,0, 300},
{0,0,0,0,1,0,0,0, 300},
{0,0,0,0,0,0,1,0, 300},
{0,1,0,0,0,0,0,0, 300},
{0,0,0,1,0,0,0,0, 300},
{0,0,0,0,0,1,0,0, 300},
{0,0,0,0,0,0,0,1, 300}

};

int animationThreeArray[][9] = {

{1,1,0,0,0,0,0,0, 300},
{0,1,1,0,0,0,0,0, 300},
{0,0,1,1,0,0,0,0, 300},
{0,0,0,1,1,0,0,0, 300},
{0,0,0,0,1,1,0,0, 300},
{0,0,0,0,0,1,1,0, 300},
{0,0,0,0,0,0,1,1, 300},
{1,0,0,0,0,0,0,1, 300}

};

int animationFourArray[][9] = {

{1,0,1,0,1,0,1,0, 300},
{0,1,0,1,0,1,0,1, 300}

};

int animationFiveArray[][9] = {

{0,0,0,0,0,0,1,1, 300},
{0,0,0,0,0,1,1,0, 300},
{0,0,0,0,1,1,0,0, 300},
{0,0,0,1,1,0,0,0, 300},
{0,0,1,1,0,0,0,0, 300},
{0,1,1,0,0,0,0,0, 300},
{1,1,0,0,0,0,0,0, 300},
{1,0,0,0,0,0,0,1, 300}

};

int animationSixArray[][9] = {

{0,0,0,0,0,0,0,1, 300},
{0,0,0,0,0,1,0,0, 300},
{0,0,0,1,0,0,0,0, 300},
{0,1,0,0,0,0,0,0, 300},
{0,0,0,0,0,0,1,0, 300},
{0,0,0,0,1,0,0,0, 300},
{0,0,1,0,0,0,0,0, 300},
{1,0,0,0,0,0,0,0, 300}

};

int animationSevenArray[][9] = {

{0,0,0,0,0,0,0,1, 300},
{0,0,0,0,0,0,1,0, 300},
{0,0,0,0,0,1,0,0, 300},
{0,0,0,0,1,0,0,0, 300},
{0,0,0,1,0,0,0,0, 300},
{0,0,1,0,0,0,0,0, 300},
{0,1,0,0,0,0,0,0, 300},
{1,0,0,0,0,0,0,0, 300}

};

int transitionAnimationArray[][9] = {
  {0,0,0,0,0,0,0,0, 500},
  {1,1,1,1,1,1,1,1, 200},
  {0,0,0,0,0,0,0,0, 200},
  {1,1,1,1,1,1,1,1, 200},
  {0,0,0,0,0,0,0,0, 200},
  {1,1,1,1,1,1,1,1, 500},
};

Animation animationZero(animationZeroArray, 8);
Animation animationOne(animationOneArray, 8);
Animation animationTwo(animationTwoArray, 8);
Animation animationThree(animationThreeArray, 8);
Animation animationFour(animationFourArray, 2);
Animation animationFive(animationFiveArray, 8);
Animation animationSix(animationSixArray, 8);
Animation animationSeven(animationSevenArray, 8);

Animation transitionAnimation(transitionAnimationArray, 6);

Animation animations[] = {animationZero, animationOne, animationTwo, animationThree, animationFour, animationFive, animationSix, animationSeven};