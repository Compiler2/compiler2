#define NUM_ITER 1760911

#include <header.h>

int main_bench()
{
    int a,b,c,d,x,y;
	my_scanf("%d",&x);
	a=x/1000;
	b=(x-1000*a)/100;
	c=(x-1000*a-100*b)/10;
	d=x-1000*a-100*b-10*c;
	if(a==0) 
	{
		y=d*100+c*10+b;
		if(b==0) 
		{
	      y=d*10+c;
		  if(c==0) y=d;
		}
	}
	else y=d*1000+c*100+b*10+a;
	if(d!=0) my_printf("%d",y);
	if((d==0)&&(c!=0)) my_printf("0%d",y);
	if((d==0)&&(c==0)&&(b!=0)) my_printf("00%d",y);
	if((d==0)&&(c==0)&&(b==0)) my_printf("000%d",y);
	return 0;
}