#define NUM_ITER 8851

#include <header.h>

main_bench()
{
      int m;
      my_scanf("%d",&m);
      int i,j,judge,k,judge2;
      for (i=2;i<=m/2;i++)
      {
          judge=1;
          for (j=2;j<i/2;j++)
          {
              if (i%j==0)
                 judge=0;
          }
          if (judge==1)
          {
              k=m-i;
              judge2=1;
              for (j=2;j<k/2+1;j++)
              {
              if (k%j==0)
                 judge2=0;
              }
              if (judge2==1)
              my_printf("%d %d\n",i,k);
          }
      }
      getchar();
      getchar();
}