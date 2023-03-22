#define NUM_ITER 1641193

#include <header.h>


int main_bench()
{
	int a,b,c;
	my_scanf("%d",&a);
	if (a<10)
		my_printf("%d",a);
	else 
		{
while (a/10!=0)
		{
			b=a/10;
			c=a-10*b;
			my_printf("%d",c);
			a=b;
		}
		my_printf("%d",a);
}
}
