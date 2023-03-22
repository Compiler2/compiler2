#define NUM_ITER 299161

#include <header.h>

int main_bench(){
	int year,month,day;
	my_scanf("%d%d%d",&year,&month,&day);
	int runnian=0;
	runnian=(year-1)/4-(year-1)/100+(year-1)/400;
	

	int yunian=year%7-1;
	int total;
	total=yunian*365+day;
	int n[12]={0,31,59,90,120,151,181,212,243,273,304,334};
	int j=0;
	while(j+1<month){
		j++;
	}
	total=total+n[j];
	if((year/4==0&&year/100!=0)||(year/400==0)){
		if(j>1){
			total++;
		}
	}
	total+=runnian;
	int today;
	today=total%7;
	switch (today){
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