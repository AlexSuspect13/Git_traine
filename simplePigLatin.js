function pigIt(str){
  let arr = str.split(' ');
  let zxc = arr.map(x => /[a-zA-Z]+/.test(x) ? x.substr(1, str.length) + x[0] + 'ay' : x);
  return zxc.join(' ');
}
