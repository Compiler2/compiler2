#define NUM_ITER 241517

#include <header.h>

int main_bench()
{
	int i,year,month,day,date=0;
	my_scanf("%d%d%d",&year,&month,&day);
	for (i=1;i<month;i++)
	{
		if (i==4 ||i==6 ||i==9 ||i==11)
			date=date+30;
		else
		{
			if (i==2)
			{
				if (year%100!=0 && year%4==0 || year%400==0)
					date=date+29;
				else 
					date=date+28;
			}
			else
				date=date+31;
		}
	}
	date =date+day;
	my_printf("%d\n",date);
	return 0;
}