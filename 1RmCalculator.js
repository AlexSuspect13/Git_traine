function calculate1RM(w, r){
  let a = w * (1 + (r / 30));
  let b = (100 * w) / (101.3 - (2.67123 * r));
  let c = w * (Math.pow(r, 0.10));
  if(r === 1){
    return w;
  }
  else if(r === 0){
    return 0;
  }
  else{
    return Math.round(Math.max(a, b, c));
  }
}
