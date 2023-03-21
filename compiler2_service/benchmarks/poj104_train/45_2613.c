#include <header.h>

int main_bench()
{
	char a[50],b[50];
	char *p;
	scanf("%s%s",a,b);
	p=strstr(b,a);
	printf("%d",p-b);
	return 0;
}
