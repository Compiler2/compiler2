#define NUM_ITER 35904

#include <header.h>

int main_bench()
{
	int i,n,a[100],b[100],sum=0,max=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d %d",&a[i],&b[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>=90 && a[i]<=140 && b[i]>=60 && b[i]<=90)
		{
			sum++;
		}
		else sum=0;
		if(sum>=max)
			max=sum;
	}
	my_printf("%d\n",max);
	return 0;
}
		
