#define NUM_ITER 7783

#include <header.h>


int main_bench()
{
	int a[20000],i,j,n;
	my_scanf("%d",&n);
	
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	my_printf("%d",a[0]);

	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j]) break;
		
		if(j==i-1)
		{
			my_printf(" ");
			my_printf("%d",a[i]);
		}
		}
			
		

	return 0;
}