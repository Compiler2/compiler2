#define NUM_ITER 59

#include <header.h>

int main_bench()
{
int x1,y1,x2,y2,i,j,p;
int a[100][100],b[100][100],c[100][100]={0};
my_scanf("%d",&x1);
my_scanf("%d",&y1);
for(i=0;i<x1;i++)
{
for(j=0;j<y1;j++)
{my_scanf("%d",&a[i][j]);}
}
my_scanf("%d",&x2);
my_scanf("%d",&y2);
for(i=0;i<x2;i++)
{
for(j=0;j<y2;j++)
my_scanf("%d",&b[i][j]);
}
for(i=0;i<x1;i++)
{
for(j=0;j<y2;j++)
{
for(p=0;p<x2;p++)
c[i][j]=c[i][j]+a[i][p]*b[p][j];
}

}
for(i=0;i<x1;i++)
{
for(j=0;j<y2;j++)
{
if(j==y2-1)
my_printf("%d\n",c[i][j]);
else
my_printf("%d ",c[i][j]);
}
}
}

