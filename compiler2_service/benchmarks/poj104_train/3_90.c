#include <header.h>


int main_bench()
{
	int n,k,a[1000],f=0;
	my_scanf("%d %d",&n,&k);
	my_scanf("%d",&a[0]);
	for(int i=1;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		for(int j=0;j<i;j++)
		{
			if(a[j]+a[i]==k)
			{
				f=1;
			}
		}
	}
	if(f==1)
	{
		my_printf("yes");
	}
	else
	{
		my_printf("no");
	}
	return 0;
}
