#include <header.h>

int main_bench()
{
int k,m,n,i,j,l,s,x;
my_scanf("%d",&k);
for(l=1;l<=k;l++)
{my_scanf("%d%d",&m,&n);
s=0;
for(i=1;i<=m;i++)
{for(j=1;j<=n;j++)
{my_scanf("%d",&x);
if(i==1||i==m|j==1||j==n)
{s+=x;}}}
my_printf("%d\n",s);}
return 0;
}

