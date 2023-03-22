#include <header.h>

main_bench()
{
      int x1,y1;
      my_scanf("%d%d",&x1,&y1);
      int a[100][100];
      int i,j;
      for(i=0;i<x1;i++)
      {
        for(j=0;j<y1;j++)
             my_scanf("%d",&a[i][j]);
      }
      int x2,y2;
      my_scanf("%d%d",&x2,&y2);
      int b[100][100];
      for(i=0;i<x2;i++)
      {
         for(j=0;j<y2;j++)
               my_scanf("%d",&b[i][j]);
      }
      int c[100][100];
      int k;
      for(i=0;i<x1;i++)
      for(j=0;j<y2;j++)
      {
                       for(k=0;k<x2;k++)
                            c[i][j]+=a[i][k]*b[k][j];
      }
      for(i=0;i<x1;i++)
      {
                       for(j=0;j<y2-1;j++)
                             my_printf("%d ",c[i][j]);
                        my_printf("%d\n",c[i][j]);
      }
      
} 
