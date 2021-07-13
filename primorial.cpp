#include <cmath>
#include <iostream>
bool isprime(int a)
  {
  for(int i = 2;i<=std::sqrt(a);++i)
    {
    if(a%i==0)
      {
      return false;
    }
  }
  return a<=1?false:true;
}
unsigned long long numPrimorial (unsigned short int number )
  {
  int value = 0;
  long int sum = 1;
  for(int i = 1;i<999999999;++i)
  {
    if(value==number)
           {
             break;
           }
         else if(isprime(i))
           {
              sum*=i;
              ++value;
           }
     }
    return sum;
      
}
