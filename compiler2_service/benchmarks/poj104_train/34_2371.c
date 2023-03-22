#include <header.h>


int main_bench()
{
	int a=0,b=0;
	my_scanf("%d",&a);
	if (a==1) my_printf("End\n");
	else
	{
	do
	{
		if (a%2==0) 
		{
			b=a/2;
			my_printf("%d",a);my_printf("/2=");my_printf("%d\n",b);
		}
		else 
		{
			b=a*3+1;
			my_printf("%d",a);my_printf("*3+1=");my_printf("%d\n",b);
		}

		a=b;
		b=0;
	}
	while (a!=1);
	if (a==1) my_printf("End\n");
	}
	return 0;
}
