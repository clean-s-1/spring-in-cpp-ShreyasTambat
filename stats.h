#include <vector>
using namespace std;
namespace Statistics 
{
    class Stats
    {
        public:
        
        double average;
        double max;
        double min;
        
        Stats ComputeStatistics(const std::vector<double>& argRawStatisticData);
    };
}
