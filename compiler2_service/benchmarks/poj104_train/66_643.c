#define NUM_ITER 41219

#include <header.h>

int main_bench()
{
	int year,month,day,i,sum=0,t;
	int month1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int month2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d %d %d",&year,&month,&day);
	year=year%400;
	if(year==0){
		sum=-2;
	}
	for(i=0;i<year;i++){
		if(i==0){
			sum+=0;
		}
		else if((i%4==0&&i%100!=0)||i%400==0){
			sum+=366;
		}
		else{
			sum+=365;
		}
	}

	for(i=0;i<month;i++){
		if((year%4==0&&year%100!=0)||year%400==0){
			sum+=month2[i];
		}
		else{
			sum+=month1[i];
		}
	}
	sum+=day;
	t=sum%7;
	switch(t){
	case 0:
		my_printf("Sun.\n");
		break;
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
	}
}