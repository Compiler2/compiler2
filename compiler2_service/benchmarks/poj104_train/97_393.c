#define NUM_ITER 1521945

#include <header.h>

int main_bench()
{
	int n,a,b,c;
	my_scanf("%d",&n);
	a=n/100;
	b=n/10-n/100*10;
	c=n-n/100*100-(n/10-n/100*10)*10;
	
	if (a!=0)
	{
		my_printf("%d\n",a);
	}
	else
		{
		my_printf("0\n");
	}

	if (b>=5)
	{
		my_printf("%d\n",b/5);
		b=b-5;
	}
	else 
	{
		my_printf("0\n");
	}
	if (b>=2 && b<5)
	{
		my_printf("%d\n",b/2);
		b=b-2;
	}
	else 
	{
		my_printf("0\n");
	}
	if (b==1)
	{
		my_printf("%d\n",b);
	}
	else 
	{
		my_printf("0\n");
	}
	if (c>=5)
	{
		my_printf("%d\n",c/5);
		c=c-5;
	}
	else 
	{
		my_printf("0\n");
	}
	if (c>=1 && c<5)
	{
		my_printf("%d\n",c);
	}
	else 
	{
		my_printf("0\n");
	}

	return 0;
}

