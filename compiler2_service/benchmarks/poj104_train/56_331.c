#define NUM_ITER 1650409

#include <header.h>

int main_bench()
{
	int a,b,c,d,e;
	int num;
	my_scanf("%d",&num);
	a=num/10000;
	b=(int)(num-a*10000)/1000;
	c=(int)(num-a*10000-b*1000)/100;
	d=(int)(num-a*10000-b*1000-c*100)/10;
	e=(int)(num-a*10000-b*1000-c*100-d*10);
	if(num>9999)
	{my_printf("%d%d%d%d%d\n",e,d,c,b,a);}
	else if(num>999)
	{my_printf("%d%d%d%d\n",e,d,c,b);}
	else if(num>99)
	{my_printf("%d%d%d\n",e,d,c);}
	else if(num>9)
	{my_printf("%d%d\n",e,d);}
	else 
	{my_printf("%d\n",e);}
	return 0;

}
