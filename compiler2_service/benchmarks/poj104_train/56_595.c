#include <header.h>


int main_bench()
{
  int n,a,b,c,d,e;
  my_scanf("%d",&n);
  a=n/10000;
  b=(n-a*10000)/1000;
  c=(n-a*10000-b*1000)/100;
  d=(n-a*10000-b*1000-c*100)/10;
  e=n-a*10000-b*1000-c*100-d*10;
  
  my_printf("%d",e);
  if(d!=0)
  {my_printf("%d",d);}
  if(c!=0)
  {my_printf("%d",c);}
  if(b!=0)
  {my_printf("%d",b);}
  if(a!=0)
  {my_printf("%d",a);}

  return 0;  
  
}
