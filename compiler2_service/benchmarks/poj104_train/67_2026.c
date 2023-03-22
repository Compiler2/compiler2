#define NUM_ITER 27285

#include <header.h>

main_bench()
{
      int i,j,m,n,g;
      double k,k1,k2,temp;
      my_scanf("%d",&n);
      my_scanf("%d %d",&i,&j);
      k=1.0*j/i;
      k1=k+0.05;
      k2=k-0.05;
      for(g=1;g<n;g++)
      {
                      my_scanf("%d %d",&i,&j);
                      temp=1.0*j/i;
                      if(temp<k2) my_printf("worse\n");
                      else if(temp>k1) my_printf("better\n");
                      else my_printf("same\n");
      }
      
}
