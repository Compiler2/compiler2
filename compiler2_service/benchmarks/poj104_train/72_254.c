#include <header.h>

main_bench()
{
      int m,n,i,j;
      int a[1000][1000];
      my_scanf("%d %d",&m,&n);
      for(i=0;i<m;i++)
      {
                      for(j=0;j<n;j++)
                      {
                                      my_scanf("%d",&a[i][j]);
                      }
      }
      for(i=0;i<m;i++)
      {
                      for(j=0;j<n;j++)
                      {
                                      if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
                                      my_printf("%d %d\n",i,j);
                      }
      }
}