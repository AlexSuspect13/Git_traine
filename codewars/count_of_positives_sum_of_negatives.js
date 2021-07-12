// https://www.codewars.com/kata/576bb71bbbcf0951d5000044

function countPositivesSumNegatives(input) {
  let positive = 0;
  let negative = 0;
  if (input === null) return [];
  input.map((element) => {
    element > 0 ? positive++ : (negative += element);
  });
  if (positive === 0 && negative === 0) return [];
  return [positive, negative];
}
