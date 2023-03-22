#define NUM_ITER 2500

#include <header.h>

int main_bench()
{
	int a[300], b[300];
	int n, i, j;
	float max, sum = 0, ave;
	my_scanf("%d", &n);
	for(i = 0;i < n;i ++)
	{	
		my_scanf("%d",&a[i]);
		sum += a[i];
	}
	ave = sum / n;
	for(i = 0;i < n;i ++)
	{
		for(j = 0;j < n - 1;j ++)
			if(a[j] > a[j + 1])
			{
				max = a[j];
				a[j] = a[j + 1];
				a[j + 1] = max;
			}
	}
	if(ave - a[0] > a[n - 1] - ave)
		max = ave - a[0];	
	else
		max = a[n - 1] - ave;
	j = 0;
	for(i = 0;i < n;i ++)
		if(fabs(fabs(a[i] - ave) - max) < 1e-5)
		{	b[j] = a[i];
			j++;
		}
	for(i = 0;i < j - 1;i ++)
		my_printf("%d,",b[i]);
	my_printf("%d",b[j - 1]);
}