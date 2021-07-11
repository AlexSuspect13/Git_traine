// https://www.codewars.com/kata/5513795bd3fafb56c200049e

function countBy(x, n) {
  let z = [];
  z.push(x);
  for (let i = 0; i < n - 1; i++) {
    z.push(z[z.length - 1] + x);
  }
  return z;
}
