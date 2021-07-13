function getAverage(marks){
  const sum = 0;
  for (const i in marks){
    sum += marks[i];
  }
  
  return parseInt(sum / marks.length);
}