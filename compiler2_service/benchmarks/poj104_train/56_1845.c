#include <header.h>

int main_bench()
{
	int a,i,n;
	my_scanf("%d",&a);
	i=1;
	while(i!=0)
	{
		n=a%10;
		i=a/10;
		a=i;
		my_printf("%d",n);
	}
}
