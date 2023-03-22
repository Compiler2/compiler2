#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d", &n);
	if(n<=1||n>=100)
	{
		return 0;
	}
	
	int temp;
	int max, lmax;
	my_scanf("%d", &max);
	my_scanf("%d", &lmax);
	if(lmax > max)
	{
		temp=lmax;
		lmax=max;
		max=temp;
	}
	
	int i=3;
	while(i<=n)
	{
		my_scanf("%d", &temp);
		if(temp>max)
		{
			lmax=max;
			max=temp;
		}
		else if(temp>lmax)
		{
			lmax=temp;
		}
		i++;
	}
	my_printf("%d\n", max);
	my_printf("%d", lmax);
	return 0;
}