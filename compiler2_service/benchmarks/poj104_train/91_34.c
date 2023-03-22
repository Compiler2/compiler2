#define NUM_ITER 1081830

#include <header.h>



int main_bench()
{
	char str[101],*p=str,*ps=str;
	gets(str);
	for(;p<str+strlen(str)-1;p++)
	{
		my_printf("%c",*p+*(p+1));
	}
	my_printf("%c",*p+*ps);
	return 0;
}

