#define NUM_ITER 394206

#include <header.h>


int main_bench()
{
	int n,a;
	my_scanf("%d",&n);
	if(n==1)
		my_printf("End");
	else{
		do
		{
			if(n%2==0)
			{
				a=n;
				n=a/2;
				my_printf("%d/2=%d\n",a,n);
			}
			else{
				a=n;
				n=a*3+1;
               	my_printf("%d*3+1=%d\n",a,n);
				
				
			}
			
			
			
			
		}
		while(n!=1);
		
		
		my_printf("End");
	}
	return 0;
}