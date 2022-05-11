#include "IAlerter.h"

class EmailAlert : public IAlerter
{
  public:
  
  EmailAlert();
  
  ~EmailAlert();
  
  void raiseAlert();
  
  bool emailSent;
}
