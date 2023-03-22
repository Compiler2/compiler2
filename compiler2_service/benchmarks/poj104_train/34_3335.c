#include <header.h>


int function(int a)
{
	int b;
	if(a%2==1)
	{
		b=3*a+1;
		my_printf("%d*3+1=%d\n",a,b);
		return b;
	}
	else if(a%2==0)
	{
		b=a/2;
		my_printf("%d/2=%d\n",a,b);
		return b;
	}
}


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	if(n==1)
		my_printf("End\n");
	else
	{
		while(1)
		{
			n=function(n);
			if(n==1)
			{my_printf("End\n");break;}
		}
	}
}