#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s) {
    std::string ss = s;
    std::vector<std::string> res;
    while (ss.length() > 1) {
        res.push_back(ss.substr(0, 2));
        ss.erase(0, 2);
    }
    if (ss.length() == 1) {
        res.push_back(ss + "_");
    }
    return res;
}
