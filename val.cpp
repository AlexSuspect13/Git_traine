#include <vector>
#include <iostream>
#include <cmath>
std::vector<int> invert(std::vector<int> values)
{
    for(int i = 0;i!=values.size();++i)
      {
        values[i]=-1*values[i];     
        std::cout<<values[i]<<" ";
      
    }
  return values;
}
