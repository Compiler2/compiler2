#define NUM_ITER 1298166

#include <header.h>

int main_bench()
{
	int n, a[5], i, m, b;
	my_scanf("%d", &n);
    for(i=0;i<5;i++)
	{
		a[i]=n%10;
		my_printf("%d", a[i]);
		b=(int)n/10;
		n=b;
		if(n==0)
		{
	    	break;
		}
	}
	return 0;
}


