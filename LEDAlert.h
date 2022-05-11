#include "IAlerter.h"

class LEDAlert : public IAlerter
{
  public:
  
  LEDAlert();
  
  ~LEDAlert();
  
  void raiseAlert();
  
  bool ledGlows;
};
