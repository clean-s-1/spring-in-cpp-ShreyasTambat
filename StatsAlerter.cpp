#include "StatsAlerter.h"
#include "IAlerter.h"
#include<numeric>
#include<cmath>

StatsAlerter::StatsAlerter(float argMaxThreshold, std::vector<IAlerter*> argAlerters)
{
  _MaxThreshold = argMaxThreshold;
  _Alerters = argAlerters;
}

StatsAlerter::checkAndAlert(std::vector<float> argStatisticsValues)
{
  double maximumStatisticValue = *max_element(argStatisticsValues.begin(), argStatisticsValues.end());
  
  if(maximumStatisticValue > _MaxThreshold)
  {
    
  }
}
