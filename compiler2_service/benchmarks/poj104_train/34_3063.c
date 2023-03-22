#define NUM_ITER 359885

#include <header.h>

main_bench()
{
      int i,j;
      my_scanf("%d",&i);
      while(i>1)
      {
                if(i%2==0)
                {
                          j=i/2;
                          my_printf("%d/2=%d\n",i,j);
                          i=j;
                 }
                 else
                 {
                              j=i*3+1;
                              my_printf("%d*3+1=%d\n",i,j);
                              i=j;
                 }
      }
      my_printf("End");
getchar();getchar();getchar();getchar();getchar();getchar();getchar();
                              }
