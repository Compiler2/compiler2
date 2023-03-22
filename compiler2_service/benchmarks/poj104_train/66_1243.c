#include <header.h>

int main_bench(){
	int y,m,d;
	int totalday;
	int a[12]={0,31,59,90,120,151,181,212,243,273,304,334};
	my_scanf("%d %d %d",&y,&m,&d);
	totalday=y-1+(y-1)/4+(y-1)/400-(y-1)/100+a[m-1]+d;
	if(y%4==0&&y%100!=0||y%400==0&&m>2){totalday++;}
	switch(totalday%7){
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