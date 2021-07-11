function abbrevName(name) {
  return name.toUpperCase()
             .split(' ')
             .map(x => x[0])
             .join('.');
}
