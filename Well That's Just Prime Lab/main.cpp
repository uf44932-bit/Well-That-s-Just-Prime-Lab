/*
 We would like to calculate a list of prime factors for a number.
 E.g. 100 = 2 * 2 * 5 * 5

 Write a function that accepts an integer argument, and returns a vector containing all of that number's prime factors.
 If the number is <= 1, return an empty list.

 Remember that 1 is not a prime number.

 This lab must be solved using recursion.
 Your function should be tested with a variety of assert-based unit tests.
 */

#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

vector<int> primeFactors(int number)
{
    vector<int> factors;
    
    if(number <= 1)
    {
        return factors;
    }
    
    for (int i = 2; i <= number; i++)
    {
        if (number % i == 0)
        {
            factors.push_back(i);
            
            vector<int> remaining = primeFactors(number / i);
            
        }
    }
}


int main() {
    
    
    
    
    
    
    
    return EXIT_SUCCESS;
}
