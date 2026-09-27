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
            
            factors.insert(factors.end(), remaining.begin(), remaining.end());
            return factors;
        }
    }
    
    return factors;

}


int main() {
    
    assert(primeFactors(1).empty());
    assert(primeFactors(0).empty());
    
    vector<int> excepted2 = {2};
    assert(primeFactors(2) == excepted2);
    
    vector<int> excepted10 = {2,5};
    assert(primeFactors(10) == excepted10);
    
    vector<int> excepted12 = {2,2,3};
    assert(primeFactors(12) == excepted12);
    
    vector<int> excepted100 = {2,2,5,5};
    assert(primeFactors(100) == excepted100);
    
    vector<int> excepted25 = {5,5};
    assert(primeFactors(25) == excepted25);
    
    vector<int> excepted30 = {2,3,5};
    assert(primeFactors(30) == excepted30);
    
    cout << "all tests passed!" << endl;
    cout << "\n\n";

    

    
    return EXIT_SUCCESS;
}
 
