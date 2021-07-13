#include <vector>
std::vector<int> countBy(int x,int n)
{
  std::vector<int> sex(n);
  sex[0] = x;
  for(int i = 0,j = x ; i < sex.size(); ++i, j+=x)
  {
    sex[i]=j;
  }
  return sex;
}
