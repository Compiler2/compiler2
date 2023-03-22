#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	if(n<10) my_printf("%d",n);
	else while(n)
	{my_printf("%d",n%10);
	 n=n/10;
	}
	return 0;
}
