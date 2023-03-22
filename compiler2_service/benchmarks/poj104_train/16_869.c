#include <header.h>

int main_bench()
{
  int n,a,b,c,d,e;
  my_scanf("%d",&n);
  a=n/10000;
  b=(n-a*10000)/1000;
  c=(n-a*10000-b*1000)/100;
  d=(n-a*10000-b*1000-c*100)/10;
  e=n%10;
  if(a>0) my_printf("00001");
  else if(b>0) my_printf("%d%d%d%d",e,d,c,b);
  else if(c>0) my_printf("%d%d%d",e,d,c);
  else if(d>0) my_printf("%d%d",e,d);
  else my_printf("%d",e);
  return 0;
}