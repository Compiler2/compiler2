#include <header.h>

int main_bench()
{
	int digui(int n);
	int n,k;
	my_scanf("%d",&n);
	k=digui(n);
	my_printf("End\n");
}
int digui(int n)
{
	if(n==1) return 0;
	else if(n%2==1)
	{
		my_printf("%d*3+1=%d\n",n,n*3+1);
	    return	digui(n*3+1);
	}
	else if(n%2==0)
	{
		my_printf("%d/2=%d\n",n,n/2);
		return digui(n/2);
	}
}
