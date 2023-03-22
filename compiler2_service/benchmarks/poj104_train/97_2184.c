#define NUM_ITER 1188620

#include <header.h>

int main_bench()
{
	int n,t;
	my_scanf("%d",&n);
	{	
		t=n/100;
	    if(t>0)
		my_printf("%d\n",t);
		else 
		my_printf("0\n");
		n=n-100*t;
	    t=n/50;
		if(t>0)
	    my_printf("%d\n",t);
		else 
		my_printf("0\n");
		n=n-50*t;
        t=n/20;
	    if(t>0)
	    my_printf("%d\n",t);
		else 
		my_printf("0\n");
	    n=n-20*t;
	    t=n/10;
		if(t>0)
	    my_printf("%d\n",t);
		else 
		my_printf("0\n");
		n=n-10*t;
	    t=n/5;
		if(t>0)
	    my_printf("%d\n",t);
		else 
		my_printf("0\n");
		n=n-5*t;
        if(n>0)
	    my_printf("%d\n",n);
		else 
		my_printf("0\n");
		return 0;
	}
}
