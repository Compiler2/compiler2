#include <header.h>

int main_bench()
{
	int a,b,B,c,x,y;
	my_scanf("%d%d%d",&a,&b,&c);
	
	if((a%4==0)&&(a%100!=0)||(a%400==0))
	{
		switch(b)
		{
		case 1:
			B=0;
			break;
		case 2:
			B=31;
			break;
		case 3:
			B=31+29;
			break;
		case 4:
			B=31*2+29;
			break;
		case 5:
			B=31*2+29+30;
			break;
		case 6:
			B=31*3+29+30;
			break;
		case 7:
			B=31*3+29+30*2;
			break;
		case 8:
			B=31*4+29+30*2;
			break;
		case 9:
			B=31*5+29+30*2;
			break;
		case 10:
			B=31*5+29+30*3;
			break;
		case 11:
			B=31*6+29+30*3;
			break;
		case 12:
			B=31*6+29+30*4;
			break;
		}
	}
	else
	{
		switch(b)
		{
		case 1:
			B=0;
			break;
		case 2:
			B=31;
			break;
		case 3:
			B=31+28;
			break;
		case 4:
			B=31*2+28;
			break;
		case 5:
			B=31*2+28+30;
			break;
		case 6:
			B=31*3+28+30;
			break;
		case 7:
			B=31*3+28+30*2;
			break;
		case 8:
			B=31*4+28+30*2;
			break;
		case 9:
			B=31*5+28+30*2;
			break;
		case 10:
			B=31*5+28+30*3;
			break;
		case 11:
			B=31*6+28+30*3;
			break;
		case 12:
			B=31*6+28+30*4;
			break;
		}
	}
	x=a-1+(a-1)/4-(a-1)/100+(a-1)/400+B+c;
	y=x%7;
	switch(y)
	{
	case 1:
		my_printf("Mon.");
		break;
	case 2:
		my_printf("Tue.");
		break;
	case 3:
		my_printf("Wed.");
		break;
	case 4:
		my_printf("Thu.");
		break;
	case 5:
		my_printf("Fri.");
		break;
	case 6:
		my_printf("Sat.");
		break;
	case 0:
		my_printf("Sun.");
		break;
	}
	return 0;
}
