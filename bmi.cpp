// https://www.codewars.com/kata/57a429e253ba3381850000fb
#include <cmath>
std::string bmi(double w, double h) 
{
  double bmi = w/std::pow(h,2);
  if(bmi <=  18.5 )
    {return "Underweight";}
  if(bmi <= 25.0 )
    {return "Normal";}
  if(bmi < 30.1)
    {return "Overweight";}
  if (bmi > 30)
    {return "Obese";}
}
