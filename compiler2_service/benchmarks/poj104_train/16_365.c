#define NUM_ITER 1489747

#include <header.h>


int main_bench()
{
	int n,a;
	my_scanf("%d",&n);
	if(n==0)
             my_printf("0");
         else 
         while(n)
	{
		a=n%10;
		n=(n-a)/10;
		my_printf("%d",a);
	}
	return 0;
}
