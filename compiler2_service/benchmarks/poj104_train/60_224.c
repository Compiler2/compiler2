#define NUM_ITER 17702

#include <header.h>

int main_bench()
{
	int n, a_, i, j=0, isbreak, a[10000], count=0, count_=0;
	my_scanf("%d", &n);
	for(a_=1; a_<=n; a_++)
	{	
		for(i=2; i<=a_; i++)
		{
			if(a_%i==0 && i!=a_)
				break;
			if(i==a_)
			{
				isbreak=1;
				break;
			}
		}
		if(isbreak==1)
		{
			a[j]=a_;
		    j++;
		}
		isbreak=0;
	}
	count=j;
	for(j=0; j<count; j++)
	{
		if(a[j+1]-a[j]==2)
		{
			count_++;
			my_printf("%d %d\n", a[j], a[j+1]);
		}
	}
	if(count_==0)
		my_printf("empty\n");
	return 0;
}
