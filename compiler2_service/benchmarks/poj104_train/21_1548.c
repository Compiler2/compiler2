#define NUM_ITER 39000

#include <header.h>

int main_bench()
{
	int n,i,count=0;
	double a[1000]={0.0},total=0.0,average,max=-1.0;
    my_scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%lf", &a[i]);
		total+=a[i];
	}
	average=total/n;
	for(i=1;i<=n;i++)
	{
		if(fabs(a[i]-average)>max) max=fabs(a[i]-average);
	}
	for(i=1;i<=n;i++)
	{
		if(fabs(fabs(a[i]-average)-max)<0.001)
		{
			if(count==0)
			{
				my_printf("%.0f", a[i]);
				count+=1;
			}
			else my_printf(",%.0f", a[i]);
		}
	}
	my_printf("\n");
	return 0;
}


