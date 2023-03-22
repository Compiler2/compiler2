#define NUM_ITER 31

#include <header.h>


main_bench()
{
      int x1,y1;
      my_scanf("%d %d",&x1,&y1);
      int a[x1][y1],i,j,k;
      for(i=0;i<x1;i++)
      {
             for(j=0;j<y1;j++)
             {
                   if(j == 0) my_scanf("%d",&a[i][j]);
                   else       my_scanf(" %d",&a[i][j]);
             }
      } 
      int x2,y2;
      my_scanf("%d %d",&x2,&y2);
      int b[x2][y2];
      for(i=0;i<x2;i++)
      {
             for(j=0;j<y2;j++)
             {
                   if(j == 0) my_scanf("%d",&b[i][j]);
                   else       my_scanf(" %d",&b[i][j]);
             }
      }
      int t;
      for(i=0;i<x1;i++) 
      {
             for(j=0;j<y2;j++)
             {
                   t = 0;
                   for(k=0;k<y1;k++)
                          t += (a[i][k])*(b[k][j]);
                          if(j != y2-1) my_printf("%d ",t);
                          else        my_printf("%d\n",t);
             } 
      }
}  
      