#include "EmailAlert.h"

EmailAlert::EmailAlert()
{
  emailSent = false;
}

void EmailAlert::raiseAlert()
{
  emailSent = true;
}
