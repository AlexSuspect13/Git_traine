function digital_root(n) {
  let sum = 0;
  String(n).split('').map(num => {
      sum += Number(num);
  });
  if(sum < 10){
    return sum;
  }
  else{
    return digital_root(sum);
  }
}
