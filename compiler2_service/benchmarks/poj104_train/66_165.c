#define NUM_ITER 1305473

#include <header.h>

int main_bench()
{
	unsigned int year,month,day,a,all,w,q;
	my_scanf("%d%d%d",&year,&month,&day);
	if((year%4==0&&year%100!=0)||(year%400==0))
	{
		switch(month)
		{
		case 1:a=366;break;
		case 2:a=335;break;
		case 3:a=306;break;
		case 4:a=275;break;
		case 5:a=245;break;
		case 6:a=214;break;
		case 7:a=184;break;
		case 8:a=153;break;
		case 9:a=122;break;
		case 10:a=92;break;
		case 11:a=61;break;
		case 12:a=31;break;
		}
		all=366-a+day;
		
	}
	else
	{
		switch(month)
		{
		case 1:a=365;break;
		case 2:a=334;break;
		case 3:a=306;break;
		case 4:a=275;break;
		case 5:a=245;break;
		case 6:a=214;break;
		case 7:a=184;break;
		case 8:a=153;break;
		case 9:a=122;break;
		case 10:a=92;break;
		case 11:a=61;break;
		case 12:a=31;break;
		}
		all=365-a+day;
		
	}

w= (year-1)+ (year-1)/4 - (year-1)/100 + (year-1)/400 + all ;
q=w%7;
switch(q)
	{
	case 1:my_printf("Mon.\n");break;
	case 2:my_printf("Tue.\n");break;
	case 3:my_printf("Wed.\n");break;
	case 4:my_printf("Thu.\n");break;
	case 5:my_printf("Fri.\n");break;
	case 6:my_printf("Sat.\n");break;
	case 0:my_printf("Sun.\n");break;
	}
return 0;
}

