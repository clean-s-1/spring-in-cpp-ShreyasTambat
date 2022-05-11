#include <vector>
using namespace std;
namespace Statistics 
{
    class stats
    {
        public:
        stats():average(NAN),max(NAN),min(NAN){}
        
        float average;
        float max;
        float min;            
    };
    stats ComputeStatistics(const std::vector<float>& argRawStatisticData);
}
