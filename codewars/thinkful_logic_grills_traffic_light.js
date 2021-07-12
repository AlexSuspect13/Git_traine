// https://www.codewars.com/kata/58649884a1659ed6cb000072

function updateLight(current) {
  switch (current) {
    case "yellow":
      return "red";
    case "green":
      return "yellow";
    case "red":
      return "green";
  }
}
