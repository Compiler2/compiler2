#define NUM_ITER 204040

#include <header.h>

int main_bench()
{
    unsigned long a,b,c,i;
	unsigned long d=0;
	i=1;
	my_scanf("%d %d %d",&a,&b,&c);
	a=a-(a-1)/400*400;
	while(i<a)
	{
		if(i%4!=0||i%100==0&&i%400!=0)
			d=d+1;
		else
			d=d+2;
		i=i+1;
	}
	i=1;
	while(i<b)
	{
		if (i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			d=d+3;
		else if (i==2)
		{
			if (a%4!=0||a%100==0&&a%400!=0)
				d=d+0;
			else
				d=d+1;
		}
		else
			d=d+2;
		i=i+1;
	}
	d=d+c;
	d=d%7;
	switch(d)
	{
	case 1:my_printf("Mon.\n");break;
	case 2:my_printf("Tue.\n");break;
	case 3:my_printf("Wed.\n");break;
	case 4:my_printf("Thu.\n");break;
	case 5:my_printf("Fri.\n");break;
	case 6:my_printf("Sat.\n");break;
	case 0:my_printf("Sun.\n");
	}
	return 0;
}
