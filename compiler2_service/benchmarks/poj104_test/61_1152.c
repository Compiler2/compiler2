#define NUM_ITER 48919

#include <header.h>

int main_bench( )
{
	int	n,i,b[100001],a[100000],m=1;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
if(m<a[i])
{
m=a[i];
}
	}
        b[1]=1;
        b[2]=1;
        for(i=3;i<=m;i++)
	{
		b[i]=b[i-1]+b[i-2];
	}
for(i=1;i<=n;i++)
	{
		my_printf("%d\n",b[a[i]]);
	}
	return 0;
}