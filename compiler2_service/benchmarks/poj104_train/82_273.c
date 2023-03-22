#define NUM_ITER 36776

#include <header.h>


int main_bench()
{
	int n,a,b,i;
	int count=0,t=0;
	my_scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		my_scanf("%d %d",&a,&b);
		if (a>=90 && a<=140 && b>=60 && b<=90)
			count++;
		else
			if (count>t)
			{
				t=count;
				count=0;
			}
			else
				count=0;
	}
	if (count>t)
	{
		my_printf("%d\n",count);
	}
	else
	{
		my_printf("%d\n",t);
	}
	return 0;
}