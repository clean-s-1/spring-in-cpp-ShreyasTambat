#include "LEDAlert.h"

LEDAlert::LEDAlert():ledGlows(false){}

void LEDAlert::raiseAlert(bool bValue)
{
  ledGlows = bValue;
}
