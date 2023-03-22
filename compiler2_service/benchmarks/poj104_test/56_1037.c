#define NUM_ITER 1259899

#include <header.h>

int main_bench()
{
	int n, x[5], i=0, j;
	my_scanf("%d", &n);
	while(n!=0)
	{
		x[i]=n%10;
		n=n/10;
		i++;
	}
	n=0;
	for(j=0;j<i;j++)
	{
		n+=x[j];
		n=n*10;
	}
	n=n/10;
	my_printf("%d\n", n);
	return 0;
}