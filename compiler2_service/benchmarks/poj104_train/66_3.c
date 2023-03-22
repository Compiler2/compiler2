#define NUM_ITER 499927

#include <header.h>

int main_bench()
{
	int yy,mm,dd,i;
	int dm[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	char d[7][5]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
	long day=0;
	my_scanf("%d%d%d",&yy,&mm,&dd);
	yy%=400;
	if(yy==0)yy=400;
	day+=(yy-1)*365;
	day+=(yy-1)/4-(yy-1)/100+(yy-1)/400;
	if(yy%4==0&&yy%100!=0||yy%400==0)dm[1]++;
	for(i=0;i<(mm-1);i++)day+=dm[i];
	day+=dd;
	my_printf("%s\n",d[day%7]);
	return 0;
}