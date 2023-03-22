#define NUM_ITER 54774

#include <header.h>

int main_bench()
{
	int n, i = 0, a[10000];
	my_scanf("%d",&n);
	my_printf("\n");
	for(i = 0; i < n; i++)
	my_scanf("%d",&a[i]);
	for(i = n - 1 ; i > 0; i--)
		my_printf ("%d ",a[i]);
		my_printf("%d\n",a[0]);



	return 0;
}