#include <header.h>

int main_bench()
{
	int n,i,x;my_scanf("%d",&n);
	if(n!=1)
	for(i=0;;i++)
	{
		if(n%2==1)
		{
			x=n*3+1;
			my_printf("%d*3+1=%d\n",n,x);if(x==1)break;
			n=x;
		}
		else
		{
			x=n/2;
			my_printf("%d/2=%d\n",n,x);if(x==1)break;
			n=x;
		}
	}
	my_printf("End");
}
