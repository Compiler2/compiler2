#define NUM_ITER 351671

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	if (n==0)
		my_printf("End");
	else 
	while (n!=1)
	{

		if (n%2==0)
		{
		n=n/2;
		my_printf ("%d/2=%d\n",n*2,n);
		}
	else if (n%2!=0)
	{
		my_printf("%d*3+1=%d\n",n,n*3+1);
		n=n*3+1;
	}
	}
	my_printf("End");
	return 0;


}
