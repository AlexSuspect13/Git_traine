function isDivisible(n, x, y) {
  if (((n / x) * 10) % 10 == 0 && ((n / y) * 10) % 10 == 0) {
    return true;
  } else {
    return false;
  }
}
console.log(isDivisible(2, 654, 684));
