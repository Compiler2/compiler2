#define NUM_ITER 1451092

#include <header.h>

int main_bench()
{
   int x,a,b,c;
   my_scanf("%d",&x);
   a=0,b=0,c=0;
   if(x%7==0)
   {
      a=7;
   }
   if(x%5==0)
   {
      b=a;
      a=5;
   }
   if(x%3==0)
   {
      c=b;
      b=a;
      a=3;
   }
   if(a==0)
   {
      my_printf("n");
   }
   else
   {
      if(b==0)
      {
         my_printf("%d",a);  
      }
      else
      {
         if(c==0)
         {
            my_printf("%d %d",a,b);
         }
         else
         {  my_printf("%d %d %d",a,b,c);}
      }
   }
   my_scanf("%d",&x);  
   return 0;
} 