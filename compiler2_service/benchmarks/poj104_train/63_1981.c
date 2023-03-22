#define NUM_ITER 30

#include <header.h>

main_bench()
{
      int x1,y1,x2,y2;
      int a[100][100],b[100][100],c[100][100]={0};
      my_scanf("%d %d",&x1,&y1);
      for(int i=0;i<x1;i++)
      {
              for(int j=0;j<y1;j++)
              {
                      my_scanf("%d",&a[i][j]);
              }
      }
      my_scanf("%d %d",&x2,&y2);
      for(int i=0;i<x2;i++)
      {
              for(int j=0;j<y2;j++)
              {
                      my_scanf("%d",&b[i][j]);
              }
      }
      for(int i=0;i<x1;i++)
      {
              for(int j=0;j<y2;j++)
              {
                      for(int k=0;k<y1;k++)
                      {
                      c[i][j]=c[i][j]+a[i][k]*b[k][j];
                      }
              }
      }
      for(int i=0;i<x1;i++)
      {
              for(int j=0;j<y2;j++)
              {
                      if(j==0)
                      my_printf("%d",c[i][j]);
                      else
                      my_printf(" %d",c[i][j]);
                      if(j==y2-1)
                      my_printf("\n",c[i][j]);
                      
              }
      }
}
