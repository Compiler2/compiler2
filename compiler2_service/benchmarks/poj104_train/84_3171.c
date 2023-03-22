#include <header.h>


int main_bench()
{
	int n,i,x;
	int first,second;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&x);
		if(i==0)
		{
			first=x;
			second=x;
		}
		else if(i==1)
		{
			if(x>first)
			{
				second=first;
				first=x;
			}
			else if(x=first)
			{
				second=x;
				first=x;
			}
		}
		else
		{
			if(x>first)
			{
				second=first;
				first=x;
			}
			else if(x>second)
			{
				second=x;
			}
		}
	}
	my_printf("%d\n",first);
	my_printf("%d\n",second);
	return 0;
}
