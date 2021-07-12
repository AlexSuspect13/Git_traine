// https://www.codewars.com/kata/57a2013acf1fa5bfc4000921

function find_average(array) {
  if (array.length === 0) return 0;
  return (
    array.reduce((sum, el) => {
      return sum + el;
    }) / array.length
  );
  return 0;
}
