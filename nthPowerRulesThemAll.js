function modifiedSum(a, n) {
powNum = a.map((x) => Math.pow(x, n));
reducer = (x, y) => x + y;
  return powNum.reduce(reducer) - a.reduce(reducer);
}
