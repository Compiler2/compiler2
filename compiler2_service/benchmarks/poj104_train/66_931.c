#define NUM_ITER 53474

#include <header.h>

int main_bench()
{
	int year,month,day,year_real;
	int total=0,i;
	my_scanf("%d%d%d",&year_real,&month,&day);
	if(year_real%400!=0)
		year=year_real%400;
	else
		year=400;
	for(i=1;i<year;i++)
	{
		if(i%400==0||(i%100!=0&&i%4==0))
			total+=366;
		else
			total+=365;
	}
	
	for(i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)
				total+=31;
        else if(i==4||i==6||i==9||i==11)
                total+=30;
		else if(i==2&&(year%400==0||(year%100!=0&&year%4==0)))
				total+=29;
		else
				total+=28;
	}
	
		total+=day;
	if(total%7==1)
		my_printf("Mon.");
	if(total%7==2)
		my_printf("Tue.");
	if(total%7==3)
		my_printf("Wed.");
	if(total%7==4)
		my_printf("Thu.");
	if(total%7==5)
		my_printf("Fri.");
	if(total%7==6)
		my_printf("Sat.");
	if(total%7==0)
		my_printf("Sun.");
	return 0;
}