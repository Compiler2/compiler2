#include <header.h>

int main_bench()
{
	unsigned int y,m,d,i,n=0,temp,p;
	my_scanf("%d %d %d",&y,&m,&d);
	n+=(y-1)/4*(1*4+1)-(y-1)/100+(y-1)/400;
	n+=(y-1)%4*1;
	if(y%400==0||(y%100!=0&&y%4==0))
		p=29;
	else
		p=28;
	for(i=1;i<m;i++)
	{
		switch (i)
		{
		case 1:
			n+=31;
			break;
		case 2:
			n+=p;
			break;
		case 3:
			n+=31;
			break;
		case 4:
			n+=30;
			break;
		case 5:
			n+=31;
			break;
		case 6:
			n+=30;
			break;
		case 7:
			n+=31;
			break;
		case 8:
			n+=31;
			break;
		case 9:
			n+=30;
			break;
		case 10:
			n+=31;
			break;
		case 11:
			n+=30;
			break;
		default :
			break;
		}
	}
	n+=d;
	temp=n%7;
	switch(temp)
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
