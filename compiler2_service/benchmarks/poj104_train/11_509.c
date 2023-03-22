#include <header.h>


int main_bench()
{
	int a,b,c,n;
	my_scanf("%d%d%d",&a,&b,&c);
	if((a%4==0 && a%100!=0) || a%400==0)
	{
		if(b==1)
		{
			my_printf("%d\n",c);
		}
		else if(b==2)
		{
			n=31+c;
			my_printf("%d\n",n);
		}
		else if(b==3)
		{
			n=60+c;
			my_printf("%d\n",n);
		}
		else if(b==4)
		{
			n=91+c;
			my_printf("%d\n",n);
		}
		else if(b==5)
		{
			n=121+c;
			my_printf("%d\n",n);
		}
		else if(b==6)
		{
			n=152+c;
			my_printf("%d\n",n);
		}
		else if(b==7)
		{
			n=182+c;
			my_printf("%d\n",n);
		}
		else if(b==8)
		{
			n=213+c;
			my_printf("%d\n",n);
		}
		else if(b==9)
		{
			n=244+c;
			my_printf("%d\n",n);
		}
		else if(b==10)
		{
			n=274+c;
			my_printf("%d\n",n);
		}
		else if(b==11)
		{
			n=305+c;
			my_printf("%d\n",n);
		}
		else if(b==12)
		{
			n=336+c;
			my_printf("%d\n",n);
		}
	}
	else
	{
		if(b==1)
		{
			my_printf("%d\n",c);
		}
		else if(b==2)
		{
			n=31+c;
			my_printf("%d\n",n);
		}
		else if(b==3)
		{
			n=59+c;
			my_printf("%d\n",n);
		}
		else if(b==4)
		{
			n=90+c;
			my_printf("%d\n",n);
		}
		else if(b==5)
		{
			n=120+c;
			my_printf("%d\n",n);
		}
		else if(b==6)
		{
			n=151+c;
			my_printf("%d\n",n);
		}
		else if(b==7)
		{
			n=181+c;
			my_printf("%d\n",n);
		}
		else if(b==8)
		{
			n=212+c;
			my_printf("%d\n",n);
		}
		else if(b==9)
		{
			n=243+c;
			my_printf("%d\n",n);
		}
		else if(b==10)
		{
			n=273+c;
			my_printf("%d\n",n);
		}
		else if(b==11)
		{
			n=304+c;
			my_printf("%d\n",n);
		}
		else if(b==12)
		{
			n=335+c;
			my_printf("%d\n",n);
		}
	}
	return 0;
}