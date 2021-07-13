// https://www.codewars.com/kata/55cbd4ba903825f7970000f5

function getGrade(s1, s2, s3) {
  const average = (s1 + s2 + s3) / 3;
  switch (average) {
    case average >= 90 && average <= 100:
      return "A";
    case average >= 80 && average < 90:
      return "B";
    case average >= 70 && average < 80:
      return "C";
    case average >= 60 && average < 70:
      return "D";
    case average >= 00 && average < 60:
      return "F";
  }
}
