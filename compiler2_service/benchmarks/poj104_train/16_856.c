#define NUM_ITER 1805850

#include <header.h>

int main_bench()
{
   int a,b,c,d,e;
   my_scanf("%d",&e);
   if(e<10)
   {a=e;
      my_printf("%d",a);}
    else
   if(e<100)
     {a=e%10; b=(e-a)/10;
      my_printf("%d%d",a,b);}
    else
   if(e<1000)
         {a=e%10; b=((e-a)/10)%10; c=(int)(e/100);
         my_printf("%d%d%d",a,b,c);}
    else
         {a=e%10; b=((e-a)/10)%10; c=((e-b*10-a)/100)%10;  d=(int)(e/1000);
            my_printf("%d%d%d%d",a,b,c,d);}
return 0;






}
