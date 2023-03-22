#define NUM_ITER 1487396

#include <header.h>


int main_bench()
{
	int n,a,b,c,d,e,f;
	my_scanf("%d",&n);
	a=(int)n/100;
     b=(int)(n-a*100)/50;
	 c=(int)(n-a*100-b*50)/20;
	 d=(int)(n-a*100-b*50-c*20)/10;
	 e=(int)(n-a*100-b*50-c*20-d*10)/5;
	 f=n-a*100-b*50-c*20-d*10-e*5;
	my_printf("%d\n",a);
	my_printf("%d\n",b);
my_printf("%d\n",c);
my_printf("%d\n",d);
my_printf("%d\n",e);
my_printf("%d\n",f);
	return 0;
}