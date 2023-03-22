#define NUM_ITER 1232093

#include <header.h>

int main_bench()
{
	int n,a,b,c;
	my_scanf("%d",&n);
	b=n;
    do
	{
		a=b%10;
        c=b;
		b=b/10;
        my_printf("%d",a);
	}
	while(c/10!=0);                                                                                                               
	return 0;
}
