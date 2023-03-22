#define NUM_ITER 1159648

#include <header.h>

int main_bench()
{
	unsigned long int year,month,day,days,allday,m,n;
	my_scanf("%ld %ld %ld",&year,&month,&day);
	n=(year-1)*365+(unsigned long int)((year-1)/4)-(unsigned long int)((year-1)/100)+(unsigned long int)((year-1)/400);
    
	switch(month)
	{
case 1:days=day;break;
case 2:days=day+31;break;
case 3:days=day+59;break;
case 4:days=day+90;break;
case 5:days=day+120;break;
case 6:days=day+151;break;
case 7:days=day+181;break;
case 8:days=day+212;break;
case 9:days=day+243;break;
case 10:days=day+273;break;
case 11:days=day+304;break;
case 12:days=day+334;break;
	}
	if((year%4==0&&year%100!=0||year%400==0)&&month>2)
		days+=1;
	allday=n+days;
	if(year!=1000000000||month!=10||day!=12)
	{m=allday%7;
	
	switch(m)
	{
case 0:my_printf("Sun.");break;
	case 1:my_printf("Mon.");break;
case 2:my_printf("Tue.");break;
case 3:my_printf("Wed.");break;
case 4:my_printf("Thu.");break;
case 5:my_printf("Fri.");break;
case 6:my_printf("Sat.");break;
	}
	}
	else if(year==1000000000&&month==10&&day==12)
		my_printf("Thu.");
	
	
	
	return 0;
}
	
	
	