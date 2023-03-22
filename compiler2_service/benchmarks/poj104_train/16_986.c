#define NUM_ITER 589029

#include <header.h>

int main_bench()
{
	char *p;
	p=(char *)malloc(sizeof(char)*8);
	int i;
	for(i=0;i<6;i++)
	{
		my_scanf("%c", p);
		if(*p=='\n')
		{
			*p=0;
			break;
		}
		p++;
	}
	for(i=i-1;i>=0;i--)
	{
		p--;
		my_printf("%c", *p);
	}
	return 0;
}