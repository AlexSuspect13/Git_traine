std::string tickets(const std::vector<int> v) {
  int twentyfive = 0;
  int fifty = 0;

  for (int i : v) {
    if (i == 25) {
      twentyfive++;
    } else if (i == 50 && twentyfive > 0) {
      twentyfive--;
      fifty++;
    } else if (i == 100 && fifty > 0 && twentyfive > 0) {
      twentyfive--;
      fifty--;
    } else if (i == 100 && twentyfive > 2) {
      twentyfive -= 3;
    } else {
      return "NO";
    }
  }
  return "YES";
}
