// https://www.codewars.com/kata/55d24f55d7dd296eb9000030
// https://ru.wikipedia.org/wiki/%D0%90%D1%80%D0%B8%D1%84%D0%BC%D0%B5%D1%82%D0%B8%D1%87%D0%B5%D1%81%D0%BA%D0%B0%D1%8F_%D0%BF%D1%80%D0%BE%D0%B3%D1%80%D0%B5%D1%81%D1%81%D0%B8%D1%8F

const summation = function (num) {
  const a1 = 1; // first number in progression
  const d = 1; //progression difference
  return ((2 * a1 + d * (num - 1)) / 2) * num;
};
