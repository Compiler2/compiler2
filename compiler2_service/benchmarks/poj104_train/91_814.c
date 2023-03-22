#define NUM_ITER 1536352

#include <header.h>

int main_bench()
{
	char str[200];
	gets(str);
	char a;
	char *p,*q;
	p=&str[0];
	q=&str[1];
	a=*p;
	while (*q!='\0')
	{
		*p=*p+*q;
		p++;
		q++;
	}
	*p=*p+a;
	my_printf("%s\n",str);
}
