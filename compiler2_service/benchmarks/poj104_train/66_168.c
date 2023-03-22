#define NUM_ITER 473389

#include <header.h>

int main_bench()
{
	unsigned long int year,month,day,sum=0,i,x;
	int a[12]={0,31,29,31,30,31,30,31,31,30,31,30};
	int b[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	my_scanf("%d %d %d",&year,&month,&day);
	if ((year%4==0)&&(year%100!=0)||(year%400==0))
	{
		sum=year/4-year/100+year/400-1;
        sum=sum+(year-1)%7*365;
		for(i=0;i<month;i++)
             sum=sum+a[i];
		sum=sum+day-1;
	}
	else
	{
        sum=year/4-year/100+year/400;
        sum=sum+(year-1)%7*365;
		for(i=0;i<month;i++)
             sum=sum+b[i];
		sum=sum+day-1;
	}
    x=sum%7;
	switch(x)
	{
	   case 0:my_printf("Mon.\n");break;
	   case 1:my_printf("Tue.\n");break;
	   case 2:my_printf("Wed.\n");break;
	   case 3:my_printf("Thu.\n");break;
	   case 4:my_printf("Fri.\n");break;
	   case 5:my_printf("Sat.\n");break;
	   default:my_printf("Sun.\n");
	}
	return 0;
}

