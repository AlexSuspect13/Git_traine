#include <cmath>
bool isPrime(int num) {
   for(int i =2;i<=sqrt(num);++i)
     {
     if(num%i==0)
       {
       return false;
     }
   }
  return num<=1?false:true;
}
