#define NUM_ITER 1314394

#include <header.h>

int main_bench()
{
	int a;
	my_scanf("%d",&a);
	if (a<10) my_printf("%d",a);
	else if (a<100)
		my_printf("%d%d",a%10,(a-a%10)/10);
	else if (a<1000)
		my_printf("%d%d%d",a%10,(a%100-a%10)/10,(a-a%100)/100);
	else if (a<10000)
		my_printf("%d%d%d%d",a%10,(a%100-a%10)/10,(a%1000-a%100)/100,(a-a%1000)/1000);
	else my_printf("00001");
}