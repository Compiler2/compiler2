#define NUM_ITER 333844

#include <header.h>

int main_bench()
{
	int n,a,b;
	my_scanf("%d",&n);
	a=n;
	while(a!=1)
	{
		if(a%2!=0)
		{
			b=a*3+1;
			my_printf("%d*3+1=%d\n",a,b);
			a=b;
		}
		if(a%2==0)
		{
			b=a/2;
			my_printf("%d/2=%d\n",a,b);
			a=b;
		}
	}
	my_printf("End");
	return 0;
}
