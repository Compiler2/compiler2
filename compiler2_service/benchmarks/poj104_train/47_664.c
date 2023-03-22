#define NUM_ITER 54798

#include <header.h>



int main_bench()
{
	int n;
	int a[100];
	my_scanf("%d",&n);
	for (int i=0; i<n; i++)
	{
		my_scanf("%d",&a[i]);
	}
	while (n--)
	{
		my_printf("%d",a[n]);
		if (n!=0)
		{
			my_printf(" ");
		}
	}
	return 0;
}