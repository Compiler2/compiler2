#define NUM_ITER 285502

#include <header.h>

int main_bench()
{
	int n,m;
	my_scanf("%d",&n);
	if(n==1)my_printf("End");
	if(n!=1)
	{
		while(n!=1)
		{
			if(n%2==0)
			{
			  m=n/2;
			  my_printf("%d/2=%d\n",n,m);
			}
		    if(n%2!=0)
			{
			  m=n*3+1;
			  my_printf("%d*3+1=%d\n",n,m);
			}
			n=m;
		}
		my_printf("End");
	}
}