#define NUM_ITER 335979

#include <header.h>

main_bench()
{
      int i,a;
      my_scanf("%d",&i);
      while(i!=1)
      {
                 if (i==1) break;
                 else if(i%2) 
                 {a=3*i+1;
                 my_printf("%d*3+1=%d\n",i,a);
                 i=a;
                 continue;}
                 else
                 {
                 a=i/2;
                 my_printf("%d/2=%d\n",i,a);
                 i=a;
                 }
      
                 }
                 my_printf("End");
                 getchar();
                 getchar();
                 getchar();
}