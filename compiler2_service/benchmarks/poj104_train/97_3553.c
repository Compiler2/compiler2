#define NUM_ITER 956574

#include <header.h>



int main_bench(){
	int n=0,a[7]={0};
	my_scanf("%d\n",&n);
	a[1]=n/100;
	a[2]=(n%100)/50;
	a[3]=(n%50)/20;
	a[4]=((n%50)%20)/10;
	a[5]=(n%10)/5;
	a[6]=(n%5)/1;
	for(int i=1;i<=6;i++)
		my_printf("%d\n",a[i]);
	return 0;
}