// https://www.codewars.com/kata/5265326f5fda8eb1160004c8
#include <vector>

void wave_sort(std::vector<int> &v)
{
  sort(v.begin(), v.end());
  size_t len;
  if ((len = v.size()) > 1)
    for (size_t i = 0; i < v.size()-1; i += 2)
      std::swap(v[i], v[i+1]);
}
