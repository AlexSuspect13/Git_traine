// https://www.codewars.com/kata/58cb43f4256836ed95000f97
#include <array>

int findDifference(std::array<int, 3> a, std::array<int, 3> b) {
  int a_a = 1, b_b = 1;
  for(int i = 0; i< a.size();++i)
    {
    a_a *= a[i];
    b_b *= b[i];
  }
  if(a_a > b_b)
    return a_a - b_b;
  else
    return b_b - a_a;
}
