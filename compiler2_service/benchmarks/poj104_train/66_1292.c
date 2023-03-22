#include <header.h>

int leap(int x)
{
	if(x%4!=0){
		return 0;
	}
	else if(x%100==0&&x%400!=0){
		return 0;
	}
	else{
		return 1;
	}
}
int main_bench()
{
	int leap(int x);
	int y,m,d,p=0;
	my_scanf("%d%d%d",&y,&m,&d);
	int i;
	int sumy=0,summ=0;
	for(i=1;i<=(y-1)%400;i++){
		if(leap(i)==0){
			sumy=(sumy+365)%7;
		}
		else if(leap(i)==1){
			sumy=(sumy+366)%7;
		}
	}
	int b1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	if(leap(y)==0){
		for(i=0;i<m-1;i++){
			summ=(summ+b1[i])%7;
		}
	}
	else if(leap(y)==1){
		for(i=0;i<m-1;i++){
		summ=(summ+b2[i])%7;
		}
	}
	int re=sumy+summ+d;
	p=re%7;

	switch(p){
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
}
