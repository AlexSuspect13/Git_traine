#include<vector>
#include<cmath>
#include<vector>

std::vector<unsigned long long> partsSum(const std::vector<unsigned long long>& ls)
{
  std::vector<unsigned long long> ll;
  ll = ls;
  int sum = 0;
  int res = 0;
  int count = 0;
  for (int i = 0; i != ls.size(); ++i)
  {
    sum += ls[i];
  }
  ll[0] = sum;
  for (int j = 0; j != ls.size()-1; ++j)
  {
    res += ls[j];
    ll[j+1] = sum - res;
    ++count;
  }
    ll.emplace_back(0);
    return ll;
}
