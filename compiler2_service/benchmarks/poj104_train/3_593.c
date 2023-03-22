#include <header.h>

int main_bench()
{
    int i,j,k,n,a[1000];
	
	my_scanf("%d%d",&n,&k);
	for (i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}

	int flag;
	for (i=0;i<n;i++)
	{
		flag=0;
		for (j=0;j<n;j++)
		{
			if (k==a[i]+a[j])
			{
				flag=1;break;
		}}
		
		if (flag)
		{
			break;
		}
	}
	if (flag)
	{
		my_printf("yes");
		
	}
	else
		my_printf("no");
	return 0;
	
}
