#include <header.h>

int main_bench()
{
	int n,sum=0,i=1;
	my_scanf("%d",&n);
	while(i<=n)
	{
		if(i%7==0)
		{
			i++;
			continue;
		}
		if(i/10==7)
		{
			i++;
			continue;
		}
		if(i%10==7)
		{
			i++;
			continue;
		}
	    sum+=i*i;
		i++;
	}
	my_printf("%d",sum);
}