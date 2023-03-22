#define NUM_ITER 51

#include <header.h>

int main_bench()
{
    int a[100][100], b[100][100];
    int c[100][100]={0};
    int i,j,x1,x2,y,m,n;
    my_scanf("%d %d",&x1,&n);
    for(i=0;i<x1;i++)
     {
     for(j=0;j<n;j++)
      my_scanf("%d",&a[i][j]);
      }
   my_scanf("%d %d",&x2,&y);
     for(i=0;i<x2;i++)
     {
     for(j=0;j<y;j++)
      my_scanf("%d",&b[i][j]);
     }  
  for(i=0;i<x1;i++)
  {
   for(j=0;j<y;j++)
   {
       for(m=0;m<x2;m++)
       {
         c[i][j]+=a[i][m]*b[m][j];
       }
       if(i!= x1-1)
       {
       if(j!= y-1)
       my_printf("%d ",c[i][j]);
       else
       my_printf("%d\n",c[i][j]);
       }
       else
       if(j!= y-1)
       my_printf("%d ",c[i][j]);
       else
       my_printf("%d",c[i][j]);
     }
   }
   getchar();
   getchar();
}