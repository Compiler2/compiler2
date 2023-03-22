#include <header.h>

int main_bench()
{
	int n,i,j,k,a[1000],b[1000],c[1000000];
	int e=0;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
			c[e]=a[i]+b[j];
			e++;
			}
		}
	}
	for(i=0;i<=e;i++)
	{
		if(i<e&&c[i]==k)
		{
			my_printf("yes\n");
			break;
		}
		if(i==e&&c[e]==k)
		{
			my_printf("yes\n");
		}
		else if(i==e)
		{
			my_printf("no\n");
		}
	}
	return 0;
}