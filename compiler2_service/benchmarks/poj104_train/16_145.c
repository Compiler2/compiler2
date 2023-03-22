#define NUM_ITER 2090368

#include <header.h>

int main_bench()
{
    int n,a,b,c,d,e;
    my_scanf("%d",&n);
    if(n==100)
	{my_printf("001");}
    else if(n>=1&&n<=9)
	{  my_printf("%d",n);}
	else if(n>=10&&n<=99)
	{  a=n%10;
	   b=n/10;
	   c=a*10+b;
	   d=e=0;
	   my_printf("%d",c);
	}
	else if(n>100&&n<=999)
	{   a=n%100;
	    b=a%10;
		c=a/10;
		d=n/100;
        e=b*100+c*10+d;
		my_printf("%d",e);
	}
    else if (n>=1000&&n<=9999)
	{
		a=n%10;
		b=(n%100-a)/10;
		c=n%1000/100;
		d=n/1000;
		e=a*1000+b*100+c*10+d;
		my_printf("%d",e);
	}
	else 
	{ my_printf("error");}
	return 0;
}