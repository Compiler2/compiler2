#include <header.h>

int main_bench()
{
	int a=0,b,c,d=0;
	char e;
	my_scanf("%d%c",&c,&e);
	     while(e==',')
		{
		my_scanf("%d%c",&b,&e);
		if (b>c)
		{
			d=c;
			c=b;}
		else
		{
			if(b>d&&b!=c)
				d=b;}
		a=a+1;
		 }
		if (d!=0)
	{
		my_printf("%d",d);}
	else 
	{ 
		my_printf("No");}
	return 0;
}