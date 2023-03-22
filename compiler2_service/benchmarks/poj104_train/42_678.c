#define NUM_ITER 56288

#include <header.h>

main_bench()
{
      int a,b,i;
      int c[100000];
      my_scanf("%d",&a);
      for(i=0;i<a;i++)
      {
                      my_scanf("%d",&c[i]);
      } 
      my_scanf("%d",&b);
      int k=0;
      for(i=0;i<a;i++)
      if(c[i]!=b)
      {
                 if(k==0)
                 {my_printf("%d",c[i]);k=1;}
                 else
                 my_printf(" %d",c[i]);
      }
      getchar();
      getchar(); 
}
