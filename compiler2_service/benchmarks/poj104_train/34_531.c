#define NUM_ITER 329079

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	if(n==1)
		my_printf("End");
	else{
		while(n!=1)
		{
			if(n%2!=0)
			{
				my_printf("%d",n);
				n=n*3+1;
				my_printf("*3+1=%d\n",n);
			}
			if(n%2==0)
			{
				my_printf("%d",n);
				n=n/2;
				my_printf("/2=%d\n",n);
			}
		}
		if(n==1)
		{
			my_printf("End");
		}
	}
				
	return 0;
}