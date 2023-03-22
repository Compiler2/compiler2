#include <header.h>


int even(int a)
{
	int b;
	b=a/2;
	return(b);
}

int odd(int a)
{
	int b;
	b=a*3+1;
	return(b);
}

int main_bench()
{
	int n,m;
	my_scanf("%d",&n);
	if(n==1)
	{
		my_printf("End");
		return;
	}
	while(1)
	{
		if(n%2==0)
		{
			m=even(n);
			my_printf("%d/2=%d\n",n,m);
			n=m;
			if(m==1)
			{
				my_printf("End");
				break;
			}
		}
		else
		{
			m=odd(n);
			my_printf("%d*3+1=%d\n",n,m);
			n=m;
			continue;
			if(m==1)
			{
				my_printf("End");
				break;
			}
		}
	}
}