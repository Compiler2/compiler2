#define NUM_ITER 309871

#include <header.h>

int print1(int q)
{int r;
r=q*3+1;
	my_printf("%d*3+1=%d\n",q,r);
	return(r);
}

int print2(int q)
{int r;
r=q/2;
	my_printf("%d/2=%d\n",q,r);
	return(r);
}


int main_bench()
{
	int q;
	my_scanf("%d",&q);
	do
	{
        if(q==1)break;
		if((q%2)==1)
			q=print1(q);
		if((q%2)==0)
			q=print2(q);
	}while(q!=1);
	my_printf("End");
}