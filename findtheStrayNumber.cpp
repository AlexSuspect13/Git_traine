int stray(std::vector<int> numbers) {
    if (numbers[0] != numbers[1]&&numbers[2]) return numbers[0]; else for (int i = 0; i<numbers.size(); i++) {
    if (numbers[0] != numbers[i]) return numbers[i];
    }
};
