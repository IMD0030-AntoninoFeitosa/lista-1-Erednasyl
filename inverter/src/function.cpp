#include <iostream>
#include <array>
 
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    std::string temp;
    int iterator;

    for (size_t i = 0; i < (arr.size()/2); i++)
    {
        iterator = arr.size() - i - 1;
        temp = arr[i];
        arr[i] = arr[iterator];
        arr[iterator] = temp;
    }
    
}