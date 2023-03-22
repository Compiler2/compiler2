#define NUM_ITER 49

#include <header.h>

int main_bench()
{
int m,q,n,i,j,p;
int a[100][100],b[100][100],c[100][100];
my_scanf("%d",&m);
my_scanf("%d",&q);
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{my_scanf("%d",&a[i][j]);}
}
my_scanf("%d",&q);
my_scanf("%d",&n);
for(i=0;i<q;i++)
{
for(j=0;j<n;j++)
{my_scanf("%d",&b[i][j]);}
}
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{
c[i][j]=0;
for(p=0;p<q;p++)
{
                c[i][j]=c[i][j]+a[i][p]*b[p][j];
}
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(j==n-1)
my_printf("%d\n",c[i][j]);
else
my_printf("%d ",c[i][j]);}
}
}
