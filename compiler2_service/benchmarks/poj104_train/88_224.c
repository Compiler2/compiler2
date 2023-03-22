#define NUM_ITER 1014458

#include <header.h>

int main_bench()
{
	int n=0;
	char *p;
	p=(char *)malloc(sizeof(char)*31);
	gets(p);
	while(*p!='\0')
	{
		if(*p>='0'&&*p<='9')
		{
			if(n!=0)my_printf("\n%c",*p);
			else my_printf("%c",*p);
			n=0;
		}
		else n++;
		p++;
	}
}

	