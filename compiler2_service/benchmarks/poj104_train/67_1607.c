#include <header.h>

int main_bench()
{
  int a,b,c,i,n,j,m;
  double x,y;
  my_scanf("%d%d %d",&n,&a,&b);
  x=1.0*b/a;
  for(i=1;i<=n-1;i++)
  {
   my_scanf("%d %d",&c,&j);
   y=1.0*j/c;
   if(x-y>=0.05) my_printf("worse\n");
   else if(y-x>=0.05) my_printf("better\n");
   else my_printf("same\n");}
   return 0;
}