#include <header.h>

main_bench()
{
	int i,j,k;
	int n,m;
	my_scanf("%d",&n);
	for(;;)
	{
		if(n==1)
		{
			my_printf("End");
			break;
			}
		
		if(n%2!=0)
	{
		m=n*3+1;
		my_printf("%d*3+1=%d\n",n,m);
		n=m;
		}
	else
	{
		m=n/2;
		my_printf("%d/2=%d\n",n,m);
		n=m;
		}
		}
	
	
	}
