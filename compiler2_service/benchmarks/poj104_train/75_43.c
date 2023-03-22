#define NUM_ITER 34164

#include <header.h>

int main_bench()
{
	int time[1000]={0},a[5000],b[5000],i=1,m,max=0,k,n;
	my_scanf("%d",&a[0]);
	while(my_scanf(",%d",&m))
	{
		a[i]=m;
		i++;
	}
	my_scanf("%d",&b[0]);
	i=1;
	while(my_scanf(",%d",&m))
	{
		b[i]=m;
		i++;
	}
	n=i;
	for(i=0;i<n;i++)
	{
		for(k=a[i];k<b[i];k++)
		{
			time[k]++;
		}
	}
	for(i=0;i<1000;i++)
	{
		if(time[i]>max)
			max=time[i];
	}
	my_printf("%d %d",n,max);
}

