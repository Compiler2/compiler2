#define NUM_ITER 57947

#include <header.h>

main_bench()
{
      int b[20]={1,1},m,n,i;
      
      for(i=2;i<20;i++)
      b[i]=b[i-1]+b[i-2];
      my_scanf("%d",&n);
      
      for(i=0;i<n;i++)
      {
          my_scanf("%d",&m);
          my_printf("%d\n",b[m-1]);
      }
      getchar();
      getchar();
}