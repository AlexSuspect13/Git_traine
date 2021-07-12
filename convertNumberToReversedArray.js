function digitize(n) {
  n=n.toString()
  return n.split("").map(Number).reverse()
}
