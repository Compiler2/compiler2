#include <header.h>

int main_bench()
{
	int n,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
	my_scanf("%d",&n);
	for(;;)
	{
		if(n-100>=0)
		{
			a1+=1;
			n-=100;
		}
		else break;
	}
	for(;;)
	{
		if(n-50>=0)
		{
			a2+=1;
			n-=50;
		}
		else break;
	}
	for(;;)
	{
		if(n-20>=0)
		{
			a3+=1;
			n-=20;
		}
		else break;
	}
	for(;;)
	{
		if(n-10>=0)
		{
			a4+=1;
			n-=10;
		}
		else break;
	}
	for(;;)
	{
		if(n-5>=0)
		{
			a5+=1;
			n-=5;
		}
		else break;
	}
	for(;;)
	{
		if(n-1>=0)
		{
			a6+=1;
			n-=1;
		}
		else break;
	}
	my_printf("%d\n",a1);
	my_printf("%d\n",a2);
	my_printf("%d\n",a3);
	my_printf("%d\n",a4);
	my_printf("%d\n",a5);
	my_printf("%d\n",a6);
	return 0;
} 