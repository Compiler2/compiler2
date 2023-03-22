#include <header.h>

main_bench()
{
      int x1,x2,y1,y2;
      int a[100][100]={0},b[100][100]={0},c[100][100]={0};
      int j,k,i;
      my_scanf("%d",&x1);
      my_scanf("%d",&y1);
      for(i=0;i<x1;i++)
      {
                      for(k=0;k<y1;k++)
                      {
                                       my_scanf("%d",&a[i][k]);
                      }
      }
      
      
      my_scanf("%d",&x2);
      my_scanf("%d",&y2);
      for(i=0;i<x2;i++)
      {
                      for(k=0;k<y2;k++)
                      {
                                       my_scanf("%d",&b[i][k]);
                      }
      }
      
      for(i=0;i<x1;i++)
      {
                       for(k=0;k<y2;k++)
                       {
                                       for(j=0;j<y1;j++)
                                       c[i][k]=a[i][j]*b[j][k]+c[i][k];
                                       if(k==0)
                                       my_printf("%d",c[i][k]);
                                       else
                                       my_printf(" %d",c[i][k]);
                       }
                       my_printf("\n");
      }
} 
