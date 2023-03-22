#include <header.h>

int main_bench()
{
	int n,s,r;
	my_scanf("%d",&n);
	if(n==1)
	{
		my_printf("End");
		return 0;
	}
	s=n;
	for(r=1;s!=1;r++)
	{
		if(n%2!=0)
		{
			s=n*3+1;
			my_printf("%d*3+1=%d\n",n,s);
			n=s;
		}
		else if(n%2==0)
		{
			s=n/2;
			my_printf("%d/2=%d\n",n,s);
			n=s;
		}
	}
	my_printf("End");
	return 0;
}