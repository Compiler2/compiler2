#include <header.h>

int main_bench()
{
	int year,month,day,k=0,days=0,i,m;
	my_scanf("%d%d%d",&year,&month,&day);
	if(year%4==0)
	{
		k=1;
		if(year%100==0&&year%400!=0)
		{
			k=0;
		}
	}
	for(i=1;i<=month;i++)
	{
		switch(i-1)
		{
			case 1:days=days+31;break;
			case 2:days=days+28+k;break;
			case 3:days=days+31;break;
			case 4:days=days+30;break;
			case 5:days=days+31;break;
			case 6:days=days+30;break;
			case 7:days=days+31;break;
			case 8:days=days+31;break;
			case 9:days=days+30;break;
			case 10:days=days+31;break;
			case 11:days=days+30;break;
			case 0:days=days;break;
		}
	}
	year=year%400;
	if(year==0){
	year=400;}
	days=days+day;
	k=0;
	for(i=1;i<year;i++)
	{
		if(i%4==0)
	    {
		    k++;
		if(i%100==0&&i%400!=0)
		{
			k--;
		}
	    }
	}
	days=365*(year-1)+k+days;
	m=days%7;
	switch(m)
	{
		case 0:my_printf("Sun.");break;
		case 1:my_printf("Mon.");break;
		case 2:my_printf("Tue.");break;
		case 3:my_printf("Wes.");break;
		case 4:my_printf("Thu.");break;
		case 5:my_printf("Fri.");break;
		case 6:my_printf("Sat.");break;
	}
}