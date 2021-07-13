#include <vector>

std::vector<int> MonkeyCount(int n) 
{
  std::vector<int> arr(n);
  for(int i = 0; i < n; ++i)
  {
    arr[i]=i+1;
  }
  return arr;
} 
