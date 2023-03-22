#define NUM_ITER 1271887

#include <header.h>

int main_bench()
{
	int a,b,c,sum;
	my_scanf("%d%d%d",&a,&b,&c);
	if (b==1)
	{
		my_printf("%d",c);
	}
	if (b==2)
	{
		sum=31+c;
		my_printf("%d",sum);
	}
	if (a%4==0&&a%100!=0||a%100==0&&a%400==0)
	{
		if (b==3)
		{
			sum=60+c;
			my_printf("%d",sum);
		}
		if (b==4)
		{
			sum=91+c;
			my_printf("%d",sum);
		}
		if (b==5)
		{
			sum=121+c;
			my_printf("%d",sum);
		}
		if (b==6)
		{
			sum=152+c;
			my_printf("%d",sum);
		}	
		if (b==7)
		{
			sum=182+c;
			my_printf("%d",sum);
		}	
		if (b==8)
		{
			sum=213+c;
			my_printf("%d",sum);
		}	
		if (b==9)
		{
			sum=244+c;
			my_printf("%d",sum);
		}
		if (b==10)
		{
			sum=274+c;
			my_printf("%d",sum);
		}	
		if (b==11)
		{
			sum=305+c;
			my_printf("%d",sum);
		}
		if (b==12)
		{
			sum=335+c;
			my_printf("%d",sum);
		}
	}
	else 
	{
		if (b==3)
		{
			sum=59+c;
			my_printf("%d",sum);
		}
		if (b==4)
		{
			sum=90+c;
			my_printf("%d",sum);
		}
		if (b==5)
		{
			sum=120+c;
			my_printf("%d",sum);
		}
		if (b==6)
		{
			sum=151+c;
			my_printf("%d",sum);
		}	
		if (b==7)
		{
			sum=181+c;
			my_printf("%d",sum);
		}	
		if (b==8)
		{
			sum=212+c;
			my_printf("%d",sum);
		}	
		if (b==9)
		{
			sum=243+c;
			my_printf("%d",sum);
		}
		if (b==10)
		{
			sum=273+c;
			my_printf("%d",sum);
		}	
		if (b==11)
		{
			sum=304+c;
			my_printf("%d",sum);
		}
		if (b==12)
		{
			sum=334+c;
			my_printf("%d",sum);
		}
	}
	return 0;
}