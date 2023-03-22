#include <header.h>


int main_bench()
{
	int sum=0;
	int n;
	int i;
	my_scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%7==0||(i-7)%10==0||(i>70&&i<80))
		{
			sum=sum;
		}
		else
		{
			sum=sum+i*i;
		}
	}
	my_printf("%d\n",sum);
	return 0;
}



