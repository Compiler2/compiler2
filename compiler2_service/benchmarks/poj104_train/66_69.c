#define NUM_ITER 3261

#include <header.h>

int main_bench()
{
	int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	long year;
	int mon,day;
	my_scanf ("%ld%d%d",&year,&mon,&day);
	year=year%2800;
	long x=0;
	int i;
	if (year==1)x=0;
	if (year>1)
	{
		for (i=1;i<year;i++)
		{
			if ((i%400==0)||((i%4==0)&&(i%100!=0)))x+=366;
			else x+=365;
		}
	}
	if (year==0)
	{
		x=2800*365+700-21-366;
	}
	for (i=1;i<mon;i++)
	{
		x+=days[i];
		if (((year%400==0)||((year%4==0)&&(year%100!=0)))&&(i==2))x++;
	}
	x+=day;
	switch (x%7)
	{
	 case 0:my_printf("Sun.");break;
	 case 1:my_printf("Mon.");break;
	 case 2:my_printf("Tue.");break;
	 case 3:my_printf("Wed.");break;
	 case 4:my_printf("Thu.");break;
	 case 5:my_printf("Fri.");break;
	 case 6:my_printf("Sat.");break;
	}
	return 0;
}
		 
		 
		 