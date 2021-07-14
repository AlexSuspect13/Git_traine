function validParentheses(parens){
  const count = 0;
  for (let i in parens) {
    if (parens[i] == '(')
      count++
    if (parens[i] == ')')
      count--
    if (count < 0)
      return false
  }
  return count == 0;
}
