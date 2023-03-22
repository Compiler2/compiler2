#include <header.h>

int main_bench()
{
	int m,n;
	my_scanf("%d %d",&n,&m);
	int u[100],i;
	for(i=0;i<=n-2;i++)
	{
		my_scanf("%d ",&u[i]);
	}
	my_scanf("%d",&u[n-1]);
	int *p;
	p=u+n-m;
	int k=0;
	while(k<n-1)
	{
		my_printf("%d ",*p);
		p++;
		p=(p-u)%n+u;
		k++;
	}

my_printf("%d",*p);
	return 0;
}

