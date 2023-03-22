#include <header.h>

int main_bench()
{
	int n,a[301],b[301],i,j,k,p;
	my_scanf("%d",&n);
	my_scanf("%d",&a[0]);
	b[0]=a[0];
	i=1;k=1;
	while(i<n)
	{
		p=1;
		my_scanf("%d",&a[i]);
		for(j=0;j<i;j++)
			if(a[i]==a[j])
			{p=0;break;}
		if(p)
		b[k++]=a[i];
		i++;
	}
	my_printf("%d",b[0]);
	for(i=1;i<k;i++)
		my_printf(",%d",b[i]);
	return 0;
}
