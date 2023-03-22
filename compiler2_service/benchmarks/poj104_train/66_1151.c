#include <header.h>



int dd[] = {0,0,31,59,90,120,151,181,212,243,273,304,344};

int main_bench()
{
	int y,m,d;
	my_scanf("%d%d%d",&y,&m,&d);
	
	int l = (y-1)/4-(y-1)/100+(y-1)/400;
	
	
	if(m>2 && y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0)
				l++;
		}
		else
		{
			l++;
		}
	}
	
	int mod = (((y-1) * (365%7)) % 7 + l + dd[m] + d)%7;
	
	switch(mod)
	{
	case 1:
		my_printf("Mon.\n");
		break;
	case 2:
		my_printf("Tue.\n");
		break;
	case 3:
		my_printf("Wed.\n");
		break;
	case 4:
		my_printf("Thu.\n");
		break;
	case 5:
		my_printf("Fri.\n");
		break;
	case 6:
		my_printf("Sat.\n");
		break;
	case 0:
		my_printf("Sun.\n");
		break;
	}
	
	return 0;
}