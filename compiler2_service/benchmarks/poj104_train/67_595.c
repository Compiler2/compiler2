#define NUM_ITER 22484

#include <header.h>

main_bench()
{
      int n,i;
      float b,c,p,q,j,k;
      my_scanf("%d",&n);
      my_scanf("%d %d",&p,&q);
      b=q/p;
      for(i=0;i<n-1;i++)
      {
                        my_scanf("%d %d",&j,&k);
                        c=k/j;
                        if(fabs(b-c)>0.05)
                        {
                                          if(b-c>0.05)
                                          my_printf("worse\n");
                                          else
                                          my_printf("better\n");
                        }
                        else
                        my_printf("same\n");
      }
      getchar();
      getchar();
}
