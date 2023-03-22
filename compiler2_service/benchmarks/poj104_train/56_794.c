#include <header.h>

int main_bench()
{
	int a,b,c;
	my_scanf("%d",&a);
	b=0;
	for(c=a%10;a>0;)
	{
		b=b*10+c;
		a=(a-c)/10;
		c=a%10;
	}
	my_printf("%d",b);
}
	
