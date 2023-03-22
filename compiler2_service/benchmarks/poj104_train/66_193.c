#define NUM_ITER 304866

#include <header.h>

int main_bench()
{
	int year,month,day,i,j=0,first;
	my_scanf("%d%d%d",&year,&month,&day);
	j=(year-1)/400*97+((year-1)%400)/100*24+((year-1)%100)/4;
	first=(year+j)%7;
	
	int monthday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<month-1;i++)
	{
		day=day+monthday[i];
	}
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				if(month>2)
				day++;
			}
		}
		else 
			if(month>2)
			day++;
	}
	
	int weekday=(day-1+first)%7;
	switch(weekday)
	{
	case 0:my_printf("Sun.\n");break;
	case 1:my_printf("Mon.\n");break;
	case 2:my_printf("Tue.\n");break;
	case 3:my_printf("Wed.\n");break;
	case 4:my_printf("Thu.\n");break;
	case 5:my_printf("Fri.\n");break;
	case 6:my_printf("Sat.\n");break;
	}
	return 0;
}
