#include <header.h>


int main_bench()
{
	int x,y;
	int a,b,c;
	my_scanf ("%d",&x);
	a=x/100;
    b=(x-a*100)/10;
	c=x-a*100-b*10;
	y= c*100+b*10+a;
	
	my_printf ("%d\n",y);
	return 0;
}