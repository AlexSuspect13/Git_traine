namespace Same {
    bool comp(std::vector<int> a, std::vector<int> b) {
      if (a.size() != b.size()) {
        return false;
      }
      for (int& x : a) {
        x *= x;
      }
      std::sort(a.begin(), a.end());
      std::sort(b.begin(), b.end());
      return a == b;
    }
}
