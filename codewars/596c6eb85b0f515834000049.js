/**
 * @difficulty 8 kyu
 * @description This file contains an answer for <FIXME: Replace all dots
> codewars task
 * @link https://www.codewars.com/kata/596c6eb85b0f515834000049
 * @author Komarovsky Andrey (askomar)
 *
 * Task short description:
 *  1. Fix bug
 */
/*
It will be more correct to use g regex key,
but it is my own solution

*/
var replaceDots = function (str) {
  let strCopy = str;
  while (strCopy.includes(".")) {
    strCopy = strCopy.replace(/\./, "-");
  }
  return strCopy;
};