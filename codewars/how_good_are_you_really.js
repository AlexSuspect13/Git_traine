// https://www.codewars.com/kata/5601409514fc93442500010b

function betterThanAverage(classPoints, yourPoints) {
  const sum =
    classPoints.reduce((result, el) => {
      return result + el;
    }, 0) + yourPoints;
  const avg = sum / (classPoints.length + 1);

  return avg <= yourPoints ? true : false;
}
