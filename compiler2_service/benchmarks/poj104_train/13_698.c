#define NUM_ITER 6079

#include <header.h>

main_bench()
{
      int m,n,i,j;
      int a[20000];
      int count=0;
      my_scanf("%d",&n);
      for(i=0;i<n;i++)
      my_scanf("%d",&a[i]);
      my_printf("%d",a[0]);
      for(i=1;i<n;i++)
      {
                      int count=0;
                      for(j=0;j<i;j++)
                      {
                      if(a[i]==a[j])
                      count++;
                      }
                      if(count==0)
                      my_printf(" %d",a[i]);
      }
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
}
