#define NUM_ITER 1789953

#include <header.h>

int main_bench()
{int a,b,c,d,e,f,g,h,i;

my_scanf("%d",&a);
if(a>9999)
{ b=a/10000;
   c=a%10000;
   d=c/1000;
   e=c%1000;
   f=e/100;
   g=e%100;
   h=g/10;
   i=g%10;
   my_printf("%d%d%d%d%d",i,h,f,d,b);}
else if(a>999)
{d=a/1000;
   e=a%1000;
   f=e/100;
   g=e%100;
   h=g/10;
   i=g%10;
   my_printf("%d%d%d%d",i,h,f,d);}
else if(a>99)
{ f=a/100;
   g=a%100;
   h=g/10;
   i=g%10;
   my_printf("%d%d%d",i,h,f);}
else if(a>9)
{h=a/10;
   i=a%10;
   my_printf("%d%d",i,h);}
else my_printf("%d",a);



	  
}
	