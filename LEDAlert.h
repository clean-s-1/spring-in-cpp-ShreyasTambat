#include "IAlerter.h"

class LEDAlert : public IAlerter
{
  public:
  
  LEDAlert();
 
  void raiseAlert(bool bValue);
  
  bool ledGlows;
};
