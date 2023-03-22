#include <header.h>

int main_bench()
{
	int n,y=0;
	my_scanf("%d",&n);
	while(n>9)
	{
		y=y+n-n/10*10;
		n=n/10;
		y*=10;
	}
	y=y+n;
	my_printf("%d\n",y);
	return 0;
}

