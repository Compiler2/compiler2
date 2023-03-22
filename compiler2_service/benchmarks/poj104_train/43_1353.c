#define NUM_ITER 24249

#include <header.h>

main_bench()
{
  int m,i,j;
  my_scanf("%d",&m);
  for(i=3;i<=m/2;i++)
  {
     for(j=2;j<=i;j++)
     {
        if(i%j==0) break;
      }
     if(j==i)
     {
        for(j=2;j<=m-i;j++)
        {
           if((m-i)%j==0) break;
         }
        if(j==m-i) my_printf("%d %d\n",i,m-i);
      }
   }
}
           