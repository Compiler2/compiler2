#include <header.h>

int main_bench()
{
	int year,month,day,week=1;
	my_scanf("%d %d %d",&year,&month,&day);
	week=(week+year-1+(year-1)/4+(year-1)/400-(year-1)/100)%7;
	int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(year%400==0||(year%100!=0&&year%4==0))
	   mon[1]=29; 
	for(int i=0;i<month-1;i++)
	    week=(week+mon[i])%7;
	week=(week-1+day)%7;
		switch (week)
	{
	case 0:
		my_printf("Sun.");
		break;
	case 1:
		my_printf("Mon.");
		break;
	case 2:
		my_printf("Tue.");
		break;
	case 3:
		my_printf("Wed.");
		break;
	case 4:
		my_printf("Thu.");
		break;
	case 5:
		my_printf("Fri.");
		break;
	case 6:
		my_printf("Sat.");
		break;	
	default :
		my_printf("error"); 
	}
} 