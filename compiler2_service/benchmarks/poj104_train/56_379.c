#define NUM_ITER 1528288

#include <header.h>


int main_bench()
{
	int x,x1,x2,x3,x4,x5,y;
	my_scanf("%d",&x);
	x1=x/10000;
    x2=(x-10000*x1)/1000;
	x3=(x-1000*x2-10000*x1)/100;
	x4=(x-10000*x1-1000*x2-100*x3)/10;
	x5=x-10000*x1-1000*x2-100*x3-10*x4;
	if(x1==0)
	{	
		y=x5*1000+x4*100+x3*10+x2;
		{
			if(x2==0)
				y=x5*100+x4*10+x3;
			{
				if(x3==0)
				y=x5*10+x4;
            }
		}
	}
	else 
		y=x5*10000+x4*1000+x3*100+x2*10+x1;
    my_printf("%d\n",y);
	return 0;
}