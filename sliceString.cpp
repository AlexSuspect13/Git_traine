// https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0
#include <string> 
#include <iostream>
#include <vector>
std::string sliceString (std::string str )
{
  for(int i =0;i < str.length();++i)
  {
     str.erase(0, 1);
     str.pop_back();
  }
  return str;
}
