#define NUM_ITER 86502

#include <header.h>

int main_bench()
{
	int a,b,c;
	my_scanf("%d %d %d",&a,&b,&c);

    int i,sum=0;

	if(a<400)
	{
		for(i=1;i<a;i++)
	{
		if((i%4==0&&i%100!=0)||i%400==0)
			sum+=366;
		else
			sum+=365;
	}

	static int d[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
	if((a%4==0&&a%100!=0)||a%400==0)
		d[2]=29;
	else
		d[2]=28;

	for(i=1;i<b;i++)
	{
		sum+=d[i];
	}

	sum+=c;

	int e;
	e=sum%7;

	switch(e)
	{
	case 0:my_printf("Sun.\n");
	break;
	case 1:my_printf("Mon.\n");
	break;
	case 2:my_printf("Tue.\n");
	break;
	case 3:my_printf("Wed.\n");
	break;
	case 4:my_printf("Thu.\n");
	break;
	case 5:my_printf("Fri.\n");
	break;
	case 6:my_printf("Sat.\n");
	break;
	}
	}

	if(a%400==0)
	{
	static int d[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	for(i=1;i<b;i++)
	{
		sum+=d[i];
	}

	sum+=c;
	sum+=5;

	int e;
	e=sum%7;

	switch(e)
	{
	case 0:my_printf("Sun.\n");
	break;
	case 1:my_printf("Mon.\n");
	break;
	case 2:my_printf("Tue.\n");
	break;
	case 3:my_printf("Wed.\n");
	break;
	case 4:my_printf("Thu.\n");
	break;
	case 5:my_printf("Fri.\n");
	break;
	case 6:my_printf("Sat.\n");
	break;
	}
	}


	if(a%400!=0&&a>400)
	{
		while(a>400)
        {
			a-=400;
		}
		for(i=1;i<a;i++)
	{
		if((i%4==0&&i%100!=0)||i%400==0)
			sum+=366;
		else
			sum+=365;
	}

	static int d[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
	if((a%4==0&&a%100!=0)||a%400==0)
		d[2]=29;
	else
		d[2]=28;

	for(i=1;i<b;i++)
	{
		sum+=d[i];
	}

	sum+=c;


	int e;
	e=sum%7;

	switch(e)
	{
	case 0:my_printf("Sun.\n");
	break;
	case 1:my_printf("Mon.\n");
	break;
	case 2:my_printf("Tue.\n");
	break;
	case 3:my_printf("Wed.\n");
	break;
	case 4:my_printf("Thu.\n");
	break;
	case 5:my_printf("Fri.\n");
	break;
	case 6:my_printf("Sat.\n");
	break;
	}
	}
	return 0;
	}




	

