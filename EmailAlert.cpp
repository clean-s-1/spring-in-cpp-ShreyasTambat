#include "EmailAlert.h"

EmailAlert::EmailAlert():emailSent(false){}

void EmailAlert::raiseAlert(bool bValue)
{
  emailSent = bValue;
}
