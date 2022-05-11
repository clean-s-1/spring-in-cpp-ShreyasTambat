#include "StatsAlerter.h"
#include "IAlerter.h"
#include<numeric>
#include<cmath>
#include <algorithm>
using namespace std;

StatsAlerter::StatsAlerter(float argMaxThreshold, std::vector<IAlerter*> argAlerters)
{
  _MaxThreshold = argMaxThreshold;
  _Alerters = argAlerters;
}

void StatsAlerter::checkAndAlert(std::vector<float> argStatisticsValues)
{
  float maximumStatisticValue = *std::max_element(argStatisticsValues.begin(), argStatisticsValues.end());
  
  if(maximumStatisticValue > _MaxThreshold)
  {
     for(auto indOfStatisticsValues = _Alerters.begin(); indOfStatisticsValues  != _Alerters.end(); indOfStatisticsValues++)
     {
       indOfStatisticsValues->raiseAlert();
      // IAlerter* l_Alerters;
      // l_Alerters = static_cast<IAlerter*>(*indOfStatisticsValues);
      // l_Alerters->raiseAlert();
     }
  }
}
