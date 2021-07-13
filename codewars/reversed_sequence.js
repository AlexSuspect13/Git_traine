// https://www.codewars.com/kata/5a00e05cc374cb34d100000d

const reverseSeq = (n) => {
  return [...Array(n).keys()].map((i) => i + 1).reverse();
};
