#include <header.h>


int getMonthDay(int year, int month) {
	switch (month) {
		case 1:case 3: case 5: case 7: case 8: case 10: case 12: return 31;
		case 2:
			if (year%400==0 || (year%100!=0 && year%4==0)) return 29;
			return 28;
	}
	return 30;
}

int main_bench() {

	int year, month, day;
	int total;
		int m;
	my_scanf("%d %d %d", &year, &month, &day);
	total = ((year-1)%7)*(365%7) + (year-1)/4 - (year-1)/100 + (year-1)/400;

	for (m=1; m<month; ++m) total+=getMonthDay(year, m)%7;
	total+=day;
	switch (total%7) {
	case 1: my_printf("Mon."); break;
	case 2: my_printf("Tue."); break;
	case 3: my_printf("Wed."); break;
	case 4: my_printf("Thu."); break;
	case 5: my_printf("Fri."); break;
	case 6: my_printf("Sat."); break;
	case 0: my_printf("Sun."); break;
	default:
		my_printf("????!"); break;
	}
	return total%7;
} 