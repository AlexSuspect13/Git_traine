/**
 * @difficulty 8 kyu
 * @description This file contains an answer for <Sum The Strings> codewars task
 * @link https://www.codewars.com/kata/5966e33c4e686b508700002d
 * @author Komarovsky Andrey (askomar)
 */

function sumStr(a, b) {
  return `${(a == "" ? 0 : Number(a)) + (b == "" ? 0 : Number(b))}`;
}
