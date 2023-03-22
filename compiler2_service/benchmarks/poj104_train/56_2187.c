#include <header.h>

int main_bench()
{
	int shu,i,jieguo;
	my_scanf("%d",&shu);
	if(shu<10)
		my_printf("%d",shu);
	if(shu>=10&&shu<100)
	{
		jieguo=shu/10+(shu-shu/10*10)*10;
		my_printf("%d",jieguo);
	}
	if(shu>=100&&shu<1000)
	{
		jieguo=shu/100+(shu-shu/100*100)/10*10+((shu-shu/100*100)-(shu-shu/100*100)/10*10)*100;
		my_printf("%d",jieguo);
	}
	if(shu>=1000&&shu<10000)
	{
		jieguo=shu/1000+(shu-shu/1000*1000)/100*10+(shu-shu/100*100)/10*100+(shu-shu/10*10)*1000;
		my_printf("%d",jieguo);
	}
	if(shu>=10000&&shu<100000)
	{
		jieguo=shu/10000+(shu-shu/10000*10000)/1000*10+(shu-shu/1000*1000)/100*100+(shu-shu/100*100)/10*1000+(shu-shu/10*10)*10000;
		my_printf("%d",jieguo);
	}

}