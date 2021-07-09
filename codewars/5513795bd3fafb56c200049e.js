/**
 * @difficulty 8 kyu
 * @description This file contains an answer for <Count by X> codewars task
 * @link https://www.codewars.com/kata/5513795bd3fafb56c200049e
 * @author Komarovsky Andrey (askomar)
 *
 * Task short description:
 *  1. Create a function that will return an array of the first (n)
 * multiples of (x)
 */

function countBy(x, n) {
  let z = [];
  z.push(x);
  for (let i = 0; i < n - 1; i++) {
    z.push(z[z.length - 1] + x);
  }
  return z;
}