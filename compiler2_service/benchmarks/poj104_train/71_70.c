#include <header.h>

int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int run(int year)
{
	if(year%4!=0)
		return 0;
	if(year%4==0)
	{
		if(year%100==0)
		{
		
		    if(year%400==0)
				return 1;
			else
 
			return 0;
		}
		else
			return 1;
	}
}



int main_bench()
{



	int n,i,j,year,date1,date2,tem;
	int day[201]={0};
	
	my_scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		my_scanf("%d%d%d",&year,&date1,&date2);
		month[2]=28;
		if(run(year))
			month[2]=29;
		if (date1>date2)
		{

			tem=date1;
			date1=date2;
			date2=tem;
		}
		for(j=date1;j<date2;j++)
		{
			day[i]+=month[j];
		}
	}
	
	for(i=1;i<n+1;i++)
	{
	
		if(day[i]%7==0)
			my_printf("YES\n");

			
		else
		
			my_printf("NO\n");
	}
	
	
	return 0;





}
