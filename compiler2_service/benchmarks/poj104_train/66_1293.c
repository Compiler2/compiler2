#include <header.h>

int main_bench()
{
	int a,b,c,d,e;
	my_scanf("%d %d %d",&a,&c,&d);
	b=0;
	if(a%100==0 && (a/100)%4!=0 && a%4!=0)
	{
        b=a/4+a-(a/100-a/400)-1;
	}
	else
	{
		b=a/4+a-(a/100-a/400)-2;
	}
	if(a%100==0 && (a/100)%4!=0 && a%4!=0)
	{
		switch(c)
		{
		case 1:
			b=b; 
			break;
		case 2:
			b=b+3;
			break;
		case 3:
			b=b+3;
			break;
		case 4:
			b=b+6;
			break;
		case 5:
			b=b+1;
			break;
		case 6:
			b=b+4;
			break;
		case 7:
			b=b+6;
			break;
		case 8:
			b=b+2;
			break;
		case 9:
			b=b+5;
			break;
		case 10:
			b=b+7;
			break;
		case 11:
			b=b+3;
			break;
		case 12:
			b=b+5;
			break;
		}
	}
	else
	{
	    switch(c)
		{
		case 1:
			b=b;
			break;
		case 2:
			b=b+3;
			break;
		case 3:
			b=b+4;
			break;
		case 4:
			b=b+7;
			break;
		case 5:
			b=b+2;
			break;
		case 6:
			b=b+5;
			break;
		case 7:
			b=b+7;
			break;
		case 8:
			b=b+3;
			break;
		case 9:
			b=b+6;
			break;
		case 10:
			b=b+1;
			break;
		case 11:
			b=b+4;
			break;
		case 12:
			b=b+6;
			break;
		}
	}
	b=b+d;
	e=b%7;
	switch(e)
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
	
