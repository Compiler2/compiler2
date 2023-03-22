#include <header.h>

int main_bench()
{
	int year,month,day,days=0;
	int i;
	my_scanf("%d%d%d",&year,&month,&day);
	if(year%400!=0)
		year=year%400;
	else
		year=400;
	for(i=1;i<year;i++)
	{
		if(i%4==0&&i%100!=0)
			days+=366;
		else
			days+=365;
	}
	for(i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)
			days+=31;
		else if(i==4||i==6||i==9||i==11)
			days+=30;
		else if((year%4==0&&year%100!=0||year==400)&&i==2)
			days+=29;
		else
			days+=28;
	}
	days+=day;
	if(days%7==1)
		my_printf("Mon.") ;
	if(days%7==2)
		my_printf("Tue.");
	if(days%7==3)
		my_printf("Wed."); 
	if(days%7==4)
		my_printf("Thu.");
	if(days%7==5)
		my_printf("Fri.");
	if(days%7==6)
		my_printf("Sat.");
	if(days%7==0)
		my_printf("Sun.");
	return 0;
}

