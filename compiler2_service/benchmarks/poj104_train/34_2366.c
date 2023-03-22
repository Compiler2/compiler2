#include <header.h>

int n;

int main_bench()
{
	my_scanf("%d",&n);
	while (n%2==1)
	{
		if(n==1)
		{
			my_printf("End");
			break;
		}
		my_printf("%d*3+1=",n);
		n=n*3+1;
		my_printf("%d\n",n);
		while(n%2==0)
		{
			my_printf("%d/2=",n);
			n=n/2;
			my_printf("%d\n",n);
		}
		if(n==1)
		{
			my_printf("End");
			break;
		}
	}
	while (n%2==0)
	{
		my_printf("%d/2=",n);
		n=n/2;
		my_printf("%d\n",n);
		if(n==1)
		{
			my_printf("End");
			break;
		}
		while (n%2==1)
		{
			my_printf("%d*3+1=",n);
			n=n*3+1;
			my_printf("%d\n",n);
		
	
		}
	}
	return 0;
}