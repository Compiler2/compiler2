#define NUM_ITER 58670

#include <header.h>

int main_bench()
{
	int n,sum,a,i,min,max,ci,ca;
	float ave;
	my_scanf("%d",&n);
	my_scanf("%d",&a);
	min=max=sum=a;
	ci=ca=1;
	for(i=1;i<n;i++)
	{
		my_scanf("%d",&a);
		if(a>max)
		{
			max=a;
			ca=1;
		}
		else if(a==max)
			ca++;
		if(a<min)
		{
			min=a;
			ci=1;
		}
		else if(a==min)
            ci++;
		sum=sum+a;
	}
	ave=(float)sum/n;
	if(2*ave>(max+min))
	{
		for(i=0;i<ci-1;i++)
			my_printf("%d,",min);
		my_printf("%d\n",min);
	}
	else if(2*ave<(max+min))
	{
		for(i=0;i<ca-1;i++)
			my_printf("%d,",max);
		my_printf("%d\n",max);
	}
	else
	{
		for(i=0;i<ci;i++)
			my_printf("%d,",min);
		for(i=0;i<ca-1;i++)
			my_printf("%d,",max);
		my_printf("%d\n",max);
	}
}