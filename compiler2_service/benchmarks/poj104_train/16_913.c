#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f;
	my_scanf("%d",&a);

	if(a>=0&&a<10)
	{
		my_printf("%d\n",a);
	}
	else if(a>=10&&a<100) 
	{
		b=a%10;
		c=(a-b)/10;
		d=b*10+c;
		my_printf("%02d\n",d);
	}
	else if(a>=100&&a<1000)
	{
		b=a%10;
		c=(a-b)%100;
		d=(a-b-c)/100;
		e=b*100+c+d;
		my_printf("%03d\n",e);
	}
	else if(a>=1000&&a<10000)
	{
		b=a%10;
		c=(a-b)%100;
		d=(a-b-c)%1000;
		e=(a-b-c-d)/1000;
		f=b*1000+c*10+d/10+e;
		my_printf("%04d\n",f);
	}
    my_printf("\n");
	return 0;
}