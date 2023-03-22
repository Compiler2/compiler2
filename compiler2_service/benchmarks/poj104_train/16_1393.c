#include <header.h>


int main_bench()
{

	int a,c,d;
	my_scanf("%d",&a);
	c=a;
	while(c>=1)
	{
	d=c-(c/10)*10;
	c=c/10;
	my_printf("%d",d);
	
	}
	if (a==0)
	my_printf("0");
	return 0;
}