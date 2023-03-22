#include <header.h>

int main_bench()
{
 int a,b,c,d,e,g,h,i;
 long f;
 my_scanf("%ld",&f);
 a=f/10000;g=f%10000;
 b=g/1000;h=g%1000;
 c=h/100;i=h%100;
 d=i/10;e=i%10;
 if (a>0)
 my_printf("%d%d%d%d%d",e,d,c,b,a);
 else
  if(b>0)
  my_printf("%d%d%d%d",e,d,c,b);
  else
   if(c>0)
   my_printf("%d%d%d",e,d,c);
   else
    if(d>0)
    my_printf("%d%d",e,d);
    else
    my_printf("%d",e);
}