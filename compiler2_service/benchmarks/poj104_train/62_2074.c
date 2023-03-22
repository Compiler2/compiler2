#define NUM_ITER 414827

#include <header.h>

main_bench()
{
	char c,d;
	while((c=getchar())!='\n')
	{
		if(c!=' '||d!=' ') putchar(c);
	    d=c;
	}
	my_printf("\n");
	return 0;
}