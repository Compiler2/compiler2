#define NUM_ITER 5181

#include <header.h>

int main_bench()
{
int i,j,n;
my_scanf("%d",&n);
int a[100];
for(i=0;i<n;i++)
{
my_scanf("%d ",&a[i]);
}
int m;
for(i=n-1;i>0;i--)
{
for(j=0;j<i;j++)
{
m=a[j+1];
a[j+1]=a[j];
a[j]=m;
}
}
for(i=0;i<n;i++)
{
if(i==n-1)my_printf("%d",a[i]);
else my_printf("%d ",a[i]);
}
}
