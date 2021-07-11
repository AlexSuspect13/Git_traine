// https://www.codewars.com/kata/5ce9c1000bab0b001134f5af

const quarterOf = (month) => {
  switch (true) {
    case month >= 1 && month < 4:
      return 1;
    case month >= 4 && month < 7:
      return 2;
    case month >= 7 && month < 10:
      return 3;
    case month >= 10 && month <= 12:
      return 4;
  }
};
