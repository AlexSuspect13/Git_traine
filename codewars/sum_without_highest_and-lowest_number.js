// https://www.codewars.com/kata/576b93db1129fcf2200001e6

function sumArray(array) {
  if (array == null || array.length <= 1) return 0;
  return (
    array.reduce((sum, el) => {
      return sum + el;
    }, 0) -
    Math.min(...array) -
    Math.max(...array)
  );
}
