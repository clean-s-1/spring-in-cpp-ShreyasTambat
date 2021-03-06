#include "stats.h"
#include <numeric>
#include <stdio.h>
#include <algorithm>

using namespace std;
using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<float>& argRawStatisticData) 
{
    Stats computedStatisticsData;
    
    if(!argRawStatisticData.empty())
    {
        //Max value computation
        computedStatisticsData.max = *max_element(argRawStatisticData.begin(), argRawStatisticData.end());

        //Min value computation
        computedStatisticsData.min = *min_element(argRawStatisticData.begin(), argRawStatisticData.end());

        //Average value computation
        double sumOfAllElements = accumulate(argRawStatisticData.begin(), argRawStatisticData.end(), 0.0);  

        computedStatisticsData.average = (sumOfAllElements / argRawStatisticData.size());
    }
    
    return computedStatisticsData;  
}
