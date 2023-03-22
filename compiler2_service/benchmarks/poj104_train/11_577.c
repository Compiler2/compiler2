#define NUM_ITER 280309

#include <header.h>

int main_bench()
{
	int year,month,day;
	int monthday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d%d%d",&year,&month,&day);
	int i,j;
	int sum=0;
	for(i=1;i<month;i++)
	{
	j=i-1;
	sum=sum+monthday[j];
	}
	sum=sum+day;
	int a;
	a=year%4;
	if(month>2&&(a==0&&year%100!=0||year%400==0))
	{
		sum=sum+1;
	}
	my_printf("%d",sum);
	return 0;
}
