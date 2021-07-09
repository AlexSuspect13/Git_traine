var uniqueInOrder = function (iterable) {
  return [].filter.call(iterable, function (a, i) {
    return iterable[i - 1] !== a;
  });
};
console.log(uniqueInOrder("AAAABBBCCDAABBB"));
