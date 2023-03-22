#define NUM_ITER 38816

#include <header.h>

float juedui(float x)
{
	if(x>=0)
	{
		return x;
	}
	else
	{
		return (-1*x);
	}
}
int main_bench()
{
	int x[100];
	int n;
	int i;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&x[i-1]);
	}
	float aver=0;
	for(i=1;i<=n;i++)
	{
		aver+=x[i-1];
	}
	aver/=n;
	float max=x[0]-aver;
	for(i=1;i<=n;i++)
	{
		if(max<juedui(x[i-1]-aver))
		{
			max=juedui(x[i-1]-aver);
		}
		else
		{}
	}
	int count=0;
	for(i=1;i<=n;i++)
	{
		if(juedui(x[i-1]-aver)==max)
		{
			if(count==0)
			{
				my_printf("%d",x[i-1]);
			}
			else
			{
				my_printf(",%d",x[i-1]);
			}
			count++;
		}
		else
		{}
	}
	return 0;
}