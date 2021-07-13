class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
      using namespace std;
      if (array.empty())
        return array;
      vector<int> onlyOdds;
      for (auto& num : array)
        if (num % 2)
          onlyOdds.push_back(num);
      sort(onlyOdds.begin(), onlyOdds.end());
      for (int i = 0, j = 0; i < array.size(); ++i)
        if (array[i] % 2)
          array[i] = onlyOdds[j++];
      return array;
    }
};
