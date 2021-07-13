#include <vector>
std::vector<int> arr(int n=0) {
  std::vector<int>array(n);
 for(int i =0;i<array.size();++i)
   {
    array[i]=i;
 }
  return array;
}
