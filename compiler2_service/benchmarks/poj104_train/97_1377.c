#include <header.h>

int main_bench()
{
	int n,a=0,b=0,c=0,d=0,e=0;
	my_scanf("%d",&n);
	a=n/100;
	n-=a*100;
	b=n/50;
	n-=b*50;
	c=n/20;
	n-=c*20;
	d=n/10;
	n-=d*10;
	e=n/5;
	n-=e*5;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,n);

	return 0;
}
