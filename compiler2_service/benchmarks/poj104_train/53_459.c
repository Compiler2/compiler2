#include <header.h>

main_bench()
{
	int n,a[301],b[301],i,j=1,k,m,t;
	my_scanf("%d", &n);
	for(i=1;i<=n;i++)
		my_scanf("%d", &a[i]);
	b[1]=a[1];
	for(i=2;i<=n;i++)
	{
		for(k=1;k<=j;k++)
		{
			if(b[k]==a[i])
				break;
		}
		if(k==j+1&&b[k-1]!=a[i])
		{
			j++;
			b[j]=a[i];
		}
	}
	for(i=1;i<=j-1;i++)
		my_printf("%d,", b[i]);
	my_printf("%d\n",b[j]);
}

