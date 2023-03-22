#define NUM_ITER 929157

#include <header.h>


int main_bench()
{
	int week;
	my_scanf("%d",&week);
	int i;
	int day=0;
	int dy;
	for(i=1;i<=12;i++)
	{
	
		dy=day+12+week;
		if(dy%7==5)
		{
			my_printf("%d\n",i);
		}	if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			day=day+31;
		}
		else if(i==2)
		{
			day=day+28;
		}
		else if(i==4||i==6||i==9||i==11)
		{
			day=day+30;
		}
	}
	return 0;
}