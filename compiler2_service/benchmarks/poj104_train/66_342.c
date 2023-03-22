#include <header.h>

int main_bench()
{
	int year,month,day,k,n,l[4];	
	my_scanf("%d%d%d",&year,&month,&day);
	n=(year-1)%7+(year-1)/4-(year-1)/100+(year-1)/400;
	k=2*(month-1);
	switch(month-1)
	{
		case 1: k++;break;
		case 2: k--;break;
		case 5: k++;break;
		case 6: k++;break;
		case 7: k=k+2;break;
		case 8: k=k+3;break;
		case 9: k=k+3;break;
		case 10: k=k+4;break;
		case 11: k=k+4;break;
	} 
	l[2]=(n+k+day)%7;
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
				if(month>2)
					l[2]++;					
		}
		else
			{
				if(month>2)
					l[2]++;
			}
	}
	l[3]=l[2]%7;
	switch(l[3])
	{
		case 0: my_printf("Sun.\n");break;
		case 1: my_printf("Mon.\n");break;
		case 2: my_printf("Tue.\n");break;
		case 3: my_printf("Wed.\n");break;
		case 4: my_printf("Thu.\n");break;
		case 5: my_printf("Fri.\n");break;
		case 6: my_printf("Sat.\n");break;	
	}			
}
