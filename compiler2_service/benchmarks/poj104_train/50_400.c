#define NUM_ITER 917575

#include <header.h>

int main_bench()
{
	int w, i, s, t, n;
	my_scanf("%d", &w);
	for(i=0;i<12;i++){
		if(i==0){
			s=13;
		}
		else if(i==1||i==3||i==5||i==7||i==8||i==10){
			s+=31;
		}
		else if(i==2){
			s+=28;
		}
		else if(i==4||i==6||i==9||i==11){
			s+=30;
		}
		t=s-6+w;
		if(t%7==0){
			n=i+1;
			my_printf("%d\n", n);
		}
	}
	return 0;
}
		