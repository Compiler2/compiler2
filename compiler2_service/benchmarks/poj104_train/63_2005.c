#define NUM_ITER 30

#include <header.h>

main_bench()
{
      int C(int x,int y);
      int x1,x2,y2,y1;
      int a[100][100]={0},b[100][100]={0},c[100][100]={0};
      my_scanf("%d %d",&x1,&y1);
      for(int j=0;j<x1;j++)
      {
              for(int k=0;k<y1;k++)
              {
                      if(k==0)
                      my_scanf("%d",&a[j][k]);
                      else my_scanf(" %d",&a[j][k]);
              }
      }
      my_scanf("%d %d",&x2,&y2);
      for(int j=0;j<x2;j++)
      {
              for(int k=0;k<y2;k++)
              {
                      if(k==0)
                      my_scanf("%d",&b[j][k]);
                      else my_scanf(" %d",&b[j][k]);
              } 
      }
      for(int j=0;j<x1;j++)
      {
              if(j!=0)   my_printf("\n");
              for(int k=0;k<y2;k++)
              {
                      c[j][k]=0;
                      for(int i=0;i<y1;i++)
                      c[j][k]=c[j][k]+a[j][i]*b[i][k];
                      if(k==0)
                      my_printf("%d",c[j][k]);
                      else 
                      {
                          
                           my_printf(" %d",c[j][k]);
                      }
              } 
      }
      
     
}