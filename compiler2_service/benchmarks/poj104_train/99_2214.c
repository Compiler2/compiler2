#define NUM_ITER 57303

#include <header.h>


int main_bench()
{
	int n, age[100], i, a=0, b=0, c=0, d=0;
	

	my_scanf("%d\n", &n);
	for(i = 0; i < n; i++)
	{
		my_scanf("%d", &age[i]);
		if(age[i] > 60)
		{
			d++;
		}
		else if(age[i] <= 60 && age[i] >=36)
		{
			c++;
		}
		else if(age[i] <= 35 && age[i] >= 19)
		{
			b++;
		}
		else 
		{
			a++;
		}
	}

	

	my_printf("1-18: %.2lf%%\n", (double)a/n*100);
	my_printf("19-35: %.2lf%%\n", (double)b/n*100);
	my_printf("36-60: %.2lf%%\n", (double)c/n*100);
	my_printf("60??: %.2lf%%\n", (double)d/n*100);

	return 0;
}

