// https://www.codewars.com/kata/57eae20f5500ad98e50002c5

function noSpace(x) {
  return x
    .split("")
    .reduce((res, symbol) => {
      return symbol === " " ? res : res + symbol;
    })
    .trim();
}
