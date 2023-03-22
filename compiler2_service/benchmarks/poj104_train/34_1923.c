#include <header.h>


main_bench()
{
      int a,b,c;
      my_scanf("%d",&a);
      while(a>=2)
      {
                     if(a%2==1)
                     {b=3*a+1;
                     my_printf("%d*3+1=%d\n",a,b);
                     c=b;a=c;a=b;
                     continue;
                     }
                     else 
                     {b=a/2;
                     my_printf("%d/2=%d\n",a,b);
                     c=b;a=c;a=b;
                     continue;}
                     }
                     
                     my_printf("End\n");
      
      }
