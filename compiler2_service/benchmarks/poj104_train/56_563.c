#define NUM_ITER 2199778

#include <header.h>

int main_bench()
{
	int i;
	my_scanf("%d",&i);
	if(i<10)
		my_printf("%d\n",i);
	if(i>10&&i<100)
	{
		i=i%10*10+i/10;
		my_printf("%d\n",i);
	}
	if(i>100&&i<1000)
	{
		i=i%10*100+i%100/10*10+i/100;
		my_printf("%d\n",i);
	}
	if(i>1000&&i<10000)
	{
		i=i%10*1000+i%1000%100/10*100+i%1000/100*10+i/1000;
		my_printf("%d\n",i);
	}
	if(i>10000&&i<99999)
	{
		i=i%10*10000+i%10000%1000%100/10*1000+i%10000%1000/100*100+i%10000/1000*10+i/10000;
		my_printf("%d\n",i);
	}
	return 0;
}
