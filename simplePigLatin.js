function pigIt(str){
  const arr = str.split(' ')
  const result = arr.map(x => /[a-zA-Z]+/.test(x) ? x.substr(1, str.length) + x[0] + 'ay' : x)
  return result.join(' ')
}
