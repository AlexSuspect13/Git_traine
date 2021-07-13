#include <vector>
#include <iostream>
using namespace std; 

int findSmallest(vector <int> list)
{
   int min=list[0];
  for(int i=0; i < list.size(); ++i)
    {
    if(list[i]<min)
      {
      min=list[i];    
    }
  }
  return min;
}
