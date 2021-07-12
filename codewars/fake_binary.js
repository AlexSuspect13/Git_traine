// https://www.codewars.com/kata/57eae65a4321032ce000002d

function fakeBin(x) {
  return x
    .split("")
    .map((el) => {
      return el < 5 ? "0" : "1";
    })
    .join("");
}
