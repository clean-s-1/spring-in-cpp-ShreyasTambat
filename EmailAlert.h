#include "IAlerter.h"

class EmailAlert : public IIAlerter
{
  public:
  
  EmailAlert();
  
  ~EmailAlert();\
  
  void raiseAlert();
  
  bool emailSent;
}
