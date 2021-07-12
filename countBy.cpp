// https://www.codewars.com/kata/5513795bd3fafb56c200049e
#include <vector>
std::vector<int> countBy(int x,int n){
  std::vector<int> Funny(n);
  Funny[0] = x;
  for (int i = 0, j = x; i < Funny.size(); ++i, j+=x)
    {
        Funny[i]=j;
    }
  return Funny;
}
