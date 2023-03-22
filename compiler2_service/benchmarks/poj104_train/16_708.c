#define NUM_ITER 1394171

#include <header.h>

int main_bench()
{
	int x,y=0;
	my_scanf("%d",&x);
	if(x<10)
		my_printf("%d",x);
	else
	{
	while(x>0)
	{
		y=x%10+10*y;
			x=x/10;
	}
	if(x%10!=0)
	my_printf("%d",y);
	else
	my_printf("%03d",y);
	}
	return 0;
}
