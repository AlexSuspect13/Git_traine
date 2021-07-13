#include <iostream>
#include <cmath>
#include <vector>
bool isprime(int a)
{
    for (int i = 2; i <= std::sqrt(a); ++i)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return (a <= 1) ? false : true;
}

int minimumNumber(std::vector <int> numbers)
{
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i)
    {
        sum += numbers[i];
    }
    int res = sum;
    if (isprime(sum))
    {
        return res - sum;
    }
    else
    {
        while (!isprime(res))
        {
            res += 1;
        }
    }
    return res - sum;
}
