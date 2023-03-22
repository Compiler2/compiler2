#define NUM_ITER 80943

#include <header.h>

int main_bench()
{
	int i,n;
	int sum=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
		{
			continue;
		}
		else
		{
			if((int)i/10==7)
			{
				continue;
			}
			else
			{
				if(i%10==7)
				{
					continue;
				}
				else
				{
					sum=sum+i*i;
				}
			}
		}
	}
	my_printf("%d",sum);
	return 0;
}

