#define NUM_ITER 46693

#include <header.h>

int main_bench(){
	int year,month,date;
	int i,n=0,xq;
	my_scanf("%d%d%d",&year,&month,&date);
    year=year%400;
	if(year==0){
		year=400;
	}
	for(i=1;i<year;i++){
		if(i%4==0&&i%100!=0||i%400==0){
			n+=366;
		}else{
			n+=365;
		}
	}
	for(i=1;i<month;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10){
			n+=31;
		}else if(i==4||i==6||i==9||i==11){
			n+=30;
		}else{
			if(year%4==0&&year%100!=0||year%400==0){
				n+=29;
			}
			else{
				n+=28;
			}
		}
	}
	n+=date;
	xq=n%7;
	switch(xq){
	    case 0:my_printf("Sun.");break;
        case 1:my_printf("Mon.");break;
        case 2:my_printf("Tue.");break;
        case 3:my_printf("Wed.");break;
        case 4:my_printf("Thu.");break;
        case 5:my_printf("Fri.");break;
        case 6:my_printf("Sat.");break;
	}
	return 0;
}