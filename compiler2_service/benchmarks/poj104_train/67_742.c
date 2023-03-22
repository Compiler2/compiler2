#define NUM_ITER 25868

#include <header.h>

int main_bench()
{
	int n,a,b,i,c,d,e,f;
	double p,q,o;
	my_scanf("%d",&n);
	my_scanf("%d%d",&a,&b);
	p=(double)b/a;
	for(i=0;i<n-2;i++)
	{
		my_scanf("%d%d",&c,&d);
		q=(double)d/c;
		if(p-q>0.05)
		{
			my_printf("worse");
                        my_printf("\n");
		}
		else
		{
			if(q-p>0.05)
			{
				my_printf("better");
                                my_printf("\n");
			}
			else
			{
				my_printf("same");
                                my_printf("\n");
			}
		}
	}
        my_scanf("%d%d",&e,&f);
        o=(double)f/e;
        if(p-o>0.05)
        {
		my_printf("worse");
	}
	else
	{
		if(o-p>0.05)
		{
			my_printf("better");
		}
		else
		{
			my_printf("same");
		}
	}
	return 0;
}