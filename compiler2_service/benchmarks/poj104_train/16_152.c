#include <header.h>

int main_bench()
{
	int a,b;
    my_scanf("%d",&a);
	b=0;
	while(a)
	{
		b=a%10;
		my_printf("%d",b);
        a=a/10;
	}
	return 0;
}
