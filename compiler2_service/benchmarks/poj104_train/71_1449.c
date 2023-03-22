#include <header.h>

int days(int year,int month)
{
	int i,day=0;
	for(i=1;i<month;i++)
	{
		
		if(i==1||i==3||i==5||i==7||i==8||i==10)
			day+=31;
		else if(i==4||i==6||i==9||i==11)
			day+=30;
		else if(i==2&&((year%4==0&&year%100!=0)||year%400==0))
			day+=29;
		else 
			day+=28;
	}
	return day;
}
int main_bench()
{
	int year[200],month1[200],month2[200],day1[200],day2[200];
	int n,i,day;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&year[i],&month1[i],&month2[i]);
		day1[i]=days(year[i],month1[i]);
		day2[i]=days(year[i],month2[i]);
		
	}
	for(i=0;i<n;i++)
	{
		if((day1[i]-day2[i])%7==0)
			my_printf("YES\n");
		else
			my_printf("NO\n");
	}
	return 0;
}


