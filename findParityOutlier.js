function findOutlier(integers){
  const even = integers.filter(a=>a%2==0);
  const odd = integers.filter(a=>a%2!=0);
  return even.length == 1 ? Number(even) : Number(odd);
}
