#include <header.h>

int main_bench()
{
	char c;
	while (c != '\n')
	{
		my_scanf("%c",&c);
		if(c >= '0' && c <= '9')
			my_printf("%c",c);
		else
			my_printf("\n");	
	}
	return 0;
}