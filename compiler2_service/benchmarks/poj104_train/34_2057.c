#include <header.h>

int main_bench()
{
	int a,t;
	int i,j;
	my_scanf("%d",&a);
	if(a==1)
	{
		my_printf("End\n");
	}
	else 
	{
		for(;a!=1;)
		{
			if(a%2!=0)
			{	
				my_printf("%d*3+1=%d\n",a,a*3+1);
				a=a*3+1;
			}
			else
			{
				my_printf("%d/2=%d\n",a,a/2);
				a=a/2;
			}
		}
		if(a==1)
		{
		my_printf("End\n");
		}
	}

	
	
	
	return 0;
}