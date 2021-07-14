function humanReadable(seconds){
  const hh = Math.floor(seconds / 3600)
  const mm = Math.floor((seconds / 60) % 60)
  const ss = Math.floor(seconds % 60)
  if(seconds >= 0 && seconds <= 359999){
      return (`${time(hh)}:${time(mm)}:${time(ss)}`)
  }
}
function time(digit){
  const num = +(digit)
  return num > 9 ? num : (`0${num}`)
}

