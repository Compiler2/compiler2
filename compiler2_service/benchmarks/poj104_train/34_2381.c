#define NUM_ITER 349208

#include <header.h>

int main_bench()
{
	int a,i,b;
	my_scanf("%d",&a);
	for(i=1;i<=1000;i++)
	{
		if(a==1)
	{
		my_printf("End");
		break;
	}
	if(a%2==1)
	{
		b=a*3+1;
		my_printf("%d*3+1=%d\n",a,b);
		a=b;
	}
	else
	{
		b=a/2;
		my_printf("%d/2=%d\n",a,b);
		a=b;
	}
	
	}
	return 0;
}
