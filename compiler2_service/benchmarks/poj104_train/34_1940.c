#define NUM_ITER 379987

#include <header.h>

main_bench()
{
      int a,b;
      my_scanf("%d",&a);
      if(a==1)
      my_printf("End\n");
      else 
      {for(;a!=1;)
      {
      if(a%2==0)
      {b=a/2;
      my_printf("%d/2=%d\n",a,b);
      a=b;}
      else 
      {b=3*a+1;
      my_printf("%d*3+1=%d\n",a,b);
      a=b;}
           }
      my_printf("End\n");
           }
      
      }