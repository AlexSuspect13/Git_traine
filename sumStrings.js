function sumStr(a,b) {
  return a >= 9007199254740992 - 1 || b >= 9007199254740992 - 1 ? bigInt(a,b) : (a*1 + b*1) + ''
}
