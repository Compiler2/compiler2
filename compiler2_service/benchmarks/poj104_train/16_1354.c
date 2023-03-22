#define NUM_ITER 1768634

#include <header.h>

int main_bench()
{
	int num,a,b,c,d;
	my_scanf("%d",&num);
	a=num/1000;
	b=(num-a*1000)/100;
	c=(num-a*1000-b*100)/10;
	d=num-a*1000-b*100-c*10;
	if(num==10000)
		my_printf("1\n");
	if(num>999)
	my_printf("%d%d%d%d\n",d,c,b,a);
		else if(num>99)
		    my_printf("%d%d%d\n",d,c,b);
		else if(num>9)
			my_printf("%d%d\n",d,c);
		else
			my_printf("%d\n",d);
		return 0;
}