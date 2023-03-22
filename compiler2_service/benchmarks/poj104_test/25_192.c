#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	double sum=1;
	for(int i=1;i<=n;i++)
	{
	sum=sum*2;
	}

	my_printf("%.lf",sum);

	return 0;
}
