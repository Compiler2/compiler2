#define NUM_ITER 1348967

#include <header.h>

int main_bench()
{
	int n,p,q,i;
	my_scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		p=i*100;
		q=(i+1)*100;
		if(n>p&&n<q)
		{
			my_printf("%d\n",i);
				break;
		}
	}
	n=n-100*i;
		if(n>=50)
		{
			i=1;
			my_printf("1\n");
		}
		else
		{
			i=0;
			my_printf("0\n");
		}
	n=n-i*50;
	for(i=0;i<3;i++)
	{
		p=i*20;
		q=(i+1)*20;
		if(p<=n&&q>n)
		{
			my_printf("%d\n",i);
			break;
		}
	}
	n=n-i*20;
	if(n>=10)
	{
		i=1;
		my_printf("1\n");
	}
	else
	{
		i=0;
		my_printf("0\n");
	}
	n=n-i*10;
	if(n>=5)
	{
		i=1;
		my_printf("1\n");
	}
	else
	{
		i=0;
		my_printf("0\n");
	}
	n=n-i*5;
	my_printf("%d",n);
	return 0;
	}