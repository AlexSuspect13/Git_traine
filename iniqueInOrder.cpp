// https://www.codewars.com/kata/54e6533c92449cc251001667
#include <string>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <array>
#include <vector>
#include <numeric>
#include <algorithm>
template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable)
{
  std::vector<T> out;
  T c{};
  for(auto& i: iterable)
    {
      if(c != i)
        {
        out.push_back(i);
        c =i;
      }
  }
  return out;
}
std::vector<char> uniqueInOrder(const std::string& iterable){
   std::vector<char> origin;
    std::string copy = iterable;
    for (int i = 0; i < copy.size(); ++i)
    {
        for (int z = i + 1; z < copy.size(); ++z)
        {
            if (copy[i] != copy[z])
              {
              break;
              }
            if (copy[i] == copy[z])
            {

                copy[z] = 0;
            } 
        }
    }
    for (int i = 0; i < copy.size(); ++i)
    {
        if (copy[i] == 0)
        {
            copy.erase(i, 1);
            i--;
        }
    }
    for (auto& i : copy) origin.push_back(i);
    return origin;
}