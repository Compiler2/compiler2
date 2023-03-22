#define NUM_ITER 1060457

#include <header.h>

int main_bench()
{
	int i;
	char s[50],w[50];
	char * p;
	my_scanf("%s",s);
	my_scanf("%s",w);
	p=strstr(w,s);
	i=p-w;
	my_printf("%d",i);
	return 0;
}