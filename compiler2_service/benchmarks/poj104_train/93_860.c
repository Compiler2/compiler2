#define NUM_ITER 1809188

#include <header.h>

int main_bench()
{
    int x;
	int a,b,c;
	int k;
	k=0;
	my_scanf("%d",&x);
    a=x%3;
	b=x%5;
	c=x%7;
	if(a==0)
	{
		my_printf("3");
		k=1;
	}

    if(b==0)
	{
		if (k==1)
			my_printf(" ");
		my_printf("5");
		k=1;
	}

	if(c==0)
	{if(k==1)
	    my_printf(" ");
     my_printf("7");
	 		k=1;
	}
	if (k!=1)
		my_printf("n");
        	return 0;

}
