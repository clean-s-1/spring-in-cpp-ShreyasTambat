#include "IAlerter.h"

class StatsAlerter
{
  public:
  
  StatsAlerter(float, IAlerter*);
  
  float _MaxThreshold;
  IAlerter* _Alerters;
}
