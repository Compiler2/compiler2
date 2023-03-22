#include <header.h>

int main_bench()
{
	int n,a,b,c,d,e,sum;
	my_scanf("%d",&n);
	a=n%10;
	b=(n-a)/10;
	b=b%10;
	c=(n-b*10-a)/100;
	c=c%10;
    d=(n-c*100-b*10-a)/1000;
	d=d%10;
	e=(n-d*1000-c*100-b*10-a)/10000;
	e=e%10;
	if(b==0&&c==0&&d==0&&e==0)
	{
		sum=a;my_printf("%d",sum);
	}
	if(b!=0&&c==0&&d==0&&e==0)
	{	
		sum=a*10+b;
		my_printf("%d",sum);
	}
	if(b!=0&&c!=0&&d==0&&e==0)
	{
		sum=a*100+b*10+c;
		my_printf("%d",sum);
	}
	if(b!=0&&c!=0&&d!=0&&e==0)
	{
		sum=a*1000+b*100+c*10+d;
		my_printf("%d",sum);
	}
	if(b!=0&&c!=0&&d!=0&&e!=0)
	{
	sum=a*10000+b*1000+c*100+d*10+e;
		my_printf("%d",sum);
	}
}