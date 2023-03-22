#define NUM_ITER 25791

#include <header.h>

int main_bench()
{
	int n,i;
	float per,per1,a1,b1,a,b;
	my_scanf("%d",&n);
	my_scanf("%f%f",&a1,&b1);
	per1=b1/a1;
	for(i=1;i<n;i++)
	{
		my_scanf("%f%f",&a,&b);
		per=b/a;
		if(per-per1>0.05)
		{
			my_printf("better\n");
		}
		else if(per1-per>0.05)
		{
			my_printf("worse\n");
		}
		else
		{
			my_printf("same\n");
		}
	}
	return 0;
}