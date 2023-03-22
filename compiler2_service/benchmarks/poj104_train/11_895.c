#define NUM_ITER 1340113

#include <header.h>

int main_bench()
{
	int year,month,day,leap,y;
	my_scanf("%d%d%d",&year,&month,&day);
	
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
				leap=1;
			else
				leap=0;
		}
		else
			leap=1;
	}
	else
		leap=0;

	if(leap==1)
	{
		switch(month)
		{
		case 1:my_printf("%d",day);break;
		case 2:my_printf("%d",31+day);break;
		case 3:my_printf("%d",29+31+day);break;
		case 4:my_printf("%d",31+29+31+day);break;
		case 5:my_printf("%d",30+31+29+31+day);break;
		case 6:my_printf("%d",31+30+31+29+31+day);break;
		case 7:my_printf("%d",30+31+30+31+29+31+day);break;
		case 8:my_printf("%d",31+30+31+30+31+29+31+day);break;
		case 9:my_printf("%d",31+31+30+31+30+31+29+31+day);break;
		case 10:my_printf("%d",30+31+31+30+31+30+31+29+31+day);break;
		case 11:my_printf("%d",31+30+31+31+30+31+30+31+29+31+day);break;
		case 12:my_printf("%d",30+31+30+31+31+30+31+30+31+29+31+day);break;
		}
	}
	else
	{
		switch(month)
		{
		case 1:my_printf("%d",day);break;
		case 2:my_printf("%d",31+day);break;
		case 3:my_printf("%d",28+31+day);break;
		case 4:my_printf("%d",31+28+31+day);break;
		case 5:my_printf("%d",30+31+28+31+day);break;
		case 6:my_printf("%d",31+30+31+28+31+day);break;
		case 7:my_printf("%d",30+31+30+31+28+31+day);break;
		case 8:my_printf("%d",31+30+31+30+31+28+31+day);break;
		case 9:my_printf("%d",31+31+30+31+30+31+28+31+day);break;
		case 10:my_printf("%d",30+31+31+30+31+30+31+28+31+day);break;
		case 11:my_printf("%d",31+30+31+31+30+31+30+31+28+31+day);break;
		case 12:my_printf("%d",30+31+30+31+31+30+31+30+31+28+31+day);break;
		}
	}
	return 0;
}


