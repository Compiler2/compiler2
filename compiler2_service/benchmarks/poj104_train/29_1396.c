#define NUM_ITER 131

#include <header.h>


int feibonaqi(int n1);
int main_bench()
{
	double sum = 0;
	int i, j;
	int m;
	int a[100];
	
	my_scanf("%d", &m);
	for(i = 0; i < m; i++)
	{
		my_scanf("%d", &a[i]);
	}
	for(i = 0; i < m; i++)
	{
		sum = 0;
		if(a[i] == 1)
		{
			sum = 2.000;
			my_printf("%.3lf\n", sum);
		}
		else
		{
			for(j = 1; j <= a[i]; j++)
				sum += (feibonaqi(j+1)*1.0)/feibonaqi(j);
			my_printf("%.3lf\n", sum);
		}
	}
	
	return 0;
}

int feibonaqi(int n1)
{
	int k;
	int f[100];
	
	f[0] = 1;
	f[1] = 2;
	for(k = 2; k < n1; k++)
	{
		f[k] = f[k-1] + f[k-2];
		
	}
	
	return f[n1-1];
	
}
