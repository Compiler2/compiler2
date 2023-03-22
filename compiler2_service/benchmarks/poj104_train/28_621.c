#define NUM_ITER 1527818

#include <header.h>

int main_bench()
{
	char str[300][40],c;
	int i;
	for(i=0;;i++)
	{
		my_scanf("%s",&str[i]);
	    c=getchar();
		if(c!=' ') break;
		my_printf("%d,",strlen(str[i]));
	}
	my_printf("%d",strlen(str[i]));
}