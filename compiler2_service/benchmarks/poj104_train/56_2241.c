#include <header.h>

int main_bench()                        
{
	int k,i=10,m,n,a;
    my_scanf("%d",&k);
		n=k;
		for(;;)
		{
			m=n%i;
			n=n/i;
			my_printf("%d",m);
			if(n==0) break;
		}
}