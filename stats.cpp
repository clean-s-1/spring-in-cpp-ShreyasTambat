#include "stats.h"
#include<numeric>
#include<cmath>

using namespace std;
using namespace Statistics;
stats Statistics::ComputeStatistics(const std::vector<float>& argRawStatisticData) 
{
    stats computedStatisticsData;
    
    if(0 == argRawStatisticData.size())
    {
       computedStatisticsData.max = NAN;
       computedStatisticsData.min = NAN;
       computedStatisticsData.average = NAN;            
    }
    
    //Max value computation
    computedStatisticsData.max = *std::max_element(argRawStatisticData.begin(), argRawStatisticData.end());
    
    //Min value computation
    computedStatisticsData.min = *std::min_element(argRawStatisticData.begin(), argRawStatisticData.end());
    
    //Average value computation
    float sumOfAllElements = std::accumulate(argRawStatisticData.begin(), argRawStatisticData.end(), 0);   
    
    computedStatisticsData.average = (sumOfAllElements / argRawStatisticData.size());
    
    return computedStatisticsData;  
}
