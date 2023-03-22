#define NUM_ITER 190026

#include <header.h>

int main_bench()
{
	int i,year,month,day;
	int sumday=0,xingqiji;
	my_scanf("%d %d %d",&year,&month,&day);
	sumday=(year-1)*(365%7)+(year-1)/4-(year-1)/100+(year-1)/400;
	for(i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)
		{
			sumday+=3;
		}
		else if(i==4||i==6||i==9||i==11)
		{
			sumday+=2;
		}
		else if(i==2)
		{
			if((year%4==0&&year%100!=0)||year%400==0)
			{
				sumday+=1;
			}
			else sumday+=0;
		}
	}
	sumday+=day;
	xingqiji=sumday%7;
	if(xingqiji==0)
	{
		my_printf("Sun.");
	}
	else if(xingqiji==1)
	{
		my_printf("Mon.");
	}
	else if(xingqiji==2)
	{
		my_printf("Tue.");
	}
	else if(xingqiji==3)
	{
		my_printf("Wed.");
	}
	else if(xingqiji==4)
	{
		my_printf("Thu.");
	}
	else if(xingqiji==5)
	{
		my_printf("Fri.");
	}
	else my_printf("Sat.");
	return 0;
}