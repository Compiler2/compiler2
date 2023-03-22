#define NUM_ITER 1637540

#include <header.h>


int main_bench()
{
	int x,y,t;
	my_scanf("%d %d",&x,&y);
	if(x==1||y==1)
	{
		my_printf("1\n");
	}
	else
	{if(x==y)
	{my_printf("%d\n",x);}
	else
	{do
	{if(x>y)
	{
		t=x;
		x=y;
		y=t;
	}
	y=y/2;
	}while(x!=y);
	my_printf("%d\n",y);
	}
	}


	return 0;
}

