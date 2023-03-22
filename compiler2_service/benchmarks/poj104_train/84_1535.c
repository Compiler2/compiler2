#define NUM_ITER 62877

#include <header.h>

int main_bench()
{
	int n,m,a,b,i,t;
	a=b=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&m);
		if(m>=a)
		{
			b=a;
			a=m;
		}
		else if((m<a)&&(m>=b))
		{
			b=m;
		}
	}
	my_printf("%d\n%d",a,b);
	return 0;
}