#define NUM_ITER 1932372

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	if (n>=0,n<10)
		my_printf("%d\n",n);
	else 
		if (n>=10,n<100)
		my_printf("%d%d\n",n%10,n/10);
	    else 
			if (n>=100,n<1000)
				my_printf("%d%d%d\n",n%10,n%100/10,n/100);
	        else 
		        if (n>=1000,n<10000)
		        my_printf("%d%d%d%d\n",n%10,n%100/10,n/100%10,n/1000);
	        else my_printf("00001\n");
	return 0;
}
		
		