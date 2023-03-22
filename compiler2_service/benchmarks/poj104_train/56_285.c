#include <header.h>

int main_bench()
{
	int n,m,a,b;
	my_scanf("%d",&n);
	a=n;
	m=0;
	while(a!=0)
	{	b=a%10;a=a/10;
		m=m*10+b;}
		my_printf("%d",m);
}