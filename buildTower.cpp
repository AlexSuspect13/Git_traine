#include <vector>
class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors)
    {
        std::vector<std::string> vec;

        const int length = nFloors * 2 - 1;
        const int middle = nFloors - 1;
        std::string str(length, ' ');

        for (int i = 0; i < nFloors; ++i)
        {
            str[middle - i] = str[middle + i] = '*';
            vec.push_back(str);
        }

        return vec;
    }
};
