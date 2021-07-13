int stray(std::vector<int> numbers) {
    for(int i =0;i!=numbers.size();++i)
      {
      if(numbers[0]!=numbers[1])
        {
        return numbers[0];
      }
      if(numbers[i]!=numbers[i+1])
        {
        return numbers[i+1];
      }
    }
}
