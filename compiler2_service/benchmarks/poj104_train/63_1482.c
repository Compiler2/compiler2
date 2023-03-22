#define NUM_ITER 64

#include <header.h>

main_bench()
{
      int i,j,k,x1,y1,x2,y2,sign;
      int a[100][100],b[100][100],c[100][100]={{0}};
      my_scanf("%d %d",&x1,&y1);
      for(i=0;i<x1;i++)
      for(j=0;j<y1;j++)
      my_scanf("%d",&a[i][j]);
      my_scanf("%d %d",&x2,&y2);
      for(i=0;i<x2;i++)
      for(j=0;j<y2;j++)
      my_scanf("%d",&b[i][j]);
      for(i=0;i<x1;i++)
      for(j=0;j<y2;j++)
      {
                       for(k=0;k<x2;k++)
                       c[i][j]+=a[i][k]*b[k][j];
      }
      for(i=0;i<x1;i++)
      {
                       sign=0;
                       for(j=0;j<y2;j++)
                       {
                                        if(sign==0)
                                        {
                                                    my_printf("%d",c[i][j]);
                                                    sign++;
                                        }
                                        else my_printf(" %d",c[i][j]);
                       }
                       my_printf("\n");
      }
      
}
