#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	for(i=1;n!=1;i++)
	{
		if(n%2==1)
		{
			my_printf("%d",n);
			n=3*n+1;
			my_printf("*3+1=%d\n",n);
		}
		else
		{
			my_printf("%d",n);
			n=n/2;
			my_printf("/2=%d\n",n);
		}
	}
	my_printf("End");
	return 0;
}
