function createPhoneNumber(numbers){
  let template = "(nnn) nnn-nnnn"
  for(let i = 0; i < numbers.length; ++i){
    template = template.replace("n", numbers[i])
  }
  return template
}