#define NUM_ITER 1598674

#include <header.h>

int main_bench()
{
	int a,a1,a2,a3,a4,b;
	my_scanf("%d",&a);
	a1=a/1000;
	b=a-a1*1000;
	a2=b/100;
	b=b-a2*100;
	a3=b/10;
	a4=b-a3*10;
	b=a1+a2*10+a3*100+a4*1000;
	if(a>999)
	{
	if(b>999)
		my_printf("%d\n",b);
	else if(b>99)
		my_printf("0%d\n",b);
	else if(b>9)
		my_printf("00%d\n",b);
	else my_printf("000%d\n",b);
	}
	else if(a>99)
	{
	b=b/10;
	if(b>99)
		my_printf("%d\n",b);
	else if(b>9)
		my_printf("0%d\n",b);
	else my_printf("00%d\n",b);
	}
	else if(a>9)
	{
	b=b/100;
    if(b>9)
		my_printf("%d\n",b);
	else my_printf("0%d\n",b);
	}
	else 
	{
		b=b/1000;
		my_printf("%d\n",b);
	}
	return 0;
}

	