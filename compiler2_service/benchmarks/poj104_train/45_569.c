#include <header.h>

int main_bench()
{
	char a[100],b[100],*p;
	int i,j,k,m,n;
	my_scanf("%s %s",a,b);
	p=strstr(b,a);
	my_printf("%d",p-b);
}
	
	
	