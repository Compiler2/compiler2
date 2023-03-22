#include <header.h>

int main_bench()
{
int i,n,k,j,m=0;
my_scanf("%d%d",&n,&k);
int a[1000000],b[1000000];
for(i=0;i<n;i++)
{
my_scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
b[i]=k-a[i];
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(b[i]==a[j])
{
m=m+1;
}
if(b[i]!=a[j])
{
m=m;
}
}
}
if(m!=0)
{
my_printf("yes\n");
}
if(m==0)
{
my_printf("no\n");
}
}