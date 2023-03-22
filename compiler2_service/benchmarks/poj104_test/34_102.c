#define NUM_ITER 313862

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	while(1)
	{
		if(n==1) {my_printf("End");break;}
		if(n%2)
		{
			my_printf("%d*3+1=%d\n",n,3*n+1);
			n=3*n+1;
		}
		else 
		{
			my_printf("%d/2=%d\n",n,n/2);
			n/=2;
		}
	}
}

