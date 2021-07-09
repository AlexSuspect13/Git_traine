// https://www.codewars.com/kata/515e271a311df0350d00000f

const reducer = (accumulator, currentValue) => accumulator + Math.pow(currentValue, 2);

function squareSum(numbers) {
    return numbers.reduce(reducer);
  }
