#define NUM_ITER 74819

#include <header.h>

int main_bench()
{
	int n, i,a[100],sum=0;
	my_scanf("%d",&n);
    for(i=0; i<n; i++)
		a[i]=i+1;
	for(i=0; i<n; i++)
	{
		if(a[i]%7==0 || a[i]%10==7 || (int)a[i]/10==7)
			continue;
        sum += a[i] *a[i];
	}
	my_printf("%d",sum);
	return 0;
}
