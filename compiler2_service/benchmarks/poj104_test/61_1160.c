#include <header.h>

int main_bench()
{
 double a=1,b=1,c;
 int i,n,j,x;

 my_scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  my_scanf("%d",&x);
  a=1;
  b=1;
  for(j=3;j<=x;j++)
  {   c = b;
   b = a+b;
   a = c;
  }
  my_printf("%.0lf\n",b);
 }
 return 0;
}