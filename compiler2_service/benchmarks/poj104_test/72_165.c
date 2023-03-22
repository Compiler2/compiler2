#include <header.h>

int main_bench()
{
      int m,n,i,j,k;
      my_scanf("%d %d",&m,&n);
      int a[m+2][n+2];
      for(i = 0;i < m+2;i++)
        for(j = 0;j < n+2;j++)
             a[i][j] = 0;
      for(i = 1;i <= m;i++)
        for(j = 1;j <= n;j++)
          my_scanf("%d",&a[i][j]);
      for(i = 1;i <= m;i++)
      {
            for(j = 1;j <= n;j++)
            {
                  if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1])
                    my_printf("%d %d\n",i-1,j-1);
            }
      }
      getchar();
      getchar();
      getchar();
      getchar();
}
