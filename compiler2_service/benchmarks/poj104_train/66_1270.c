#define NUM_ITER 819428

#include <header.h>



int isLeapYear(int y)
{
	

	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		return 1;
	else
		return 0;

}

int main_bench()
{
	int year, month, day;
	int sum_mod_day;
	int i,t;
	int month_day_sum[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	my_scanf("%d%d%d",&year,&month,&day);

	month_day_sum[2] = isLeapYear(year) ? 29 : 28;
	
	for (i = 1; i < 13; i++)
	{
		month_day_sum[i] += month_day_sum[i-1];
	}

	year--;
	
	sum_mod_day = 0;




	year %= 400;
	
	t = year / 100;
	sum_mod_day += t * 5;
	sum_mod_day %= 7;
	year %= 100;

	if (year > 0)
	{
		t = year / 4;
		sum_mod_day += t * 2 + (year - t) * 1;
		sum_mod_day %= 7;
	}

	month--;
	sum_mod_day += month_day_sum[month];

	sum_mod_day += day;
	sum_mod_day %= 7;

	switch (sum_mod_day)
	{
	case 0:
		my_printf("Sun.");
		break;
	case 1:
		my_printf("Mon.");
		break;
	case 2:
		my_printf("Tue.");
		break;
	case 3:
		my_printf("Wed.");
		break;
	case 4:
		my_printf("Thu.");
		break;
	case 5:
		my_printf("Fri.");
		break;
	case 6:
		my_printf("Sat.");
		break;
	default:
		break;
	}

	return 0;
}

