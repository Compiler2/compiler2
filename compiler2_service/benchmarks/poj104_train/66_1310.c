#define NUM_ITER 1282823

#include <header.h>

void CWD(int y, int m, int d)
{
	if(m==1||m==2)
	{
		m=m+12;
		y--;
	}
	int iWeek=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
	switch(iWeek)
	{
	case 0:my_printf("Mon.");break;
	case 1:my_printf("Tue.");break;
	case 2:my_printf("Wed.");break;
	case 3:my_printf("Thu.");break;
	case 4:my_printf("Fri.");break;
	case 5:my_printf("Sat.");break;
	case 6:my_printf("Sun.");break;
	}
}
int main_bench()
{
	int year=0,month=0,day=0;
	my_scanf("%d%d%d",&year,&month,&day);
	CWD(year,month,day);
}
