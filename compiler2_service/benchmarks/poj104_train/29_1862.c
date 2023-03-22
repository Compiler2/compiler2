#define NUM_ITER 106

#include <header.h>


double F(int n)
{
	int i,a[100];
	a[0] = 1;
	a[1] = 2;
	for (i=2;i<=n-1;i++)
		a[i] = a[i-1] + a[i-2];
	return a[n-1];
}


int main_bench()
{
	int m,n;
	my_scanf("%d", &m);
	int i,j;
	double s,t;
	for (i=1;i<=m;i++)
	{
		s = 0;
		my_scanf("%d", &n);
		for (j=1;j<=n;j++)
		{
			t = F(j+1)/F(j);
			s = s + t;
		}
		my_printf("%.3lf\n", s);
	}
	return 0;
}
