//link: https://www.codewars.com/kata/596c6eb85b0f515834000049

var replaceDots = function (str) {
    let strCopy = str;
    while (strCopy.includes(".")) {
      strCopy = strCopy.replace(/\./, "-");
    }
    return strCopy;
  };
  