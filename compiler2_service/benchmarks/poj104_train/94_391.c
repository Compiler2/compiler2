#define NUM_ITER 12906

#include <header.h>

int main_bench()
{
int i,r=0,n,m,j;
my_scanf("%d",&n);
int a[10000],b[10000];
for(i=0;i<n;i++)
{
my_scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==1)
{
b[r]=a[i];
r=r+1;
}
if(a[i]%2==0)
{
r=r;
}
}
for(i=0;i<r;i++)
{
for(j=r-1;j>i;j--)
{
if(b[j]<=b[j-1])
{
m=b[j-1];
b[j-1]=b[j];
b[j]=m;
}
if(b[j]>b[j-1])
{
b[j]=b[j];
b[j-1]=b[j-1];
}
}
}
for(i=0;i<r-1;i++)
{
my_printf("%d,",b[i]);
}
my_printf("%d",b[r-1]);
}