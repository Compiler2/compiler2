#define NUM_ITER 2447199

#include <header.h>

int main_bench()
{
	char a,b,c,d;
	int e,f,g,h;
	a='z';
	b='q';
	c='s';
	d='l';
	e=20;
	f=40;
	g=10;
	h=50;
	my_printf("%c %d\n",d,h);
	my_printf("%c %d\n",b,f);
	my_printf("%c %d\n",a,e);
	my_printf("%c %d\n",c,g);
	return 0;
}