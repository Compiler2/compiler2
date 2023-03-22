#define NUM_ITER 54833

#include <header.h>

int main_bench()
{
	int n,i;
	int num[100];
	int a;
	my_scanf("%d",&n);
	for (i=0;i<=n-1;i++)
	{
		my_scanf("%d",&num[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		if (num[0]<num[i])
		{
			a=num[i];
			num[i]=num[0];
			num[0]=a;
		}
	}
	for(i=2;i<=n-1;i++)
	{
		if (num[1]<num[i])
		{
			a=num[i];
			num[i]=num[1];
			num[1]=a;
		}
	}
	my_printf("%d\n%d\n",num[0],num[1]);
	return 0;
}