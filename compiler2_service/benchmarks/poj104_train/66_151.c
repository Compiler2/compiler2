#define NUM_ITER 29069

#include <header.h>

int main_bench()
{
    unsigned long year,month,day,i=1,s=0,a=0,n;
    int m[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	my_scanf("%d %d %d",&year,&month,&day);	
	if ((year%4==0 && year % 100 !=0 ) || year % 400 == 0)  
		m[2]=29; else m[2]=28;
    while (i<month) 
	{
		s=s+m[i];
		i=i+1;
	}
	s=s+day;
	s=s%7;
	if (year<=400)
	{
	for (n=1;n<=year-1;n++)
	{
		if ((n%4==0 && n % 100 !=0 ) || n % 400 == 0) a=2;else a=1;
		s=s+a;
	}
	s=s%7;
	}
	else 
	{
	year=year%400+400;
	for (n=1;n<=year-1;n++)
	{
		if ((n%4==0 && n % 100 !=0 ) || n % 400 == 0) a=2;else a=1;
		s=s+a;
	}
	s=s%7;
	}
	switch(s)
	{
	case 0:my_printf ("Sun.");break;
	case 1:my_printf ("Mon.");break;
    case 2:my_printf ("Tue.");break;
    case 3:my_printf ("Wed.");break;
    case 4:my_printf ("Thu.");break;
    case 5:my_printf ("Fri.");break;
    case 6:my_printf ("Sat.");break;
	}
	
	return 0;
}