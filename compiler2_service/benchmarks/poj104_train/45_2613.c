#include <header.h>

int main_bench()
{
	char a[50],b[50];
	char *p;
	my_scanf("%s%s",a,b);
	p=strstr(b,a);
	my_printf("%d",p-b);
	return 0;
}
