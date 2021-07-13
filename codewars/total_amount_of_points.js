// https://www.codewars.com/kata/5bb904724c47249b10000131

function points(games) {
  return games.reduce((points, result) => {
    const resInMas = result.split(":").map((el) => {
      return Number(el);
    });
    console.log(resInMas);
    switch (true) {
      case resInMas[0] > resInMas[1]:
        return points + 3;
      case resInMas[0] < resInMas[1]:
        return points + 0;
      case resInMas[0] === resInMas[1]:
        return points + 1;
    }
  }, 0);
}
