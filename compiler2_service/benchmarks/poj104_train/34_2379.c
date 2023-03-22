#define NUM_ITER 284803

#include <header.h>

int main_bench()
{
	int a,b;
	my_scanf("%d",&a);
for(;;)
{
if(a!=1)
{
	if(a%2==0)
	{
	b=a/2;
	my_printf("%d/2=%d\n",a,b);
	}
	if(a%2!=0)
	{
	b=a*3+1;
	my_printf("%d*3+1=%d\n",a,b);
	}
	a=b;
}
if(a==1)
{
my_printf("End\n");
break;
}
}

	
	return 0;
}

