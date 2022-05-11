#include <vector>
using namespace std;
namespace Statistics 
{
    class stats
    {
        public:
        
        float average;
        float max;
        float min;            
    };
    stats ComputeStatistics(const std::vector<float>& argRawStatisticData);
}
