#include <header.h>

int main_bench()
{
	int a,b,c,d;
	char n;
	my_scanf("%d",&a);
	b=a%3;
	c=a%5;
	d=a%7;
	if (b==0&&c==0&&d==0)
	{my_printf("3 5 7");
	}
	else
	{if (b==0&&c==0&&d!=0)
	   {my_printf("3 5");}
	   else
	   {if (b==0&&c!=0&&d==0)
	   {my_printf("3 7");}
	   else
	   {if (b!=0&&c==0&&d==0)
	   {my_printf("5 7");}
	   else
	   {if (b==0&&c!=0&&d!=0)
	   {my_printf("3");}
	   else
	   {if (b!=0&&c==0&&d!=0)
	   {my_printf("5");}
	   else
	   {if (b!=0&&c!=0&&d==0)
	   {my_printf("7");}
	   else
		   my_printf("n");}}}}}}
}