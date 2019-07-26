#include <iostream>
#include <random>
#include <chrono>
#include <vector>

template <class T>
T binarySearch(std::vector<T> vec_array, T target) {
    T middle = vec_array[(vec_array.size() - 1) / 2];
    if (target == middle)
    {
        return middle;
    } else if (target > middle)
    {
        
    }
    
    
}

int main()
{

    // Initialize a RNG for creatiing a random vector;
    std::mt19937_64 gen1(std::chrono::system_clock::now().time_since_epoch().count());

    

    return 0;
}