#define NUM_ITER 65092

#include <header.h>

int main_bench()
{
	int a,b,c,d,n,i=3;
	my_scanf("%d",&n);
    my_scanf("%d %d",&a,&b);
	if(a<b)
	{
		d=a;
		a=b;
		b=d;
	}
    while(i<=n)
	{
		my_scanf("%d",&c);
		if(c>a)
		{
			b=a;
			a=c;
		}
		else if(c>b&&a>c)
		{
			b=c;
		}
        i++;
	}
	my_printf("%d\n%d\n",a,b);
	return 0;
}