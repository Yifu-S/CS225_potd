#include <vector>
#include "Primes.h"

std::vector<int> *genPrimes(int M) {
    std::vector<int> *v = new std::vector<int>();
    // your code here
    std::vector<bool> nums(M+1, false);
    for (int i = 2; i < M+1; i++)
    {
        if (nums[i] == false)   
        {
            v->push_back(i);
            for (int j = i; j < M+1; j+=i)
            {
                nums[j] = true;
            }
        }
    }
    return v;
}

