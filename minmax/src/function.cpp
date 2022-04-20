#include "function.h"
std::pair<int,int> min_max( int V[], std::size_t n )
{
    int max = 0;
    int min = __INT_MAX__;
    int maxIndex = -1;
    int minIndex = -1;

    for (std::size_t i = 0; i < n; i++)
    {
        if (V[i] >= max){
            max = V[i];
            maxIndex = i;
        }
        if (V[i] < min)
        {
            min = V[i];
            minIndex = i;
        }
    }

    return {minIndex, maxIndex};
}