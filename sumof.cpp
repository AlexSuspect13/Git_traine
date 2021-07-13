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
int solve(std::vector<int> v){
  int sum =0;
  for(int i =0;i<v.size();++i)
  {
    if(isprime(i))
      {
      sum+=v[i];
    }
  }
  return sum;
 
}
