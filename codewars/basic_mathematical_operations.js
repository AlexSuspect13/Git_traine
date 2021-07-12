// https://www.codewars.com/kata/57356c55867b9b7a60000bd7

function basicOp(operation, value1, value2) {
  let result;

  switch (operation) {
    case "+":
      result = value1 + value2;
      break;
    case "-":
      result = value1 - value2;
      break;
    case "*":
      result = value1 * value2;
      break;
    case "/":
      result = value1 / value2;
      break;
    default:
      result = 0;
  }
  return result;
}
