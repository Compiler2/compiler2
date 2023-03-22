#include <header.h>

int main_bench()
{
    int x1,x2,y1,y2,i,j,k;
    my_scanf("%d%d",&x1,&y1);
    int a[x1][y1];
    for(i=0;i<x1;i++) for(j=0;j<y1;j++) my_scanf("%d",&a[i][j]);
    my_scanf("%d%d",&x2,&y2);
    int b[x2][y2];
    for(i=0;i<x2;i++) for(j=0;j<y2;j++) my_scanf("%d",&b[i][j]);
    int c[x1][y2];
    for(i=0;i<x1;i++) for(j=0;j<y2;j++) c[i][j]=0;
    for(i=0;i<x1;i++) for(j=0;j<y2;j++) 
    {
                      for(k=0;k<x2;k++)
                      c[i][j]=c[i][j]+a[i][k]*b[k][j];
    }
    for(i=0;i<x1;i++)
    {
    my_printf("%d",c[i][0]);
    for(j=1;j<y2;j++) 
    my_printf(" %d",c[i][j]);
    my_printf("\n");
    }
    }