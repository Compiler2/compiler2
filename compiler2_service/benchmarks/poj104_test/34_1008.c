#define NUM_ITER 292565

#include <header.h>

int main_bench()
{
	int n,i,x,m;
	my_scanf("%d",&n);
	x=n;
	for(i=1;i<=1000;i++)
	{
		if((x!=1)&&(x%2==1))
		{
			m=x*3+1;
			my_printf("%d*3+1=%d\n",x,m);
			x=m;
		}
		else if((x!=1)&&(x%2==0))
		{
			m=x/2;
			my_printf("%d/2=%d\n",x,m);
			x=m;
		}
		else if(x==1)
		{
			my_printf("End");
			break;
		}
	}
}
