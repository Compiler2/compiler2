#define NUM_ITER 1635645

#include <header.h>

int main_bench()
{
	int a,b,c,d,f;
	my_scanf("%d",&a);
	if(a/10==0)
	{
		my_printf("%d",a);
	}
	else if(a/100==0)
	{
		b=a/10;
	c=a%10;
	my_printf("%d%d",c,b);
	}
		else if(a/1000==0)
		{
		b=a/100;
	c=(a-b*100)/10;
		d=a%10;
	my_printf("%d%d%d",d,c,b);
		}
	else if(a/10000==0)
	{
		b=a/1000;
	c=(a-b*1000)/100;
	d=(a-b*1000-c*100)/10;
	f=a%10;
	my_printf("%d%d%d%d",f,d,c,b);
	}
	return 0;
}
