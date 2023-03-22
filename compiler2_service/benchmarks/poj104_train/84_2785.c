#include <header.h>

int main_bench()
{
int a[100],n,i,j,t;
my_scanf("%d",&n);
for(i=0;i<n;i++)
my_scanf("%d",&a[i]);

for(j=0;j<n-1;j++)
for(i=0;i<n-1-j;i++)
if(a[i]<a[i+1])
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
my_printf("%d\n%d\n",a[0],a[1]);
}

