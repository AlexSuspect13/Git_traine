// https://www.codewars.com/kata/5ae62fcf252e66d44d00008e

function expressionMatter(a, b, c) {
  let larget = a * (b + c);
  const r = a * (b + c);
  const d = a * b * c;
  const g = a + b * c;
  const f = (a + b) * c;
  const h = a + b + c;
  const s = a * b + c;
  const k = a * c + b;
  if (r > larget) larget = r;
  if (d > larget) larget = d;
  if (g > larget) larget = g;
  if (f > larget) larget = f;
  if (h > larget) larget = h;
  if (s > larget) larget = s;
  if (k > larget) larget = k;

  return larget;
}
