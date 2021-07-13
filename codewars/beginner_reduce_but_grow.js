// https://www.codewars.com/kata/57f780909f7e8e3183000078

function grow(x) {
  return x.reduce((multiply, el) => {
    return multiply * el;
  });
}
