#include <vector>
#include <cmath>
int index(const std::vector<int> &vector, int n) {
  for(int i=0; i<vector.size(); ++i)
    {
        if(i==n)
          {
          return std::pow(vector[i],n);
        }
    if(n>=vector.size())
    return -1;
  }
  return 0;
}
