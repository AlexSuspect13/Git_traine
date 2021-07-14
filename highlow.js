function highAndLow(numbers) {
  var arr = numbers.split(' ');
  return Math.max.apply(null, arr) + ' ' + Math.min.apply(null, arr);
}
