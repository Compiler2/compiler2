#define NUM_ITER 1530607

#include <header.h>

main_bench()
{
	int a;
	my_scanf("%d",&a);
        int x,y;
	x=a%10;
	y=a/10;
	my_printf("%d",x);
	while(y>0)
	{
		x=y%10;
		y=y/10;
		my_printf("%d",x);
	}
}
