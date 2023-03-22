#define NUM_ITER 69719

#include <header.h>

int main_bench()
{
	int year,month,day;
	my_scanf("%d%d%d",&year,&month,&day);
	int i,s;
	s=year%400;
	if(s==0)
	{
		s+=400;
	}
	int sum=0;
	for(i=1;i<s;i++)
	{
		if(i%4!=0||(i%100==0&&i%400!=0))
		{
			sum++;
		}
		else if((i%4==0&&i%100!=0)||i%400==0)
		{
			sum+=2;
		}
	}
	for(i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)
		{
			sum+=3;
		}
		else if(i==4||i==6||i==9||i==11)
		{
			sum+=2;
		}
		else if(i==2&&(year%4!=0||(year%100==0&&year%400!=0)))
		{
			sum+=0;
		}
		else if(i==2&&(year%4==0&&year%100!=0)||year%400==0)
		{
			sum+=1;
		}
	}
	sum+=day;
	int t=sum%7;
	if(t==1)
	{
		my_printf("Mon.");
	}
	else if(t==2)
	{
		my_printf("Tue.");
	}
	else if(t==3)
	{
		my_printf("Wed.");
	}
	else if(t==4)
	{
		my_printf("Thu.");
	}
	else if(t==5)
	{
		my_printf("Fri.");
	}
	else if(t==6)
	{
		my_printf("Sat.");
	}
	else if(t==0)
	{
		my_printf("Sun.");
	}
	return 0;
}