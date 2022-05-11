#include "IAlerter.h"

class LEDAlert : public IAlerter
{
  public:
  
  LEDAlert():ledGlows(false){}
  
  //~LEDAlert();
  
  void raiseAlert();
  
  bool ledGlows;
};
