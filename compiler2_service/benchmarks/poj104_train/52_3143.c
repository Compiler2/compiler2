#include <header.h>



int main_bench()	{
	int n, m, i;
	int a[220];
	my_scanf("%d%d", &n, &m);
	for(i = 0; i < n; i ++)	{
		my_scanf("%d", &a[i]);
	}
	for(i = n-1; i >= 0; i --)	{
		a[i+m] = a[i];
	}
	for(i = 0; i < m; i ++)	{
		a[i] = a[i+n];
	}
	int flag = 0;
	for(i = 0; i < n; i ++)	{
		if(flag == 0)	{
			my_printf("%d", a[i]);
			flag = 1;
			continue;
		}
		if(flag == 1)	{
			my_printf(" %d", a[i]);
		}
	}
	return 0;
}
