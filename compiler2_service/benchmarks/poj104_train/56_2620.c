#define NUM_ITER 1955071

#include <header.h>

int main_bench()
{
	int x,a,b,c,d,e;
	my_scanf("%d",&x);
	if(x>9999)
	{a=x/10000;b=(x-a*10000)/1000;c=(x-a*10000-b*1000)/100;d=(x-a*10000-b*1000-c*100)/10;e=x-a*10000-b*1000-c*100-d*10;my_printf("%d",e*10000+d*1000+c*100+b*10+a);}
	else if(x>999)
		{a=x/1000;b=(x-a*1000)/100;c=(x-a*1000-b*100)/10;d=(x-a*1000-b*100-c*10);my_printf("%d",d*1000+c*100+b*10+a);}
	     else if(x>99)
			 {a=x/100;b=(x-a*100)/10;c=x-a*100-b*10;my_printf("%d",c*100+b*10+a);}
		      else if(x>9)
			  {a=x/10;b=x-a*10;my_printf("%d",b*10+a);}
}
