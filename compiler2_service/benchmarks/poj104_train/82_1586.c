#define NUM_ITER 39180

#include <header.h>

int main_bench(){
    int x,a,b;
	my_scanf("%d",&x);
	int y=0;
	int max=0;
	for(int i=0;i<x;i++){
	my_scanf("%d%d",&a, &b);
	if(a>=90&&a<=140&&b>=60&&b<=90){y++;
	if(y>=max){max=y;}
	}

	else{y=0;}
	}
	my_printf("%d",max);
	return 0;
}