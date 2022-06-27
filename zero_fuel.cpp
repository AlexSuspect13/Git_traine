// https://www.codewars.com/kata/5265326f5fda8eb1160004c8
bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left)
{ 
  if(mpg * fuel_left >= distance_to_pump )
  {
    return true;
  }
  return false;
}
