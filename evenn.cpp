#include <vector>
using namespace std;
vector<int> evenNumbers(vector<int> v, int n) {
  vector<int> result;
  for (int i = v.size() - 1; i >= 0; i--) {
    if (result.size() >= n) break;
    if (v[i] % 2 == 0) result.push_back(v[i]);
  }
  reverse(result.begin(), result.end());
  return result;
}
