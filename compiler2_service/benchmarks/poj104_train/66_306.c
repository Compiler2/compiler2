#define NUM_ITER 1031795

#include <header.h>

int main_bench()
{
	long y=0,m=0,d=0,x=0,z=0,u=0,i=0;
	long s=0;
	my_scanf("%ld%ld%ld",&y,&m,&d);
	y=y%2000000;
	x=(y-1)/100;
	z=(y-1)/4;
	for(i=1;i<=x;i++)
	{
		if(i%4!=0) z=z-1;
	}
	s=z*366+(y-z-1)*365;
	
	switch(m)
	{
	case 1:s=s;break;
    case 2:s=s+31;break;
    case 3:s=s+60;break;
    case 4:s=s+91;break;
    case 5:s=s+121;break;
    case 6:s=s+152;break;
    case 7:s=s+182;break;
    case 8:s=s+213;break;
    case 9:s=s+244;break;
    case 10:s=s+274;break;
    case 11:s=s+305;break;
    case 12:s=s+335;
	}
	if(y%400!=0 && (y%4!=0 || y%100==0))
	{
		s=s-1;
	}
	s=s+d;
	u=s%7;
	switch(u)
	{
	case 0:my_printf("Sun.");break;
	case 1:my_printf("Mon.");break;
	case 2:my_printf("Tue.");break;
	case 3:my_printf("Wen.");break;
	case 4:my_printf("Thu.");break;
	case 5:my_printf("Fri.");break;
    case 6:my_printf("Sat.");
	}
}