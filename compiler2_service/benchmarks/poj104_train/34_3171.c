#include <header.h>

main_bench()
{
      int a,b,c,d=2,e=3,f=1;
      my_scanf("%d",&a);
      while(a>1)
      {
         if(a%2==0)
         {
                   b=a/2;
                   my_printf("%d/%d=%d\n",a,d,b);
                   a=b;
                   }
         else
         {
             c=3*a+1;
             my_printf("%d*%d+%d=%d\n",a,e,f,c);
             a=c;
             }
             }
             my_printf("End\n");
           }