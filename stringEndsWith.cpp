bool solution(std::string const &str, std::string const &ending) {
    return (std::string(str.end() - ending.size(), str.end()) == ending);
}
