#include <header.h>

int main_bench()
{
	int n,a,b,c,d,x;
	my_scanf("%d",&n);
	if(n>=1000)
	{
	 a=n%10;
	 b=(n%100)/10;
	 c=(n%1000)/100;
	 d=n/1000;
	 x=a*1000+b*100+c*10+d;
	 my_printf("%04d",x);
	}
	else if(n>=100)
	{a=n%10;
	 b=(n%100)/10;
	 c=n/100;
	 x=a*100+b*10+c;
	 my_printf("%03d",x);
	}
	else if(n>=10)
	{a=n%10;
	b=n/10;
	x=a*10+b;
	my_printf("%02d",x);
	}
	else my_printf("%d",n);
    return 0;
}