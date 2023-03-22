#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	if((n>=0)&&(n<=9))
		my_printf("%d",n);
	else
	{
	do
	{
		my_printf("%d",n%10);
		n=n/10;
	}while(n/10!=0);
	my_printf("%d",n);
	}
	return 0;
}


	