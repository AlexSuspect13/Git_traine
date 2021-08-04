function spinWords(str){
  const arr = str.split(' ').map((word) => {
    if(word.length > 4)
      return word.split('').reverse().join('')
    return word;
  })
  return arr.join(' ')
}

