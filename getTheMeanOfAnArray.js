function getAverage(marks){
  let avg = 0
  let sum = 0
  for(let i = 0; i < marks.length; i++){
    sum += marks[i]
    avg = sum / marks.length
  }
  return Math.floor(avg)
}
