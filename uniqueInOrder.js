let uniqueInOrder=function(iterable){
  const result = [];
  for(let i in iterable){
    if(iterable[i] !== iterable[i + 1])
      result.push(iterable[i])
  }
  return result;
}
