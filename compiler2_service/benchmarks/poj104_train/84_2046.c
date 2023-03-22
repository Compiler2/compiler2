#include <header.h>

int main_bench()
{
	int i,n,a[100],max,min,x,y;
	my_scanf("%d",&n);
    my_scanf("%d",&x);
    my_scanf("%d",&y);
	if(x>=y)
	{
		max=x;
		min=y;
	}
	else
	{
		max=y;
		min=x;
	}
	for(i=1;i<(n-1);i++)
	{
		my_scanf("%d",&(a[i]));
		if(a[i]>max)
		{
			min=max;
			max=a[i];
        }
		else if(a[i]<max&&a[i]>min)
		{
			min=a[i];
		}
	}
	my_printf("%d\n",max);
	my_printf("%d",min);
	return 0;
}