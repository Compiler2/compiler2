#define NUM_ITER 1050880

#include <header.h>

int main_bench()
{
	int a,b,c;
	my_scanf("%d %d %d",&a,&b,&c);
	int sum=0;
	int m=(a-1)/4;
	int n=(a-1)/100;
	int p=(a-1)/400;
     sum=sum+((m-n+p)*(366%7))%7+(a-m+n-p-1)*(365%7);
	if((a%4==0)&&(a%100!=0)||(a%400==0))
	{
		if(b>=3)
		{
			switch(b)
			{
			case 3:sum=sum+31+29+c;break;
			case 4:sum=sum+31+29+31+c;break;
			case 5:sum=sum+31*2+29+30+c;break;
			case 6:sum=sum+31*3+29+30+c;break;
			case 7:sum=sum+31*3+29+30*2+c;break;
			case 8:sum=sum+31*4+29+30*2+c;break;
			case 9:sum=sum+31*5+29+30*2+c;break;
            case 10:sum=sum+31*5+29+30*3+c;break;
			case 11:sum=sum+31*6+29+30*3+c;break;
			case 12:sum=sum+31*6+29+30*4+c;break;
			}
		}
		else
		{
			switch(b)
			{
			case 1:sum=sum+c;break;
			case 2:sum=sum+31+c;break;
			}
		}
	}
	else
	{
	switch(b)
		{
		case 1:sum=sum+c;break;
		case 2:sum=sum+31+c;break;
		case 3:sum=sum+31+28+c;break;
        case 4:sum=sum+31+28+31+c;break;
		case 5:sum=sum+31*2+28+30+c;break;
		case 6:sum=sum+31*3+28+30+c;break;
		case 7:sum=sum+31*3+28+30*2+c;break;
		case 8:sum=sum+31*4+28+30*2+c;break;
		case 9:sum=sum+31*5+28+30*2+c;break;
        case 10:sum=sum+31*5+28+30*3+c;break;
		case 11:sum=sum+31*6+28+30*3+c;break;
		case 12:sum=sum+31*6+28+30*4+c;break;
		}
	}
	int x=sum%7;
	switch(x)
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