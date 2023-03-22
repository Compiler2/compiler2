#define NUM_ITER 71367

#include <header.h>


int isRunnian(int year)
{
	if((year%400==0)||((year%4==0)&&(year%100!=0)))
		return 1;
	else
		return 0;
}

int main_bench()
{

	int year,month,day;
	int sum=0,leapyear,sumyear=0,summonth=0,sumday=0;  
	int i,j,k;
	int xingqiji;
	my_scanf("%d%d%d",&year,&month,&day);
    year--;
    leapyear=year/4-year/100+year/400;
	sumyear=leapyear*2+year-leapyear;

	for(j=1;j<month;j++)
	{
		if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
		{
			summonth+=31;
		}
		if(j==4||j==6||j==9||j==11)
		{
			summonth+=30;
		}
		if((isRunnian(year+1))&&(j==2))
		{
			summonth+=29;
		}
		else
		{
			summonth+=28;
		}
	}
	sumday=day;
	sum=sumyear+summonth+sumday;
	xingqiji=sum%7;
	if(xingqiji==1)
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
	else if(xingqiji==6)
	{
		my_printf("Sat.");
	}
	else
	{
		my_printf("Sun.");
	}
	return 0;
}
