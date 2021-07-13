// https://www.codewars.com/kata/5265326f5fda8eb1160004c8
bool isPrime(int num) {
  for(int i = 2; i <= sqrt(num); i++)
    if(num % i == 0) return false;
  return num <= 1? false : true;
}
