// https://www.codewars.com/kata/5168bb5dfe9a00b126000018
#include <string>
#include <iostream>
#include <cmath>
std::string reverseString (std::string str )
{
  std::reverse(str.begin(),str.end());
  return str;
}
