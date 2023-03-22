#define NUM_ITER 1768476

#include <header.h>

int main_bench()
{
	int n,a,b,c,d,y;
	my_scanf("%d",&n);
	if(n>9999)
		y=5;
	else if(n>999)
		y=4;
	else if(n>99)
		y=3;
	else if(n>9)
		y=2;
	else y=1;
	a=n/1000;
	b=(n-a*1000)/100;
	c=(n-a*1000-b*100)/10;
	d=(n-a*1000-b*100-c*10);
	switch(y)
	{
	case 5:my_printf("10000");break;
	case 4:my_printf("%d%d%d%d",d,c,b,a);break;
	case 3:my_printf("%d%d%d",d,c,b);break;
	case 2:my_printf("%d%d",d,c);break;
	case 1:my_printf("%d",d);
	}
	return 0;
}