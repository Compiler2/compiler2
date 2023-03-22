#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i=1;
	int sum=0;
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
		{
		}
		else if(i%10==7)
		{
		}
		else if((i/10)%10==7)
		{
		}
		else
		{
			sum=sum+i*i;
		}
	}
	my_printf("%d",sum);
	return 0;
}