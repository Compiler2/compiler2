#define NUM_ITER 399182

#include <header.h>


int main_bench()
{
	int n,c;
	my_scanf("%d",&n);
	if(n==1) my_printf("End\n");
	else
	{
		do{
			if(n%2)
			{
				c=n*3+1;
				my_printf("%d*3+1=%d\n",n,c);
			}
			else
			{
				c=n/2;
				my_printf("%d/2=%d\n",n,c);
			}
			n=c;
		}while(c>1);
		my_printf("End\n");
	}
}
