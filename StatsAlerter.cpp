#include "StatsAlerter.h"
#include <numeric>
#include <cmath>
#include <algorithm>
using namespace std;

StatsAlerter::StatsAlerter(float argMaxThreshold, std::vector<IAlerter*>& argAlerters):_MaxThreshold(argMaxThreshold), _Alerters(argAlerters){}

void StatsAlerter::checkAndAlert(const std::vector<float>& argStatisticsValues)
{
  bool bSetAlert = false;
  if(!argStatisticsValues.empty())
  {
    auto maximumStatisticValue = std::max_element(argStatisticsValues.begin(), argStatisticsValues.end());

    if(maximumStatisticValue != argStatisticsValues.end())
    {  
      if(*maximumStatisticValue > _MaxThreshold)
      {
        bSetAlert = true;
      }
      for(auto statisticsValuesItr = _Alerters.begin(); statisticsValuesItr  != _Alerters.end(); statisticsValuesItr++)
      {
        IAlerter* tempAlerterObj = *statisticsValuesItr;
        tempAlerterObj->raiseAlert(bSetAlert);
      }
    }
  }
}
