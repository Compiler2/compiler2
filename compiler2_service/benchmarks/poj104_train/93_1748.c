#include <header.h>

int main_bench()
{
	int a,b,c,d,e=3,f=5,g=7;
	char c1;
	my_scanf("%d",&a);
	b=a%3;c=a%5;d=a%7;
	c1='n';
	if (b==0)
		if (c==0)
		{
			if (d==0)
				my_printf("%d %d %d\n",e,f,g);
			else
				my_printf("%d %d\n",e,f);
		}
		else
		{
			if (d==0)
				my_printf("%d %d\n",e,g);
			else
				my_printf("%d\n",e);
		}
	else
		if (c==0)
		{
			if (d==0)
				my_printf("%d %d\n",f,g);
			else
				my_printf("%d\n",f);
		}

        else
		{
			if (d==0)
				my_printf("%d\n",g);
			else
				my_printf("%c\n",c1);
		}
}