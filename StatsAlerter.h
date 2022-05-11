#include "IAlerter.h"

class StatsAlerter
{
  public:
  
  StatsAlerter(float argMaxThreshold, std::vector<IAlerter*> argAlerters);
  
  float _MaxThreshold;
  std::vector<IAlerter*> _Alerters;
};
