#define NUM_ITER 295567

#include <header.h>


int normal_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int leap_months[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

const char *week_days[] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};

int is_leap(int year) {
	if (year % 100 == 0)
		return year % 400 == 0;
	
	return year % 4 == 0;
}

int main_bench() {
	int year, month, day;
	my_scanf("%d%d%d", &year, &month, &day);
	
	int *months = is_leap(year) ? leap_months : normal_months;
	
	int days = 0;
	int i;
	for ( i = 0; i < month - 1; i++)
		days += months[i];
	
	days += day;
	
	days += (year-1) * (365%7);
	days += (year-1) / 4 * 1;
	days -= (year-1) / 100 * 1;
	days += (year-1) / 400 * 1;
	
	my_printf("%s\n", week_days[days % 7]);
}