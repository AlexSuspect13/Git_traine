function correctness(b,e) {
  let sum=0;
  for (let i=0; i<b.length; ++i)
    if (b[i]==e[i]){
      sum++;
    } 
    else if (b[i]=='?' || e[i]=='?'){
      sum+=0.5;
    }
  return sum;
}
