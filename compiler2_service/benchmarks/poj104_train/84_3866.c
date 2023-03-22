#define NUM_ITER 64237

#include <header.h>

int main_bench()
{
	int n, max1, max2,i;
	int num[100]={0};
	max1 = 0;
	max2 = 0;
	my_scanf("%d" , &n);
	my_scanf("%d%d", &num[0],&num[1]);
	if (num[0] >= num[1])
	{
		max1 = num[0];
		max2 = num[1];
	}
	else
	{
		max1 = num[1];
		max2 = num[0];
	}
    for (i = 2; i < n; i++)
	{
		my_scanf("%d" ,&num[i]);
		if (num[i] > max1)
		{
			max2 = max1;
			max1 = num[i];
		}
		else if (num[i] >max2)
		{
			max2 = num[i];
		}
		else
		{
			continue;
		}
	}
		my_printf("%d\n%d\n", max1,max2);
		return 0;
}