#define NUM_ITER 383737

#include <header.h>

int main_bench()
{
	int k;
	my_scanf("%d",&k);
	while(k!=1)
	{
		my_printf("%d",k);
		if(k%2==1)
		{
			k=k*3+1;
			my_printf("*3+1=%d\n",k);
		}
		else
		{
			k=k/2;
			my_printf("/2=%d\n",k);
		}
	}
	my_printf("End");
}