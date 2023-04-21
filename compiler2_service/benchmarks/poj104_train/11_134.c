#define NUM_ITER 326663

#include <header.h>

int main_bench()
{
    int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year,month,day,i,days=0;
	my_scanf("%d%d%d",&year,&month,&day);
    for(i=1;i<month;i++)
	{
		days=days+d[i-1];
	}
	days=days+day;
	if((year%4==0||year%400==0)&&month>2)
		days=days++;
	my_printf("%d",days);
}

