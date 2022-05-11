#include "IAlerter.h"

class EmailAlert : public IAlerter
{
  public:
  
  EmailAlert();
  
  void raiseAlert(bool bValue);
  
  bool emailSent;
};
