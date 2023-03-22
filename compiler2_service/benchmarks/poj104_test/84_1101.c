#include <header.h>

int main_bench()
{
	int max,max2,n,now;
	my_scanf("%d",&n);
	max=max2=-10000;
	while (n-->0)
	{
		my_scanf("%d",&now);
		if (now>max) 
		{
			max2=max;
			max=now;
		}
		else
			if (now==max) max2=max;
				else
					if (now>max2) max2=now;
	}
	my_printf("%d\n%d",max,max2);
	return 0;
}