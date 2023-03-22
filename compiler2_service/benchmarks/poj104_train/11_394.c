#define NUM_ITER 1338459

#include <header.h>


int main_bench()
{
	int a,b,c,sum;
	my_scanf ("%d%d%d",&a,&b,&c);
	if (b==1)
	{
		sum=c;
		my_printf ("%d",sum);
	}
	if (a%4==0&&a%100!=0||a%400==0)
	{
		if (b==2)
		{
			sum=c+31;
			my_printf ("%d",sum);
		}
		if (b==3)
		{
			sum=c+60;
			my_printf ("%d",sum);
		}
		if (b==4)
		{
			sum=c+91;
			my_printf ("%d",sum);
		}
		if (b==5)
		{
			sum=c+121;
			my_printf ("%d",sum);
		}
		if (b==6)
		{
			sum=c+152;
			my_printf ("%d",sum);
		}
		if (b==7)
		{
			sum=c+182;
			my_printf ("%d",sum);
		}
		if (b==8)
		{
			sum=c+213;
			my_printf ("%d",sum);
		}
		if (b==9)
		{
			sum=c+244;
			my_printf ("%d",sum);
		}
		if (b==10)
		{
			sum=c+274;
			my_printf ("%d",sum);
		}
		if (b==11)
		{
			sum=c+305;
			my_printf ("%d",sum);
		}
		if (b==12)
		{
			sum=c+335;
			my_printf ("%d",sum);
		}
	}
	else
	{   
		if (b==2)
		{
			sum=c+31;
			my_printf ("%d",sum);
		}
		if (b==3)
		{
			sum=c+59;
			my_printf ("%d",sum);
		}
		if (b==4)
		{
			sum=c+90;
			my_printf ("%d",sum);
		}
		if (b==5)
		{
			sum=c+120;
			my_printf ("%d",sum);
		}
		if (b==6)
		{
			sum=c+151;
			my_printf ("%d",sum);
		}
		if (b==7)
		{
			sum=c+181;
			my_printf ("%d",sum);
		}
		if (b==8)
		{
			sum=c+212;
			my_printf ("%d",sum);
		}
		if (b==9)
		{
			sum=c+243;
			my_printf ("%d",sum);
		}
		if (b==10)
		{
			sum=c+273;
			my_printf ("%d",sum);
		}
		if (b==11)
		{
			sum=c+304;
			my_printf ("%d",sum);
		}
		if (b==12)
		{
			sum=c+334;
			my_printf ("%d",sum);
		}
	}
	return 0;
}