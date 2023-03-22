#define NUM_ITER 1755251

#include <header.h>

int main_bench()
{
	int a,b1,b2,b3,b4,b5;
	my_scanf("%d",&a);
	b1=a/10000;
	b2=a/1000-10*b1;
	b3=a/100-100*b1-10*b2;
	b4=a/10-1000*b1-100*b2-10*b3;
	b5=a-10000*b1-1000*b2-100*b3-10*b4;
	if(b1!=0)
	my_printf("00001");
	else if(b2!=0)
	my_printf("%d%d%d%d",b5,b4,b3,b2);
	else if(b3!=0)
	my_printf("%d%d%d",b5,b4,b3);
	else if(b4!=0)
	my_printf("%d%d",b5,b4);
	else my_printf("%d",b5);
}