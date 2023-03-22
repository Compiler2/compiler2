#include <header.h>

int main_bench(){
	int year,month,day,xingqi,k,a,b,c;
	my_scanf("%d%d%d",&year,&month,&day);
	int d[13]={0,31,31,28,31,30,31,30,31,31,30,31,30};

    k=month;
    if(year==1){
		for(;month>1;month--)day+=d[month];
		day=day%7;
	}
	else{
		for(;month>1;month--)day+=d[month];
		day+=year%7-1;
		day=day%7;
		if(k<3)year--;
		a=year/4;
		b=year/100;
		c=year/400;

		day=day+a+c-b;
		
		
        day=day%7;

	}
	
	xingqi=day;
	switch(xingqi){
		case 1:my_printf("Mon.\n");break;
		case 2:my_printf("Tue.\n");break;
		case 3:my_printf("Wed.\n");break;
		case 4:my_printf("Thu.\n");break;
		case 5:my_printf("Fri.\n");break;
		case 6:my_printf("Sat.\n");break;
		case 0:my_printf("Sun.\n");break;
	}
	return 0;
}
