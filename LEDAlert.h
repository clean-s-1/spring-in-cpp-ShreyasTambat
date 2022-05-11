#include IAlerter.h

class LEDAlert : public IAlerter
{
  public:
  
  LEDAlert();
  
  ~LEDAlert();
  
  bool ledGlows;
}
