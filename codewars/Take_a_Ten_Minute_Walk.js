function isValidWalk(walk) {
  function count(val) {
    return walk.filter(function (a) {
      return a == val;
    }).length;
  }
  return (
    walk.length == 10 && count("n") == count("s") && count("w") == count("e")
  );
}
console.log(isValidWalk(["n", "s", "n", "s", "n", "s", "n", "s", "n", "s"]));
