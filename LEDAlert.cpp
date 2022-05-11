#include "LEDAlert.h"

LEDAlert::LEDAlert()
{
  ledGlows = false; 
}

LEDAlert::raiseAlert()
{
  ledGlows = true;
}
