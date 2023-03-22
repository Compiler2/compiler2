#define NUM_ITER 36213

#include <header.h>

int main_bench()
{
	int n,i,time,max;
	time=0;
	max=0;
	my_scanf("%d",&n);
	int a,b;
	for(i=1;i<=n;i++)
	{
		my_scanf("%d %d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90)
		{
		time++;
			if(time>max)
			{
		    max=time;
			}
			else
			{
			max=max;
			}
						
		}
		else
		{
			if(time>max)
			{
		    max=time;
			}
			else
			{
			max=max;
			time=0;
			}
		}
	}
	my_printf("%d",max);
	return 0;
}