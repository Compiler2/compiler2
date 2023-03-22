#define NUM_ITER 4972

#include <header.h>

int main_bench()
{
	int n,i,j;
	int year,month1,month2;
	my_scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		my_scanf("%d %d %d",&year,&month1,&month2);
		{
			if((year%4==0&&year%100!=0)||year%400==0)
			{
				int days[12]={0,31,29,31,30,31,30,31,31,30,31,30};
				int day1=0,day2=0;
				for(i=0;i<month1;i++)
					day1+=days[i];
				for(i=0;i<month2;i++)
					day2+=days[i];
				if((day2-day1)%7==0)
					my_printf("YES\n");
				else
					my_printf("NO\n");
				
			}
			else
			{
				int days[12]={0,31,28,31,30,31,30,31,31,30,31,30};
				int day1=0,day2=0;
				for(i=0;i<month1;i++)
					day1+=days[i];
				for(i=0;i<month2;i++)
					day2+=days[i];
				if((day2-day1)%7==0)
					my_printf("YES\n");
				else
					my_printf("NO\n");
			}
		}
		
		
	
	}
	return 0;
}