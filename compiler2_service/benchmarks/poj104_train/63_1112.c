#define NUM_ITER 31

#include <header.h>

int max(int x,int y);
int main_bench()
{
    int  a[200][200],b[200][200],c[400][400]={0};
    int x1,x2,y1,y2,x3,y3;
    int i,j,k,m;
    my_scanf("%d%d",&x1,&y1);
    for(i=0;i<x1;i++)
     for(j=0;j<y1;j++)
     my_scanf("%d",&a[i][j]);
      my_scanf("%d%d",&x2,&y2);
    for(i=0;i<x2;i++)
     for(j=0;j<y2;j++)
     my_scanf("%d",&b[i][j]);
     x3=x1;
     y3=y2;
     for(i=0;i<x3;i++)
     for(j=0;j<y3;j++)
     {
         for(k=0;k<y1;k++)
         {
         c[i][j]+=a[i][k]*b[k][j];
         }
     }
     for(i=0;i<x3;i++)
     for(j=0;j<y3;j++)
      {
          if(j<y3-1)my_printf("%d ",c[i][j]);
          else 
          my_printf("%d\n",c[i][j]);

      }}

