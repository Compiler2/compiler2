#define NUM_ITER 61525

#include <header.h>

int main_bench()
{
	int a,b,c,i;
	a=0;
	b=0;
	for (i=1;i<100;i++)
	{
	my_scanf("%d",&c);
	if(c>a)
		b=a,
		a=c;
	   
	else if(c<a&&c>=b)
		b=c;
else if(c=a)
c=a;
	}

my_printf("%d\n",a);
my_printf("%d\n",b);
return 0;
}
