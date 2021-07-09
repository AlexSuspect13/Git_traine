/**
 * @difficulty 8 kyu
 * @description This file contains an answer for <What's the real floor?>

> codewars task
 * @link https://www.codewars.com/kata/574b3b1599d8f897470018f6
 * @author Komarovsky Andrey (askomar)
 *
 * Task short description:
 *  Write a fucntion that given a floor in the american system returns the 
 * floor in the european system
 */
function getRealFloor(n) {
  return n >= 1 && n >= 13 ? n - 2 : n >= 1 ? n - 1 : n == 0 ? 0 : n;
}

