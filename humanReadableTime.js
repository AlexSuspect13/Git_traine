function humanReadable(seconds){
  let hh = seconds / 3600;
  let mm = (seconds / 60) % 60;
  let ss = seconds % 60;
  if(seconds >= 0 && seconds <= 359999){
      return time(hh) +':' + time(mm)+':'+time(ss);
  }
}
function time(digit){
  let num = Number.parseInt(digit)
  return num > 9 ? num : '0' + num;
}
