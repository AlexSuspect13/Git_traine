#include <cmath>
bool zxc(int x)
  {
  for(int i = 2; i<= std::sqrt(x); ++i)
    {
    if(x % i == 0)
      {
      return false;
    }
  }
  return (x <= 1) ? false : true;
}
unsigned long long numPrimorial (unsigned short int number )
{
 int count=0;
  long int f = 1; 
  for(int i = 1; i <= 999999999; ++i)
  {
    if (count == number)
      {
      break;
    }
    else if (zxc(i))
      {
      f*= i;
      ++count;
    }
  }
  return f;
}
