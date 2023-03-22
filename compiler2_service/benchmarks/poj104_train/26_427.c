#include <header.h>

main_bench()
{
	char a[1000],*b;
	gets(a);
	for (b = a;*b != 0;b++)
		if(!(*b == ' ' && *(b - 1) == ' '))
			my_printf("%c",*b);
	my_printf("\n");
	getchar();
}
