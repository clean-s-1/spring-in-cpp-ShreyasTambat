#include <vector>
#include <math.h>
using namespace std;
namespace Statistics 
{
    class Stats
    {
        public:
        Stats():average(NAN),max(NAN),min(NAN){}
        
        float average;
        float max;
        float min;            
    };
    Stats ComputeStatistics(const std::vector<float>& argRawStatisticData);
}
