#define NUM_ITER 1130223

#include <header.h>


int main_bench()
{   
int a,b,c,d;
my_scanf("%d%d%d",&a,&b,&c);
if(a%4==0&&a%100!=0||a%400==0)
{
	if (b==1)
	{
		d=c;
		my_printf("%d",d);
	}
		else if (b==2 )
	{
		d=31+c;
		my_printf("%d",d);
	}
			else if (b==3 )
	{
		d=31+29+c;
		my_printf("%d",d);
	}
				else if (b==4 )
	{
		d=31+29+31+c;
		my_printf("%d",d);
	}
					else if (b==5 )
	{
		d=31+29+31+30+c;
		my_printf("%d",d);
	}
						else if (b==6 )
	{
		d=31+29+31+30+31+c;
		my_printf("%d",d);
	}
							else if (b==7 )
	{
		d=31+29+31+30+31+c+30;
		my_printf("%d",d);
	}
								else if (b==8)
	{
		d=31+29+31+30+31+c+30+31;
		my_printf("%d",d);
	}
									else if (b==9 )
	{
		d=31+29+31+30+31+c+30+31+31;
		my_printf("%d",d);
	}
										else if (b==10 )
	{
		d=31+29+31+30+31+c+30+31+31+30;
		my_printf("%d",d);
	}
											else if (b== 11)
	{
		d=31+29+31+30+31+c+30+31+31+30+31;
		my_printf("%d",d);
	}
												else if (b==12 )
	{
		d=31+29+31+30+31+c+30+31+31+30+31+30;
		my_printf("%d",d);
	}
												

}
else if(a%4!=0||(a%100==0&&a%400!=0 ))
{
	if (b==1 )
	{
		d=c;
		my_printf("%d",d);
	}
		else if (b==2 )
	{
		d=31+c;
		my_printf("%d",d);
	}
			else if (b==3 )
	{
		d=31+28+c;
		my_printf("%d",d);
	}
				else if (b==4 )
	{
		d=31+28+31+c;
		my_printf("%d",d);
	}
					else if (b==5 )
	{
		d=31+28+31+30+c;
		my_printf("%d",d);
	}
						else if (b==6 )
	{
		d=31+28+31+30+31+c;
		my_printf("%d",d);
	}
							else if (b==7 )
	{
		d=31+28+31+30+31+c+30;
		my_printf("%d",d);
	}
								else if (b==8)
	{
		d=31+28+31+30+31+c+30+31;
		my_printf("%d",d);
	}
									else if (b==9 )
	{
		d=31+28+31+30+31+c+30+31+31;
		my_printf("%d",d);
	}
										else if (b==10 )
	{
		d=31+28+31+30+31+c+30+31+31+30;
		my_printf("%d",d);
	}
											else if (b== 11)
	{
		d=31+28+31+30+31+c+30+31+31+30+31;
		my_printf("%d",d);
	}
												else if (b==12 )
	{
		d=31+28+31+30+31+c+30+31+31+30+31+30;
		my_printf("%d",d);
	}
}


	return 0;
}