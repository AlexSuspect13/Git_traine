#include <vector>
#include <cmath>
bool isprime(int a)
{
  for (int i = 2;i <= sqrt(a);++i)
  {
    if (a % i == 0)
    {
      return false;
    }
  }
  return a <= 1 ? false : true;
}
int minimumNumber (std::vector <int> numbers )
{
  int sum =0;
  for(int i=0;i<numbers.size();++i)
    {
    sum +=numbers[i];
  }
  int result = sum;
  if(isprime(sum))
    {
    return result-sum;
  }
  else
    {
    while(!isprime(result))
      {
      result +=1;
    }
  }
  return result - sum;
}
