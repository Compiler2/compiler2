#include <header.h>

int main_bench()
{
    int m,d; 
    unsigned int y,i,date=0;
	my_scanf("%d%d%d",&y,&m,&d); 
    y=y-(y/2800-1)*2800;
	for(i=1;i<y;i++)
	{
		if (i%100!=0 && i%4==0 || i%400 == 0)
			date+=2;
		else
			date+=1;
	}
    for(i=1;i<m;i++)
	{
		if (i==2)
		{
			if (y%100!=0 && y%4==0 || y%400 == 0)
				date+=1;
			continue;
		}
		if (i==4 || i==6 || i==9|| i==11)
		{
			date+=2;
			continue;
		}
		date+=3;
    } 
    date+=d;
    switch (date%7)
	{
	case 1: my_printf("Mon.\n");break;
	case 2: my_printf("Tue.\n");break;
	case 3: my_printf("Wed.\n");break;
	case 4: my_printf("Thu.\n");break;
	case 5: my_printf("Fri.\n");break;
	case 6: my_printf("Sat.\n");break;
	case 0: my_printf("Sun.\n");break;
	}
	return 0;
}
