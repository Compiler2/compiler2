#define NUM_ITER 390145

#include <header.h>

main_bench()
{
      int a,b;
      my_scanf("%d",&a);
      while(a!=1)
      {
          if(a%2)
            {
               b=a*3+1;
               my_printf("%d*3+1=%d\n",a,b);
            }
          else
             {
                b=a/2;
                my_printf("%d/2=%d\n",a,b);                       
             }
          a=b;
      }
      my_printf("End");
      getchar();
      getchar(); 
} 