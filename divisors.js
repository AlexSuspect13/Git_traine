function getDivisorsCnt(n) {
  let count =1;
  for (let i = 0; i <= n / 2; ++i)
    {
    if (n % i == 0){
       ++count;
    }
  }
  return count;
}
