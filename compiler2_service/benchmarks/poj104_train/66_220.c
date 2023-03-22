#define NUM_ITER 220233

#include <header.h>

int main_bench()
{
	int year,month,day,d,sum=0,i,e,f,g;
	my_scanf("%d %d %d",&year,&month,&day);
	e=(year-1)/4;
         f=(year-1)/100;
         g=(year-1)/400;
         sum=(e-f+g)*2+(year-e+f-g-1)*1;

	for(i=1;i<month;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			sum=sum+31;
		}
		if(i==2){
			if(((year%4==0)&&(year%100!=0))||year%400==0){
				sum=sum+29;
			}
			else
			{
				sum=sum+28;
			}
		}
		else if(i==4||i==6||i==9||i==11){

			sum=sum+30;
		}
	}
   sum=sum+day;

	d=sum%7;
	if(d==0)
		my_printf("Sun.");
    if(d==1)
		my_printf("Mon.");
    if(d==2)
		my_printf("Tue.");
    if(d==3)
		my_printf("Wed.");
    if(d==4)
		my_printf("Thu.");
    if(d==5)
		my_printf("Fri.");
    if(d==6)
		my_printf("Sat.");


	return 0;
}
