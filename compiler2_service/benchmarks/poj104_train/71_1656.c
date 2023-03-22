#include <header.h>

int Run(int year)
{
	if(year%400==0||(year%100!=0&&year%4==0))
	{
		return 1;
	}
	else{
		return 0;
	}
}
int Day(int year,int month1,int month2,int j,int day)
{
	if(month1>month2)
	{
		day=month1;
		month1=month2;
		month2=day;
	}
	day=0;
	for(j=month1;j<month2;j++)
	{
		if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
		{
			day+=31;
		}else if((j==4||j==6||j==9||j==11)){
			day+=30;
		}else{
			if(Run(year)==0)
			{
				day+=28;	
			}else{
				day+=29;
			}
		}
	}
	return day;
}

int main_bench()
{

	int i,j=1,n,year,month1,month2,day;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&year,&month1,&month2);
		day=Day(year,month1,month2,j,day);
		if(day%7==0)
		{
			my_printf("YES\n");
		}else{
			my_printf("NO\n");		
		}
	}
	return 0;
}