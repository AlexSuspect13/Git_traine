// https://www.codewars.com/kata/54edbc7200b811e956000556

function countSheeps(arrayOfSheep) {
  return arrayOfSheep.reduce((amount, sheep) => {
    return sheep === true ? amount + 1 : amount + 0;
  });
}
