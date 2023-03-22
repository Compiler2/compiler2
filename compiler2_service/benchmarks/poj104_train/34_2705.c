#include <header.h>


void gujiao(int x)
{
	if(x%2) 
	{
		my_printf("%d*3+1=%d\n",x,x*3+1);
		x=x*3+1;
	}
	else
	{
		my_printf("%d/2=%d\n",x,x/2);
		x=x/2;
	}
	if(x==1) my_printf("End");
	else gujiao(x);
}

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	if(n==1) {my_printf("End");return 0;}
	else gujiao(n);
	return 0;
}
