#define NUM_ITER 36715

#include <header.h>

int main_bench()
{
	int n;
	int a,b;
	int sum=0;
	int x=0;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		my_scanf("%d %d",&a,&b);
		if(90<=a&&a<=140&&60<=b&&b<=90)
		{
			sum++;
		}
		else
		{
			sum=0;
		}
		if(sum>=x)
		{
			x=sum;
		}
	}
	my_printf("%d",x);
	return 0;
}