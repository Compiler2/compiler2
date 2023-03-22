#define NUM_ITER 1512341

#include <header.h>

char c[30];
int main_bench()
{
	char *p;
	p=c;
	gets(c);
    while(*p!='\0')
	{
		while(*p<'0'||*p>'9')
		{p+=1;if(*p=='\0')break;}
		my_printf("%c",*p);
		p+=1;
		if(*p<'0'||*p>'9')my_printf("\n");
	}
}
