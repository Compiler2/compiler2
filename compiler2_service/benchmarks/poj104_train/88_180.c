#define NUM_ITER 897476

#include <header.h>

int main_bench()
{
	char *p;
	int i;
	p=(char *)malloc(30*sizeof(char));
	gets(p);
	for (i=0;i<strlen(p);i++)
	{
		if (*(p+i)>=48&&*(p+i)<=57)
			my_printf("%c",*(p+i));
		else if ((!(*(p+i)>=48&&*(p+i)<=57))&&(*(p+i+1)>=48&&*(p+i+1)<=57))
			my_printf("\n");
	}
	return 0;
}