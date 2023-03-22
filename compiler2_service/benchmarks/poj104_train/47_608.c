#define NUM_ITER 52201

#include <header.h>

int main_bench()
{
int n,i,a[100],k;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
	my_scanf("%d",&a[i]);
}
for(k=0;k<n;k++)
{
my_printf("%d",a[n-1-k]);
if(k!=n-1)
{my_printf(" ");
}
}
return 0;
}
