#define NUM_ITER 1313421

#include <header.h>

int main_bench()
{
	int i,j,len;
	char a[101],*pa;
	gets(a);
	pa=&a[0];
	len=strlen(a);
	i=0;
	for(i=0;i<len-1;i++)
	{
		my_printf("%c",*(pa+i)+*(pa+i+1));
	}
	my_printf("%c",*(pa)+*(pa+len-1));
	return 0;
}
