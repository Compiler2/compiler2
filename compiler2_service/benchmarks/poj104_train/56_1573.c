#define NUM_ITER 2003774

#include <header.h>

int main_bench()
{
	int n,a,b,c,d,e;
	my_scanf("%d",&n);
	if(n>9999) 
	{
		a=n/10000,b=(n-a*10000)/1000,c=(n-a*10000-b*1000)/100,d=(n-a*10000-b*1000-c*100)/10,e=(n-a*10000-b*1000-c*100-d*10);
		my_printf("%d%d%d%d%d",e,d,c,b,a);
	}
	else if(n>999)
	{
			a=n/1000,b=(n-a*1000)/100,c=(n-a*1000-b*100)/10,d=(n-a*1000-b*100-c*10);
			my_printf("%d%d%d%d",d,c,b,a);
	}
	else if(n>99)
	{
			a=n/100,b=(n-a*100)/10,c=(n-a*100-b*10);
			my_printf("%d%d%d",c,b,a);
	}
    else if(n>9)
	{ 
		a=n/10,b=(n-a*100);
		my_printf("%d%d",b,a);
	}
	else
		my_printf("%d",n);
}
