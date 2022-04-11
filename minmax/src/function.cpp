#include "function.h"
std::pair<int,int> min_max( int V[], size_t n )
{
    int max = 0;
    int min = INT_MAX;
    int maxIndex = -1;
    int minIndex = -1;

    for (size_t i = 0; i < n; i++)
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
