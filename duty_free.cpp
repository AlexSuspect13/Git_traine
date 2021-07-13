// https://www.codewars.com/kata/57e92e91b63b6cbac20001e5
#include <iostream>
int duty_free(double price, double discount, double holiday_cost) {
   return holiday_cost / (price * (discount/100));
}
