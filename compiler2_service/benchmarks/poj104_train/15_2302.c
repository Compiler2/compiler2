#include <header.h>

main_bench()
{
      int n;
      my_scanf("%d",&n);
      int a[n][n],b,c,d,e,f,i,j,zhi=0;
      for(i=0;i<=n-1;i++)
        for(j=0;j<=n-1;j++)
          my_scanf("%d",&a[i][j]);
      for(i=0;i<=n-1;i++)
        for(j=0;j<=n-1;j++)
        {
           if(a[i][j]==0&&zhi==0)
             {
               b=i;
               c=j;
               zhi++;
             }
           if(a[i][j]==0)
             {
               d=i;
               e=j;
             }
        }
      f=(d-b-1)*(e-c-1);
      my_printf("%d",f);
}