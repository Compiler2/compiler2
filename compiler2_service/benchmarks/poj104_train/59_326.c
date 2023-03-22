#define NUM_ITER 31

#include <header.h>


int main_bench()
{
  char a[100][100],b[100][100];
  int n,i,j,k,x=0;
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
  {
        my_scanf("%s",a[i]);
        for(j=0;j<n;j++)
        {
             b[i][j]=a[i][j];
        }
  }
  my_scanf("%d",&k);
  for(;k>1;k--)
  {
      for(i=0;i<n;i++)
      {
           for(j=0;j<n;j++)
           {
                b[i][j]=a[i][j];
           }
      }
      for(i=0;i<n;i++)
      {
           for(j=0;j<n;j++)
           {
                if(b[i][j]=='#'||b[i][j]=='@')
                continue;
                if((i>0&&b[i-1][j]=='@')||(j>0&&b[i][j-1]=='@')||(i<n-1&&b[i+1][j]=='@')||(j<n-1&&b[i][j+1]=='@'))
                a[i][j]='@';
           }
      }
  }
  for(i=0;i<n;i++)
      {
           for(j=0;j<n;j++)
           {
                if(a[i][j]=='@')
                {
                x++;
                }
           }
      }
      my_printf("%d\n",x);
  return 0;
}
