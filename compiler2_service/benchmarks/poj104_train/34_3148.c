#define NUM_ITER 306167

#include <header.h>

main_bench()
{
      int a,b;
      my_scanf("%d",&a);
      while (a!=1)
      {
            if (a%2==1)
               {
                       b = a;
                       a=a*3+1;
                       my_printf("%d*3+1=%d\n",b,a);
                       }
            else
               {
                b= a;
                a=a/2;
                my_printf("%d/2=%d\n",b,a); 
               }
      }
      my_printf("End");
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
}
                
                          