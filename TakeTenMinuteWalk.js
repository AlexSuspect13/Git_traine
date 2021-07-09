function isValidWalk(walk) {
  let north = walk.filter(i => { return i === 'n' }).length;
  let south = walk.filter(i => { return i === 's' }).length;
  let east = walk.filter(i => { return i === 'e' }).length;
  let west = walk.filter(i => { return i === 'w' }).length;
  return walk.length === 10 && north === south && east === west;
}