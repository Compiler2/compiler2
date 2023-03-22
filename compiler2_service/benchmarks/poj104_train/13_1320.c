#include <header.h>

int main_bench()
{
	int n,i,a[20001]={0},j,l;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(l=(i+1);l<n;l++)
		{
			if(a[l]==a[i])
			{
				for(j=(l+1);j<n;j++)
				{
					a[j-1]=a[j];
				}
			l-=1;
			n--;
			}
		}

	}
	for(i=0;i<n;i++)
	{
		if(i==0)
			my_printf("%d",a[i]);
		else
			my_printf(" %d",a[i]);
	}

	return 0;

}