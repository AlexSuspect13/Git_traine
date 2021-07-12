// https://www.codewars.com/kata/5a2be17aee1aaefe2a000151

function arrayPlusArray(arr1, arr2) {
  return arr1.reduce((sum, element, i) => {
    return sum + element + arr2[i];
  }, 0);
}
