#define NUM_ITER 5769

#include <header.h>


int feibonaqi(int N);
int main_bench()
{
	int n;
	int j;
	int a[1000];
	
	my_scanf("%d", &n);

	for (j = 0; j < n; j++ )
	{
		my_scanf("%d", &a[j]);
	}

	for (j = 0; j <n; j++)
	{
		my_printf("%d\n", feibonaqi(a[j]));
	
	}

	return 0;
}

int feibonaqi(int N)
{	int F[1000];
	int i;

	F[0] = 1;
	F[1] = 1;

	for (i = 2; i < N; i++)
	{
		F[i] = F[i-1] + F[i-2];
	}

	return F[N-1];




}
