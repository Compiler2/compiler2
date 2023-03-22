#define NUM_ITER 356630

#include <header.h>

int main_bench()
{
	int x,y;
	my_scanf("%d",&x);
	while(x!=1)
	{
	    if(x%2==0)
		{
	  	   y=x/2;
		   my_printf("%d/2=%d\n",x,y);
		   x=y;
		   continue;
		}
		if(x%2!=0)
		{
			y=x*3+1;
			my_printf("%d*3+1=%d\n",x,y);
			x=y;
		}
	}
	my_printf("End");
}


