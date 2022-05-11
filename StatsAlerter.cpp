#include "StatsAlerter.h"
#include "IAlerter.h"
#include<numeric>
#include<cmath>

StatsAlerter::StatsAlerter(float argMaxThreshold, std::vector<IAlerter*> argAlerters)
{
  _MaxThreshold = argMaxThreshold;
  _Alerters = argAlerters;
}

void StatsAlerter::checkAndAlert(std::vector<float> argStatisticsValues)
{
  double maximumStatisticValue = *std::max_element(argStatisticsValues.begin(), argStatisticsValues.end());
  
  if(maximumStatisticValue > _MaxThreshold)
  {
     for(auto indOfStatisticsValues = argStatisticsValues.begin(); indOfStatisticsValues  != end(); indOfStatisticsValues++)
     {
       IAlerter* l_Alerters;
       l_Alerters = static_cast<IAlerter*>(*indOfStatisticsValues);
       l_Alerters->raiseAlerts();
     }
  }
}
