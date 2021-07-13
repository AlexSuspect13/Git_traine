#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
long min1 = std::min(numbers[0],numbers[1]);
long min2 = std::max(numbers[0],numbers[1]);

for (int i=2; i<numbers.size(); ++i)
{
if (numbers[i] <= min1)
{
min2 = min1;
min1 = numbers[i];
}
if (numbers[i] > min1 && numbers[i] <= min2)
{
min2 = numbers[i];
}
}
return min1 + min2;
}
