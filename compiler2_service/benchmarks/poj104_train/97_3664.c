#define NUM_ITER 1173482

#include <header.h>


int main_bench()
{
	int i,n;
	int a[10];
	int b[10];
	my_scanf("%d", &n);
	a[1]=100;
	a[2]=50;
	a[3]=20;
	a[4]=10;
	a[5]=5;
	a[6]=1;
	b[1]=n/a[1];
	my_printf("%d\n", b[1]);
	for(i=2;i<=6;i++)
	{
		n=n-a[i-1]*b[i-1];
		b[i]=n/a[i];
		my_printf("%d\n", b[i]);
	}
	
	return 0;
}