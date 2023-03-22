#define NUM_ITER 1204210

#include <header.h>


int main_bench()
{
	char c[30],*a;
	int i,d;
	gets(c);
	d=strlen(c);
	for(a=c+0;a<=c+d-1;a++)
		{
			if(isdigit(*a))
			my_printf("%c",*a);
			else if(!isdigit(*a)&&a>(c+0)&&isdigit(*(a-1)))
				my_printf("\n");
	}
	return 0;
}