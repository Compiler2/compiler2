#define NUM_ITER 277213

#include <header.h>


int day(int month){
	int t=0,i;
	for(i=1;i<month;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			t+=31;
		}else if(i==4||i==6||i==9||i==11){
			t+=30;
		}else if(i==2){
			t+=28;
		}
	}

	return t;
}

int main_bench()
{
	int w,i,t,a;

	my_scanf("%d",&w);

	for(i=1;i<=12;i++){
		t=0;
		t=13+day(i);
		
		a=t%7+w-1;
		if(a>7){
			a=a-7;	
		}
		if(a==5){
			my_printf("%d\n",i);
		}
	}
	return 0;
}