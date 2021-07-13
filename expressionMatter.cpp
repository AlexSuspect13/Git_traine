unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
  int z=a*(b+c);
  int x=a*b*c;
  int f=a+b*c;
  int v=(a+b)*c;
  int l=a+b+c;
  int n=std::max(z,x);
  int m=std::max(f,v);
  int j=std::max(n,m);
  return std::max(j,l);
}
