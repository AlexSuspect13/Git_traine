// https://www.codewars.com/kata/53dc54212259ed3d4f00071c
#include <vector>

int sum(std::vector<int> nums) {
    double suma = 0;
    for (auto i : nums)
    {
        suma += i;
    }
    return suma;
}
 