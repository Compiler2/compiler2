#include <header.h>

int main_bench()
{
	int n,a,b,c,d;
    my_scanf("%d",&n);
    a=n%10;
    my_printf("%d",a);
    b=(n-a)/10;
    if(b!=0)
	{b=b%10;
       my_printf("%d",b);
       c=(n-10*b-a)/100;
       if(c!=0)
	   {
          c=c%10;
          my_printf("%d",c);
          d=(n-100*c-10*b-a)/1000;
          if(d!=0)
             my_printf("%d\n",d);
	   }
	}
}
