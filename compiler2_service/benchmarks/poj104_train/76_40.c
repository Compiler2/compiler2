#define NUM_ITER 12702

#include <header.h>

int main_bench()
{
	int n,a[50000],b[50000],i,j,max,min,c[10001]={0},k=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a[i],&b[i]);
	}
	min=a[0];
	max=b[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
		if(b[i]>max)
			max=b[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=a[i];j<b[i];j++)
		{
			c[j]++;
		}
	}
	for(i=min;i<max;i++)
	{
		if(c[i]==0)
		{
			my_printf("no");
			k++;
			break;
		}
	}
	if(k==0)
		my_printf("%d %d",min,max);
}








