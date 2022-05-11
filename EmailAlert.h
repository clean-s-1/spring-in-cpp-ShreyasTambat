#include "IAlerter.h"

class EmailAlert : public IIAlerter
{
  public:
  
  EmailAlert();
  
  ~EmailAlert();
  
  bool emailSent;
}
