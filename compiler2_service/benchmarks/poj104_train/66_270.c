#define NUM_ITER 484733

#include <header.h>

void dayprint(int a){
	switch(a){
	case 1:my_printf("Mon.");break;
    case 2:my_printf("Tue.");break;
    case 3:my_printf("Wed.");break;
    case 4:my_printf("Thu.");break;
    case 5:my_printf("Fri.");break;
    case 6:my_printf("Sat.");break;
    case 7:my_printf("Sun.");break;
	}
}
int main_bench()
{
	int y,m,d,i,a,sum;
	int days[12]={31,0,31,30,31,30,31,31,30,31,30,31};
	my_scanf("%d %d %d",&y,&m,&d);
	sum=y%7+y/4-y/100+y/400;
	if(y%400==0||(y%4==0&&y%100!=0)){
		days[1]=29;
		sum--;}
	else {days[1]=28;}
	for(i=1;i<m;i++){
		sum+=days[i-1];
	}
	sum+=d-1;
	if(sum%7==0) a=7;
	else a=sum%7;
	dayprint(a);
	return 0;
}