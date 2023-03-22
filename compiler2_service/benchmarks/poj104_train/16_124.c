#define NUM_ITER 1291257

#include <header.h>





int main_bench()
{
	int n,b,c=11,i=1,j=1;
	my_scanf("%d",&n);
	
	if (n==0)
		my_printf("%d",n);
	else
		
		
		while(n>0)
		{
			
			b=n%10;
			my_printf("%d",b);	
			n=n/10;
			
			
		} 
		
		return 0;
}
