#include <string>
#include <vector>
#include <numeric>

std::string odd_or_even(const std::vector<int> &arr)
{
	return std::accumulate(arr.begin(), arr.end(), 0) %2 == 0 ? "even" : "odd";
}
 