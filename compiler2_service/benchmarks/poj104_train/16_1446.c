#define NUM_ITER 1447543

#include <header.h>

int main_bench()
{
	int a,g,s,b,q,o=0,p=1;
	my_scanf("%d",&a);
	if(a==10000)
		my_printf("%d%d%d%d%d\n",o,o,o,o,p);
	{
		if(a<=10)
			my_printf("%d\n",a);
		else if(a<100)
		{
			s=(a%100)/10;
			g=a%10;
			my_printf("%d%d\n",g,s);
		}
		else if(a<1000)
		{
			b=(a%1000)/100;
			s=(a%100)/10;
			g=a%10;
			my_printf("%d%d%d\n",g,s,b);
		}
		else if(a<10000)
		{
			q=(a%10000)/1000;
			b=(a%1000)/100;
			s=(a%100)/10;
			g=a%10;
			my_printf("%d%d%d%d\n",g,s,b,q);
		}
	}
	return 0;
}