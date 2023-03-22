#define NUM_ITER 1132304

#include <header.h>


int main_bench()
{
	int i,n,m=1,c,g;
	my_scanf("%d",&n);
	for (i=1;i<=5;i++)
	{
		m=m*10;
		if ((n/m)==0)
		{
			c=i;
			break;
		}
	}
	for (i=1;i<=c;i++)
	{
		g=n%10;
		if (g==0)
		{
			my_printf("0");
		}
		else 
		{
			my_printf("%d",g);
		}
		n=n/10;
	}
	my_printf("\n");
	return 0;
}

