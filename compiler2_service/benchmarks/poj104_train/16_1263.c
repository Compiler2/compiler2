#include <header.h>


int main_bench()
{
	int x,i,result=1;
	my_scanf("%d",&x);

	if(!x)
		my_printf("0");
	while(x)
	{
		my_printf("%d",x%10);
		x=x/10;
	}
	my_printf("\n",result);
	return 0;
}