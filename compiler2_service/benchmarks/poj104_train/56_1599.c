#define NUM_ITER 878727

#include <header.h>

int main_bench()
{
	unsigned long a;
	int b,c,d,e,f;
    my_scanf("%ld",&a);
	b=(a/10000)%10;
	c=(a/1000)%10;
		d=(a/100)%10;
		e=(a/10)%10;
		f=a%10;

		if (a>10000)
			my_printf("%d%d%d%d%d\n",f,e,d,c,b);
		else if (1000<a&&a<10000)
			my_printf("%d%d%d%d\n",f,e,d,c);
		else if (100<a&&a<1000)
			my_printf("%d%d%d\n",f,e,d);
		else if(10<a&&a<100)
			my_printf("%d%d\n",f,e);
		else my_printf("%d\n",f);
}