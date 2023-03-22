#include <header.h>

int main_bench()
{
	int year,month,day;
	my_scanf("%d%d%d",&year,&month,&day);
	int j;
	int zong=0;
	int xingqi;
	int i;
	for(i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			zong+=31;
		if(i==4||i==6||i==9||i==11)
			zong+=30;
		if(i==2)
		{
            if(year%400==0||(year%4==0&&year%100!=0))
			    zong+=29;
	    	else
			    zong+=28;
		}
	}
	zong=zong+day;
    zong+=(year-1)+(year-1)/4-(year-1)/100+(year-1)/400;
	xingqi=zong%7;
	if(xingqi==1)
		my_printf("Mon.");
    if(xingqi==2)
		my_printf("Tue.");
    if(xingqi==3)
		my_printf("Wed.");
    if(xingqi==4)
		my_printf("Thu.");
    if(xingqi==5)
		my_printf("Fri.");
    if(xingqi==6)
		my_printf("Sat.");
	if(xingqi==0)
		my_printf("Sun.");
	return 0;
}