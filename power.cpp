#include <vector>
#include <cmath>
#include <iostream>
int index(const std::vector<int> &vector, int n) {

 
  {
    for(int i = 0;i!=vector.size();++i)
      {
        if(i==n)
          {
          return std::pow(vector[i],n);
         }
      
   } 
    return -1;
  }
}
