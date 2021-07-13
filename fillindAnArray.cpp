#include <vector>
#include <iostream>
#include <cmath>
std::vector<int> arr(int n=0) {
  std::vector <int> arr(n);
  for(int i=0; i!=arr.size();++i)
    {
    arr[i]=i;
  }
  return arr;
}
