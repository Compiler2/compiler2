#define NUM_ITER 5486

#include <header.h>

main_bench()
{
      int i,m,max=0;
      my_scanf("%d",&m);
      int a[m];
      for (i=0;i<m;i++)
      {
          my_scanf("%d",&a[i]);
          if (a[i]>max)
          max=a[i];
      }
      int b[max+1];
      float sum;
      b[0]=1;
      b[1]=2;
      for (i=2;i<=max;i++)
      {
          b[i]=b[i-1]+b[i-2];
      }
      for (i=0;i<m;i++)
      {
          sum=0;
          for (int j=0;j<a[i];j++)
              sum+=(float)b[j+1]/b[j];
          my_printf("%.3f\n",sum);
      }
} 
