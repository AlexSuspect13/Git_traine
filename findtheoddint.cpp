#include <vector>
int findOdd(const std::vector<int>& numbers)
{
  for(int i =0;i<numbers.size();++i)
  {
    if(std::count(numbers.begin(),numbers.end(),numbers[i])%2!=0)
    {
      return numbers[i];
    }
  }
}
