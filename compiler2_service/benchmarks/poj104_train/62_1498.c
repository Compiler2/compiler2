#define NUM_ITER 1541749

#include <header.h>

int main_bench()
{
	char *p,str[1000];
	p=str;
	gets(p);
	for(;*p!='\0';p++)
	{
		if(*p!=' ')
			my_printf("%c",*p);
		else if((*p==' ')&&(*(p+1)!=' '))
			my_printf("%c",*p);
	}
}