/**
 * @difficulty 8 kyu
 * @description This file contains an answer for <Square(n) Sum>
 * @link https://www.codewars.com/kata/515e271a311df0350d00000f
 * @author Komarovsky Andrey (askomar)
 */

function squareSum(numbers) {
  let result = 0;
  numbers.forEach((num) => {
    result += num * num;
  });
  return result;
}

console.log(squareSum([-8, -15]));
