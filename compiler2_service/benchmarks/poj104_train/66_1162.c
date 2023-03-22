#define NUM_ITER 300354

#include <header.h>

int main_bench() {
	int year,month,day,i,date=0,m[12]={3,0,3,2,3,2,3,3,2,3,2,3};
	my_scanf("%d%d%d",&year,&month,&day);
	year-=1;
	date=year+year/4-year/100+year/400;
	year+=1;
	if(year%4==0&&year%100!=0||year%400==0) {
		m[1]=1;
	}
	for(i=0;i<(month-1);i++) {
		date+=m[i];
	}
	date+=day;
	date=date%7;
	switch(date) {
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