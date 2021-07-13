long sumTwoSmallestNumbers(std::vector<int> numbers)
{  
    std::vector<long> s(numbers.size());
    std::copy_if(numbers.begin(), numbers.end(), s.begin(), [](int i){return (i>=0);});
    std::sort(s.begin(), s.end());
    return (s[0] + s[1]);
}
