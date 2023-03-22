#define NUM_ITER 1759582

#include <header.h>

int main_bench()
{
	int a;
	my_scanf("%d",&a);
	if(a==10000) my_printf("%d%d%d%d%d",0,0,0,0,1);
	else if(a>999) my_printf("%d%d%d%d",a%1000%100%10,a%1000%100/10,a%1000/100,a/1000);
	else if(a>99) my_printf("%d%d%d",a%100%10,a%100/10,a/100);
	else if(a>9) my_printf("%d%d",a%10,a/10);
	else my_printf("%d",a);
	return 0;
}