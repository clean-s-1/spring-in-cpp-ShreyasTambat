#include "IAlerter.h"
#include <vector>

class StatsAlerter
{
  public:
  
  StatsAlerter(float argMaxThreshold, std::vector<IAlerter*>& argAlerters);
  
  void checkAndAlert(const std::vector<float>& argStatisticsValues);
  
  float _MaxThreshold;
  std::vector<IAlerter*> _Alerters;
};
