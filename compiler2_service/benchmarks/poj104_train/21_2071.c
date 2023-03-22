#define NUM_ITER 61859

#include <header.h>

int main_bench()
{
	long j;
	int i,N,a[301]={0};
	int sum,max,min;
	my_scanf("%d",&N);
	my_scanf("%d",&a[0]);
	sum=max=min=a[0];
	for(i=1;i<N;i++)
	{
		my_scanf("%d",&a[i]);
		sum+=a[i];
		if(a[i]>max)max=a[i];
		else if(a[i]<min)min=a[i];
	}
	j=(max*N-sum)-(sum-min*N);

	if(j>0)my_printf("%d",max);
	else if(j==0)my_printf("%d,%d",min,max);
	else my_printf("%d",min);
}