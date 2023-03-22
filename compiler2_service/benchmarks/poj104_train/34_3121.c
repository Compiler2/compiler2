#include <header.h>

main_bench()
{
      int x,a,b;
      my_scanf("%d",&x);
      
      while(x!=1)
      {
         if(x%2==0)
         {
         my_printf("%d/2=%d\n",x,x/2);
         x=x/2;
         }
         else
         {
             my_printf("%d*3+1=%d\n",x,x*3+1);
         x=x*3+1;
         }
      
      }
      if(x==1)
      {my_printf("End");}
      
      
      
      
      getchar();
      getchar();
      }
