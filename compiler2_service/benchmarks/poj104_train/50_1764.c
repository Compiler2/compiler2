#define NUM_ITER 870162

#include <header.h>

int month(int m);
int main_bench()
{
	int w,m,result=0;
	my_scanf("%d",&w);
	for(m=0;m<12;m++){
		result+=month(m);
		if((w+result)%7==0){
			my_printf("%d\n",m+1);
		}
	}
	return 0;
}
int month(int m)
{
	if(m==0){
		return 0;
	}
	else if(m==1||m==3||m==5||m==7||m==8||m==10){
		return 31;
	}
	else if(m==2){
		return 28;
	}
	else if(m==4||m==6||m==9||m==11){
		return 30;
	}
}