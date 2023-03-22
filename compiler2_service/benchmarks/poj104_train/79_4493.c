#define NUM_ITER 34534

#include <header.h>

int main_bench()
{
	int m,n,a,b,c;
	int hz[300];
	my_scanf("%d%d",&n,&m);
	while((n!=0)&&(m!=0))
	{
		c=0;
		for(a=2;a<=n;a++)
		{
			c=(c+m)%a;
		}
		my_printf("%d\n",c+1);
		my_scanf("%d%d",&n,&m);
	}
	return 0;
}
