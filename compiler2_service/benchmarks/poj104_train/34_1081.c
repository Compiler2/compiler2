#define NUM_ITER 403890

#include <header.h>

int main_bench()
{
	int n,t,i,m;
	my_scanf("%d",&n);
	if(n==1)
	{
		t=n;
	}
    
	else if(n%2==0)
	{
		t=n/2;
		my_printf("%d/2=%d\n",n,t);
	}
	else if(n!=1&&n%2!=0)
	{
		t=n*3+1;
		my_printf("%d*3+1=%d\n",n,t);
	}
	while(t!=1)
	{
		if(t%2==0)
		{
			m=t/2;
			my_printf("%d/2=%d\n",t,m);
			t=m;
		}
		else
		{
			m=t*3+1;
			my_printf("%d*3+1=%d\n",t,m);
			t=m;
		}
	}
	my_printf("End");
	return 0;
}