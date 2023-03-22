#include <header.h>

main_bench()
{int x1,x2,y1,y2;
int i,j,k;
my_scanf("%d %d",&x1,&y1);
int a[x1][y1];
for(i=0;i<x1;i++)
{
for(j=0;j<y1;j++)
my_scanf("%d",&a[i][j]);
}
my_scanf("%d %d",&x2,&y2);
int b[x2][y2];
for(i=0;i<x2;i++)
{
for(j=0;j<y2;j++)
my_scanf("%d",&b[i][j]);
}
int c[x1][y2];
for(i=0;i<x1;i++)
{
for(j=0;j<y2;j++)
{c[i][j]=0;
for(k=0;k<y1;k++)
{c[i][j]=c[i][j]+(a[i][k])*(b[k][j]);

}
}
}
for(i=0;i<x1;i++)
{
for(j=0;j<y2;j++)
{my_printf("%d",c[i][j]);
if((y2-1)!=j)
my_printf(" ");
else
my_printf("\n");}
}

} 