#define NUM_ITER 38457

#include <header.h>

int main_bench()
{
int n,m,i,j;
int a[1000]={0};
my_scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
my_scanf("%d",&a[i]);
for(i=n+m-1;i>=m;i--)
a[i]=a[i-m];
for(i=0;i<=m-1;i++)
a[i]=a[i+n];
for(i=0;i<n;i++)
{my_printf("%d",a[i]);
if(i!=n-1) my_printf(" ");
}
return 0;
}
