#define NUM_ITER 27514

#include <header.h>

main_bench()
{
      int i,j,k,n;
      my_scanf("%d",&n);
      int*p=(int*)malloc(n*sizeof(int));
      int*q=(int*)malloc(n*sizeof(int));
      double*r=(double*)malloc(n*sizeof(double));
      for(i=0;i<n;i++)
      {
         my_scanf("%d %d",&p[i],&q[i]);
         r[i]=(double)q[i]/p[i];
      }
      for(i=1;i<n;i++)
      {
         if(r[i]-r[0]>0.05)  my_printf("better\n");
         else if(r[0]-r[i]>0.05) my_printf("worse\n");
         else my_printf("same\n");
      }
}
