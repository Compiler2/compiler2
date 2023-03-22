#include <header.h>

int main_bench()
{
	int a,b;
	b=0;
	my_scanf("%d",&a);
    if(a<9)
	{
		my_printf("%d",a);
	}
	while(a>9)
	{
      b=(b+a-a/10*10)*10;
       a=a/10;
	}
		my_printf("%d",b+a);
	return 0;
}