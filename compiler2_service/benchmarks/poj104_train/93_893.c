#include <header.h>

  int main_bench()
  {int a,b,c,d;
   my_scanf("%d",&a);
   b=a%3;
   c=a%5;
   d=a%7;
   if (b==0)
     {my_printf("3");
     if (c==0)
        my_printf(" 5");
     if (d==0)
        my_printf(" 7");
      }   
   else if(c==0)
        {my_printf("5");
         if(d==0)
           my_printf(" 7");
         }
        else if(d==0)
             my_printf("7");
             else
             my_printf("n");
  return 0;
  }