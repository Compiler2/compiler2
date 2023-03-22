#define NUM_ITER 9816

#include <header.h>

int main_bench()
{
	int k,d,a[300]={0},i,l=0,p;
	my_scanf("%d",&k);
	while(k)
	{
		k=k-1;
		p=0;
		my_scanf("%d",&d);
		for(i=0;i<l;i=i+1)
			if (d==a[i])
			{
				p=1;
				break;
			}
		if (p==0)
		{
			a[l]=d;
			l++;
		}
	}
	for(i=0;i<l-1;i=i+1)
		my_printf("%d,",a[i]);
	my_printf("%d",a[l-1]);
	return 0;
}
