namespace Bouncingball {
int bouncingBall(double h, double bounce, double window)
{
  if (bounce <= 0.0 || bounce >= 1.0)
    return -1;
    
  int bounces = -1;
  while (h > window) {
    h *= bounce;
    bounces += 2;
  }
  return bounces;
}
}
