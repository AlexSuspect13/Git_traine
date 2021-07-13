// https://www.codewars.com/kata/5b077ebdaf15be5c7f000077

const countSheep = function (num) {
  let string = "";
  for (let i = 0; i < num; i++) {
    string += `${i + 1} sheep...`;
  }
  return string;
};
