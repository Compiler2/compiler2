#define NUM_ITER 1290151

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int x1,x2,x3,x4,x5;
	x1=n%10;
	x2=((n-x1)%100)/10;
	x3=((n-x1-x2*10)%1000)/100;
	x4=((n-x1-x2*10-x3*100)%10000)/1000;
	x5=((n-x1-x2*10-x3*100-x4*1000)%100000)/10000;
    if(x5!=0)
	{
		my_printf("%d%d%d%d%d",x1,x2,x3,x4,x5);
	}
	else if(x5==0&&x4!=0)
	{
		my_printf("%d%d%d%d",x1,x2,x3,x4);
	}
	else if(x5==0&&x4==0&&x3!=0)
	{
		my_printf("%d%d%d",x1,x2,x3);
	}
	else if(x5==0&&x4==0&&x3==0&&x2!=0)
	{
		my_printf("%d%d",x1,x2);
	}
	return 0;
}