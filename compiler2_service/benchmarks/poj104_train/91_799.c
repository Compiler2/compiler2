#define NUM_ITER 249923

#include <header.h>

int main_bench()
{
	char *p;
	p=(char *)malloc(1000*sizeof(char));
	gets(p);
	int i;
	int L=strlen(p);
	for(i=0;i<L-1;i++)
		my_printf("%c",*(p+i)+*(p+i+1));
	my_printf("%c\n",*(p+L-1)+*p);
}
