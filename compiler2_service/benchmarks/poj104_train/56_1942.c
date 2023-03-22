#define NUM_ITER 1310652

#include <header.h>

int main_bench()
{
	int n,i=0,j=0;
	int a[5];
	my_scanf("%d",&n);
	while(n!=0)
	{
		a[i]=n%10;
		n=n/10;
		i=i+1;
	}
	while(j<i)
	{
		n=10*n+a[j];
		j=j+1;
	}
	my_printf("%d",n);
}

