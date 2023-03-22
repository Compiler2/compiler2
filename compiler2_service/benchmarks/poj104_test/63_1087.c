#include <header.h>

int main_bench()
{
      int x1,y1,x2,y2,m;
      int a[100][100];
      int i,j;
      my_scanf("%d %d",&x1,&y1);
      for (i=0;i<x1;i++)
      {
          for (j=0;j<y1;j++)
          {
              my_scanf("%d",&a[i][j]);
          }
      }
      int b[100][100];
      int c[100][100];
      my_scanf("%d %d",&x2,&y2);
      for (i=0;i<x2;i++)
      {
          for (j=0;j<y2;j++)
          {
              my_scanf("%d",&b[i][j]);
          }
      }
      int q;
      q=y1;
      for (i=0;i<x1;i++)
      {
          for (j=0;j<y2;j++)
          {
              c[i][j]=0;
              for (m=0;m<q;m++)
              {
                  c[i][j]=c[i][j]+a[i][m]*b[m][j];
              }
              if (j!=y2-1)
              {
                  my_printf("%d ",c[i][j]);
              }
              else
              {
                  my_printf("%d\n",c[i][j]);
              }   
          }
      }
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}        
