#include "StatsAlerter.h"
#include<numeric>
#include<cmath>
#include <algorithm>
using namespace std;

StatsAlerter::StatsAlerter(float argMaxThreshold, std::vector<IAlerter>& argAlerters)
{
  _MaxThreshold = argMaxThreshold;
  _Alerters = argAlerters;
}

void StatsAlerter::checkAndAlert(std::vector<float> argStatisticsValues)
{
  auto maximumStatisticValue = std::max_element(argStatisticsValues.begin(), argStatisticsValues.end());
  
  if(maximumStatisticValue != argStatisticsValues.end())
  {  
    if(*maximumStatisticValue > _MaxThreshold)
    {
       for(auto statisticsValuesItr = _Alerters.begin(); statisticsValuesItr  != _Alerters.end(); statisticsValuesItr++)
       {
         statisticsValuesItr->raiseAlert();
        // IAlerter* l_Alerters;
        // l_Alerters = static_cast<IAlerter*>(*indOfStatisticsValues);
        // l_Alerters->raiseAlert();
       }
    }
  }
}
