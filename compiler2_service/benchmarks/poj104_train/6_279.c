#include <header.h>

int main_bench()
{
    int c,n,i,j,x,y,sum,a[100][100];
    my_scanf("%d",&n);
    for(c=1;c<=n;c++)
    {
      sum=0;
      my_scanf("%d %d",&x,&y);
      for(i=0;i<x;i++)
      {
        for(j=0;j<y;j++)
        {
          my_scanf("%d",&a[i][j]);
        }
      }
      for(i=0;i<x;i++)
        sum=sum+a[i][0];
      for(i=0;i<x;i++)
        sum=sum+a[i][j-1];
      for(j=0;j<y;j++)
         sum=sum+a[0][j];
      for(j=0;j<y;j++)
         sum=sum+a[x-1][j];
      sum = sum -a[0][0]-a[x-1][0]-a[0][y-1]-a[x-1][y-1];
      if(c!=n)
      my_printf("%d\n",sum);
      else
      my_printf("%d",sum);
    }
        } 