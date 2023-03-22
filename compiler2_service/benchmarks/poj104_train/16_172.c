#include <header.h>


int main_bench()
{
	int n, m;
	my_scanf("%d",&n);
	if(n==0)
		my_printf("%d",0);
	else
	{
		while(n!=0)
		{
			m=n%10;
			my_printf("%d",m);
			n=n/10;
		}
	}
	return 0;
}


