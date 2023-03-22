#define NUM_ITER 47079

#include <header.h>

main_bench()
{
      int n;
      my_scanf("%d",&n);
      int a[n];
      int i;
      for (i=0;i<n;i++)
       my_scanf("%d",&a[i]);
      int k,j,t;
      int f=0;
      my_scanf("%d",&k);
      j=n;
      i=0;
      while (i<n)
      {
          i++;
          if (a[f]==k)
          {
              j--;
              for (t=f;t<=j;t++)
                a[t]=a[t+1];
          }
          else f++;
      }
      my_printf("%d",a[0]);
      for (i=1;i<j;i++)
       my_printf(" %d",a[i]);
      getchar();
      getchar();
      getchar();
}
