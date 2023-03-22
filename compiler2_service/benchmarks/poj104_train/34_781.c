#include <header.h>

int main_bench()
{
	int i,j,k,m,n;
	my_scanf("%d",&n);
	if(n==1)
	my_printf("End\n");
	else
	{
		for(i=n;i!=1;)
		{
			if(i%2==0)
			{
				j=i/2;
				my_printf("%d/2=%d\n",i,j);
				i=j;
			}
			else
			{
				j=i*3+1;
				my_printf("%d*3+1=%d\n",i,j);
				i=j;
			}
		}
		my_printf("End\n");
	}
}
	
				
