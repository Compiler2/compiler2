#include <header.h>



int main_bench()
{
	int i;
	my_scanf("%d",&i);
	while(i)
	{
		my_printf("%d",i%10);
		i=i/10;
	}
}
