#include <vector>
using namespace std;
namespace Statistics 
{
    class stats
    {
        public:
        
        double average;
        double max;
        double min;            
    };
    stats ComputeStatistics(const std::vector<double>& argRawStatisticData);
}
