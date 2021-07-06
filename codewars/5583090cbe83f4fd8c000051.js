/**
 * @difficulty 8 kyu
 * @description This file contains an answer for <Convert number to reversed array of digits
> codewars task
 * @link https://www.codewars.com/kata/5583090cbe83f4fd8c000051
 * @author Komarovsky Andrey (askomar)
 *
 * Task short description:
 *  1. Given a random non-negative number
 *  2. Return the digits of number
 *  3. Digits must be in reverse order
 */

function digitize(n) {
  return n
    .toString()
    .split("")
    .reverse()
    .map((n) => {
      return Number(n);
    });
}