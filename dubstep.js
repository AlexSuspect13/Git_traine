function songDecoder(song){
  const del = 'WUB';
  const result = '';
  const part = song.split(del);
  for(let i in part){
    if(part[i] != '')
      result = result + ' ' + part[i]
  }
  return result.trim()
}
