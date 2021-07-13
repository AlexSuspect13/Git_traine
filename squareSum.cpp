#include <vector>
#include <cmath>
int square_sum(const std::vector<int>& numbers)
{
  int result=0;
    for(int i=0;i<numbers.size();++i)
      {
          result+=std::pow(numbers[i],2);
      }
  return result;
}
