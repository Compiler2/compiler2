#define NUM_ITER 321700

#include <header.h>

main_bench()
{
	int n,m;
	my_scanf("%d",&n);
	while(1)
	{
	if(n%2==0 && n!=1) 
	{
		m=n/2;
		my_printf("%d/2=%d\n",n,m);
		n=m;
	}
	if(n%2!=0 && n!=1) 
	{
		m=n*3+1;
		my_printf("%d*3+1=%d\n",n,m);
		n=m;
	}
	if(n==1) {my_printf("End");
	          break;
	         }
	}
}
