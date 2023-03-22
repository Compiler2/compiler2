#include <header.h>

int main_bench()
{
	int a,b;
	my_scanf("%d",&a);
	if(a==0) my_printf("0");
	else
	{
	while(a!=0)
	{
		b=a-a/10*10;
		a=a/10;
		my_printf("%d",b);
	}
	}
	return 0;
}
