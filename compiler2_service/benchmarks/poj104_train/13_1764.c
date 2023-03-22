#include <header.h>

int main_bench()
{
	int n,i,m,flag;
	my_scanf("%d",&n);
	int a[200000];
	for (i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	if(n==1)
		my_printf("%d",a[1]);
	else
	{
	my_printf("%d",a[1]);
	for (i=2;i<=n;i++)
	{
		for (m=1;m<i;m++)
		{
			if (a[i]==a[m])
			{
				flag=1;
				break;
			}
			else
				flag=-1;
		}
		if(flag==-1)
			my_printf(" %d",a[i]);
	}

	}
	return 0;
}