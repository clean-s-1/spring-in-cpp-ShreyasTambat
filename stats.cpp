#include "stats.h"
#include <numeric>
#inlcude <cmath>

ComputeStatistics::ComputeStatistics() {}

stats Statistics::ComputeStatistics(const std::vector<double>& argRawStatisticData) 
{
    stats computedStatisticsData;
    
    if(0 == argRawStatisticData.size())
    {
       computedStatisticsData.max = NAN;
       computedStatisticsData.min = NAN;
       computedStatisticsData.average = NAN;            
    }
    
    //Max value computation
    computedStatisticsData.max = *max_element(argRawStatisticData.begin(), argRawStatisticData.end());
    
    //Min value computation
    computedStatisticsData.min = *min_element(argRawStatisticData.begin(), argRawStatisticData.end());
    
    //Average value computation
    double sumOfAllElements = accumulate(argRawStatisticData.begin(), argRawStatisticData.end() , 0);   
    
    computedStatisticsData.average = (sumOfAllElements / argRawStatisticData.size());
    
    return computedStatisticsData;  
}
