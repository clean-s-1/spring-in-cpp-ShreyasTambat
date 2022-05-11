#include "LEDAlert.h"

LEDAlert::LEDAlert()
{
  ledGlows = false; 
}

void LEDAlert::raiseAlert()
{
  ledGlows = true;
}
