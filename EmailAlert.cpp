#include "EmailAlert.h"

EmailAlert::EmailAlert()
{
  emailSent = false;
}

EmailAlert::raiseAlert()
{
  emailSent = true;
}
