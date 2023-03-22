#define NUM_ITER 1686451

#include <header.h>

int main_bench()
{
	int x,i,j,a[5];
	my_scanf("%d",&x);
	i=0;
	while (x>=10)
	{
		a[i]=x%10;
		x=x/10;
		i=i+1;
	}
	a[i]=x;
	for (j=0;j<=i;j++) my_printf("%d",a[j]);
	my_printf("\n");

}