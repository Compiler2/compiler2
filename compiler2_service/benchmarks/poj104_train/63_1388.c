#define NUM_ITER 40

#include <header.h>

main_bench()
{
  int x1,y1,x2,y2,i,j,k,a=0,b=0;
  my_scanf("%d %d",&x1,&y1);
  static int x[102][102],y[102][102],z[102][102];
  for(i=1;i<=x1;i++)
     for(j=1;j<=y1;j++)
         my_scanf("%d",&x[i][j]);
  my_scanf("%d %d",&x2,&y2);
  for(i=1;i<=x2;i++)
     for(j=1;j<=y2;j++)
         my_scanf("%d",&y[i][j]);
  for(i=1;i<=x1;i++)
    for(j=1;j<=y2;j++)
       for(k=1;k<=y1;k++)
           z[i][j]+=x[i][k]*y[k][j];
  for(i=1;i<=x1;i++)
   { for(j=1;j<=y2;j++)
        {if(a!=0)
         my_printf(" ");
         my_printf("%d",z[i][j]);
         a++;}
      a=0;
      my_printf("\n");
   }
}