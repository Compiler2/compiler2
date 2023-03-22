#include <header.h>

int main_bench()
{
	int a[300],n,i,j,k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==-1)
				break;
			else if(a[i]==a[j])
				a[j]=-1;
		}
	}
	for(k=n-1;k>=0;k--)
	{
		if(a[k]==-1)
			continue;
		else
			break;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==-1)
			continue;
		else if(i==k)
		    my_printf("%d",a[i]);
		else
			my_printf("%d,",a[i]);
	}

	return 0;
}