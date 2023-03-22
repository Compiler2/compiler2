#include <header.h>


int main_bench()
{
	int a,i;
	my_scanf("%d", &a);
	for (i=1;i<=4;i++)
	{
	    my_printf("%d", a%10);
		a=a/10;
		if (a<1) break;
	}	
	return 0;
}