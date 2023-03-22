#include <header.h>

int gujiao(int x);
int main_bench()
{
	int x;
	my_scanf("%d",&x);
	if(x==1)
	{
		my_printf("End");
	}
	else
	{
		while(x!=1)
		{
			x=gujiao(x);
			if(x==1)
			{
				my_printf("End");
				break;
			}
			
		}
	}
	return 0;
}
int gujiao(int x)
{
	int x0=x;
	if(x%2==1)
	{
		x=3*x0+1;
		my_printf("%d*3+1=%d\n",x0,x); 
	}
	else
	{
		x=x0/2;
		my_printf("%d/2=%d\n",x0,x); 
	}
	return x;
}