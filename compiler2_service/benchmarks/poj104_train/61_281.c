#define NUM_ITER 17145

#include <header.h>

int sum(int m);
int main_bench()
{
int m,n,i,a[100];
my_scanf("%d",&n);
a[1]=1;a[2]=1;
for(i=1;i<=n;i++)
{
my_scanf("%d",&m);
my_printf("%d\n",sum(m));
}
}
int sum(int m)
{
int i,a[100];
for(i=3;i<=21;i++)
{
a[1]=1;a[2]=1;
a[i]=a[i-1]+a[i-2];
}
return a[m];
}
