#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
  int count = 0;
  int sum=0;
   for(int i = 0; i<input.size(); ++i)
     {
     if(input[i]>0)
       {
       ++count;
     }
     if(input[i]<0)
       {
        sum+=input[i];
     }
   }
  std::vector<int> v{count, sum};
  if(input.empty())
    {
    return input;
  }
  return v;
}
