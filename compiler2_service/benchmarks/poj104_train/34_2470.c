#define NUM_ITER 326595

#include <header.h>

main_bench()
{
      int a,b,c;
      my_scanf("%d\n",&a);
      for(;a>1;)
      {
              if(a%2==0) 
              {
                        a=a/2;
                        b=a*2;
                        my_printf("%d/2=%d\n",b,a);
              }
              else
              {
                  a=a*3+1;
                  c=(a-1)/3;
                  my_printf("%d*3+1=%d\n",c,a);
              }
      }
      my_printf("End");
      getchar();
      getchar();
}
                                 
                 
                