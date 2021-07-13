// https://www.codewars.com/kata/5265326f5fda8eb1160004c8
#include <vector>
#include <iostream>
std::vector<int> invert(std::vector<int> values)
{
  std::vector<int> myVec;
  for(int i = 0; i != values.size();++i)
  {
    myVec.push_back(-values[i]);
  }
  return myVec;
}
