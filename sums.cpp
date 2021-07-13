#include <cmath>
#include <iostream>
#include<vector>
std::vector<unsigned long long> partsSum(const std::vector<unsigned long long>& ls)
{
  std::vector<unsigned long long>lss;
  lss=ls;
    int sum = 0;
    int res = 0;
    for (int i = 0; i != ls.size(); ++i)
    {
        sum += ls[i];
    }
   lss[0]=sum;
    for (int i = 0; i != ls.size()-1; ++i)
    {
        res += ls[i];
        lss[i+1]=sum-res;
    }
  lss.emplace_back(0);
  return lss;
}
