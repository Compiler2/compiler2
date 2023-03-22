#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	for(;;)
	{
		if(n==1)
		{
			my_printf("End");
			break;
		}
		if(n%2==0)
		{
			n/=2;
			my_printf("%d/2=%d\n",2*n,n);
			continue;
		}
		if(n%2!=0)
		{
			my_printf("%d*3+1=%d\n",n,n*3+1);
			n=3*n+1;
			continue;
		}
		
	}
	return 0;
}