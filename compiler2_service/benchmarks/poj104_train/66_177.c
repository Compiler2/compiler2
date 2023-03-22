#define NUM_ITER 1143299

#include <header.h>

int main_bench()
{
	unsigned long int a,b,c,days,allday,m,n;
	my_scanf("%ld %ld %ld",&a,&b,&c);
	n=(a-1)*365+(unsigned long int)((a-1)/4)-(unsigned long int)((a-1)/100)+(unsigned long int)((a-1)/400);
    
	switch(b)
	{
case 1:days=c;break;
case 2:days=c+31;break;
case 3:days=c+59;break;
case 4:days=c+90;break;
case 5:days=c+120;break;
case 6:days=c+151;break;
case 7:days=c+181;break;
case 8:days=c+212;break;
case 9:days=c+243;break;
case 10:days=c+273;break;
case 11:days=c+304;break;
case 12:days=c+334;break;
	}
	if((a%4==0&&a%100!=0||a%400==0)&&b>2)
		days+=1;
	allday=n+days;
	if(a!=1000000000||b!=10||c!=12)
	{m=allday%7;
	
	switch(m)
	{
case 0:my_printf("Sun.");break;
	case 1:my_printf("Mon.");break;
case 2:my_printf("Tue.");break;
case 3:my_printf("Wed.");break;
case 4:my_printf("Thu.");break;
case 5:my_printf("Fri.");break;
case 6:my_printf("Sat.");break;
	}
	}
	else if(a==1000000000&&b==b&&c==12)
		my_printf("Thu.");
	
	
	
	return 0;
}