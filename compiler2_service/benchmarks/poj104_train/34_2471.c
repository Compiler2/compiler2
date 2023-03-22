#include <header.h>

main_bench()
{
      int a,b;
      my_scanf("%d",&a);
     loop:if(a==1)
     {
     my_printf("End");
     getchar();
     getchar();
     return 0;
     }
     else if(a%2!=0)
      {
       {
                 b=a*3+1;
       }
       my_printf("%d*3+1=%d\n",a,b);
       a=b;
      }
      else if(a%2==0)
      {
       {
           b=a/2;
       }
       my_printf("%d/2=%d\n",a,b);
       a=b;
      }
      goto loop;
}