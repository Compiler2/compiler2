#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	for(;;)
	{   
		if(n==1) break;
		if(n%2==1)
		{
		   
		   my_printf("%d*3+1=%d",n,n*3+1);
		   n=n*3+1;
		}
		    
		else 
		{
			my_printf("%d/2=%d",n,n/2);
			n=n/2;
		}	
		my_printf("\n");
		
	}
	my_printf("End");
}