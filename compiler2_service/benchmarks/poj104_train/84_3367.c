#define NUM_ITER 56310

#include <header.h>

int main_bench()
{
	int i,j,k,l,m,n,a[100];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
		my_scanf("%d",&a[i]);
	m=a[1];
	for(i=2;i<=n;i++)
	{
		if(a[i]>m)
			m=a[i];
	}
	my_printf("%d\n",m);
    for(i=1;i<=n;i++)
	{
		if(a[i]<m)
			k=a[i];
		break;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]>k&&a[i]<m)
			k=a[i];
	}
	my_printf("%d",k);
}