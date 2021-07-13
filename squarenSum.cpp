#include <vector>
#include <cmath>
int square_sum(const std::vector<int>& numbers)
{
  int sum = 0;
  for(int i = 0; i != numbers.size(); ++i)
    {
    sum += std::pow(numbers[i],2);
    }
    return sum;
}
