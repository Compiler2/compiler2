#include <header.h>

int main_bench()
{
	int n,i,a,max=0,max2=0;
	my_scanf("%d",&n);
	my_scanf("%d",&a);
	max=a,max2=a;
	for(i=2;i<=n;i++)
	{
		my_scanf("%d",&a);
		if(a>max)
		{
			max=a;
		}
		else
		{
			if(a>max2)
			{
				max2=a;
			}
		}
	}
	my_printf("%d\n%d",max,max2);
	return 0;
}
