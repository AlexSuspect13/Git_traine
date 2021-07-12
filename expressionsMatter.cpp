// https://www.codewars.com/kata/5ae62fcf252e66d44d00008e
#include <iostream>
#include <cmath>
unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
  int sum1 = a * (b + c);
  int sum2 = a * b * c;
  int sum3 = a + b * c;
  int sum4 = (a + b)*c;
  int sum5 = a + b + c;
  return std::max(sum5,std::max(sum4,std::max(sum3,std::max(sum1,sum2))));
}
