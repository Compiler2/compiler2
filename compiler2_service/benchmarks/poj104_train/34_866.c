#define NUM_ITER 150249

#include <header.h>

int xx(int k);
int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	if(n==1)
		my_printf("End");
	else
	{
		for(i=n;i>1;i=xx(i))
		{
			if(i%2==0)
			{
				
				my_printf("%d/2=%d\n",i,i/2);
			}
			if(i%2==1)
			{
				
				my_printf("%d*3+1=%d\n",i,i*3+1);
			}
		}
		my_printf("End");
	}
	return 0;
}
int xx(int k)
{
	int c;
	if(k%2==0)
		{
			c=k/2;
			
		}
		if(k%2==1)
		{
			c=k*3+1;
			
		}
		return c;
}