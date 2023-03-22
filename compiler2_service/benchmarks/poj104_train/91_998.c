#define NUM_ITER 1057167

#include <header.h>

int main_bench()
{
	int i;
	char a[130];
	char *p=a;
	gets(a);
	for(i=1;i<strlen(a);i++)
	putchar(*p+*(++p));
	putchar(*p+*a);
	return 0;
}