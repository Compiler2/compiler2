#define NUM_ITER 63456

#include <header.h>

int main_bench()
{
	int n,a,i,b,c,max1,max2;
	my_scanf("%d",&n);
	i=1;
    my_scanf("%d",&a);
    my_scanf("%d",&b);
	if(a<b)
	{
		max1=b;
		max2=a;
	}
	else if(a>b)
	{
		max1=b;
		max2=a;
	}

	while(i<=(n-2))
	{
		my_scanf("%d",&c);
		if(c>=max2&&c<max1)
		{
			max2=c;
			max1=max1;
		}
		else if(c<max2)
		{
			max2=max2;
			max1=max1;
		}
		else if(c>=max1)
		{
			max2=max2;
			max1=c;
		}
		i++;
	}
	my_printf("%d\n",max1);
	my_printf("%d",max2);
}

