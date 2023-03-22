#include <header.h>

int main_bench()
{
	int b,d[100],i=0;
	int a[21]={1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765};
	my_scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		my_scanf("%d",&d[i]);
	}
	i=0;
	for(i=0;i<b;i++)
	{
		my_printf("%d\n",a[d[i]-1]);
	}
	return 0;
}