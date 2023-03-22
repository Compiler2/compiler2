#define NUM_ITER 1813609

#include <header.h>

int main_bench()
{  int a,b,c,d,n;
   my_scanf("%d",&n);
   if(n<=9)
   my_printf("%d",n);
   else
   {  if(n<=99)
      {a=n%10; b=n/10; my_printf("%d%d",a,b);}
      else
      {  if(n<=999)
         {a=n%10; c=n/100; b=(n%100)/10; my_printf("%d%d%d",a,b,c);}
         else
         { if(n<=9999)
           {a=n%10; b=(n%100)/10; c=(n%1000)/100; d=n/1000; my_printf("%d%d%d%d",a,b,c,d);}
           else
           my_printf("00001");

         }

      }

   }

return 0;


}
