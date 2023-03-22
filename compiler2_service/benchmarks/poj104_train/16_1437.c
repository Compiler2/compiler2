#define NUM_ITER 1298202

#include <header.h>



int main_bench()
{
	int n,a,b,c,d,e;
	my_scanf("%d",&n);
	while(n!=0)
	{
	a=n%10;
	my_printf("%d",a);
	n=n/10;
	}
	return 0;
}


