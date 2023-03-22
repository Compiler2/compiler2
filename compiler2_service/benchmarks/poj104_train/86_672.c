#include <header.h>

int main_bench()
{
	int i,j,n,cishu,num[100],sum;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&cishu);
		for(j=1;j<=cishu;j++)
		{
			my_scanf("%d",&num[j-1]);
		}
		if(cishu*3+num[cishu-1]<=60)
		{
			sum=60-3*cishu;
            my_printf("%d\n",sum);
		}
		else
		{
			for(j=1;j<=cishu;j++)
			{
				if(j*3+num[j-1]>60&&j*3+num[j-1]<=63)
				{
					my_printf("%d\n",num[j-1]);
					break;
				}
				else if(j*3+num[j-1]>63)
				{
					sum=60-3*(j-1);
					my_printf("%d\n",sum);
					break;
				}
			}
		}
	}
	return 0;
}

    