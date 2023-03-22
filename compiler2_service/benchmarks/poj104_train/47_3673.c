#include <header.h>

int main_bench()
{
	int i,n,j,a[100]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(j=100;j>=0;j--)
	{
		if(j>=n)
			continue;

		else if(j<n&&j>0)
			my_printf("%d ",a[j]);
		else if(j==0)
		my_printf("%d",a[0]);
	}
	

	return 0;
}
