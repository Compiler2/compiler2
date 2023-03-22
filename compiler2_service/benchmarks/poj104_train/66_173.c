#define NUM_ITER 294140

#include <header.h>

void printDigit(int z)
{
	switch(z)
	{
	case(0):my_printf("Sun.");break;
	case(1):my_printf("Mon.");break;
	case(2):my_printf("Tue.");break;
	case(3):my_printf("Wed.");break;
	case(4):my_printf("Thu.");break;
	case(5):my_printf("Fri.");break;
	case(6):my_printf("Sat.");break;
	}
}

int main_bench()
{
	int year,month,day,sum,n,x=0,y,z;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int isleapyear(int year);
	my_scanf("%d %d %d",&year,&month,&day);
	if(year>4)
	{
	sum=((year-1)/4)-((year-1)/100)+((year-1)/400);
	}
	else
	{
		sum=0;
	}		
	
	for(n=1;n<month;n++)
	{
		x+=a[n];
	}
	x+=day;
	if(month>2&&isleapyear(year))
		x=x+1;
	y=365*((year-1)%7)+(sum+x)%7;
	z=y%7;
	printDigit(z);
}
int isleapyear(int year)
{
	return((year%4==0&&year%100!=0)||(year%400==0));

}
