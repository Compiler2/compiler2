#include <header.h>

int main_bench()
{
	int n,i,a[300],j=0,k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	
	for (k=0;k<=j;k++)
			if (a[j]==a[k])
				break;
			if (k==j)
			{
				my_printf("%d",a[j]);
			}
	for(j=1;j<n;j++)
	{
		for (k=0;k<=j;k++)
			if (a[j]==a[k])
				break;
			if (k==j)
			{
				my_printf(",%d",a[j]);
			}
	}
	return 0;
}