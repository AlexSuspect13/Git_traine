#include<vector>
#include <cmath>
std::vector<unsigned long long> partsSum(const std::vector<unsigned long long>& ls)
{
  std::vector<unsigned long long> ll;
  ll=ls;
int sum = 0;
int res = 0;
for (int i = 0; i != ls.size(); ++i)
{
sum += ls[i];
}
  ll[0]=sum;
for (int i = 0; i != ls.size()-1; ++i)
{
res += ls[i];
ll[i+1]=sum-res;
}
ll.emplace_back(0);
  return ll;
}
