#define NUM_ITER 780466

#include <header.h>

int main_bench()
{
	long int y,m,d;
	my_scanf("%d %d %d",&y,&m,&d);

	long int s,r;
	if(y>=2){
		r=(y-1)/4-(y-1)/100+(y-1)/400;
		s=((y-1)+r)%7;
	}else{
		s=0;
	}
	if((y%4==0&&y%100!=0)||y%400==0){
		switch(m)
		{
		case 1:
			s=(s+d)%7;
			break;
		case 2:
			s=(s+31+d)%7;
			break;
		case 3:
			s=(s+31+29+d)%7;
			break;
		case 4:
			s=(s+31+29+31+d)%7;
			break;
		case 5:
			s=(s+31+29+31+30+d)%7;
			break;
		case 6:
			s=(s+31+29+31+30+31+d)%7;
			break;
		case 7:
			s=(s+31+29+31+30+31+30+d)%7;
			break;
		case 8:
			s=(s+31+29+31+30+31+30+31+d)%7;
			break;
		case 9:
			s=(s+31+29+31+30+31+30+31+31+d)%7;
			break;
		case 10:
			s=(s+31+29+31+30+31+30+31+31+30+d)%7;
			break;
		case 11:
			s=(s+31+29+31+30+31+30+31+31+30+31+d)%7;
			break;
		case 12:
			s=(s+31+29+31+30+31+30+31+31+30+31+30+d)%7;
			break;
		}
	}else{
			switch(m)
		{
		case 1:
			s=(s+d)%7;
			break;
		case 2:
			s=(s+31+d)%7;
			break;
		case 3:
			s=(s+31+28+d)%7;
			break;
		case 4:
			s=(s+31+28+31+d)%7;
			break;
		case 5:
			s=(s+31+28+31+30+d)%7;
			break;
		case 6:
			s=(s+31+28+31+30+31+d)%7;
			break;
		case 7:
			s=(s+31+28+31+30+31+30+d)%7;
			break;
		case 8:
			s=(s+31+28+31+30+31+30+31+d)%7;
			break;
		case 9:
			s=(s+31+28+31+30+31+30+31+31+d)%7;
			break;
		case 10:
			s=(s+31+28+31+30+31+30+31+31+30+d)%7;
			break;
		case 11:
			s=(s+31+28+31+30+31+30+31+31+30+31+d)%7;
			break;
		case 12:
			s=(s+31+28+31+30+31+30+31+31+30+31+30+d)%7;
			break;
		}
	}



	switch(s)
	{
	case 1:
		my_printf("Mon.");
		break;
	case 2:
		my_printf("Tue.");
		break;
	case 3:
		my_printf("Wed.");
		break;
	case 4:
		my_printf("Thu.");
		break;
	case 5:
		my_printf("Fri.");
		break;
	case 6:
		my_printf("Sat.");
		break;
	case 0:
		my_printf("Sun.");
		break;
	}
	return 0;

	}
