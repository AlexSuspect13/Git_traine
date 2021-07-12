#include <iostream>
#include <cmath>

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

unsigned long long numPrimorial (unsigned short int number )
{
  int count = 0;
  long int sum = 1;
  for(int i = 1; i <= 999999999 ; ++i)
    {
      if (count == number)
        {
          break;
        }
      else if (isprime(i))
        {
          sum *= i;
          ++count;
        }
    }
  return sum;
}
