#define NUM_ITER 1757545

#include <header.h>


int main_bench()
{
	int n;
	int n100=0,n50=0,n20=0,n10=0,n5=0,n1=0;
	my_scanf("%d",&n);
	while(n>=100){
		n=n-100;
		n100++;
	}
	while(n>=50){
		n=n-50;
		n50++;
	}
	while(n>=20){
		n=n-20;
		n20++;
	}
	while(n>=10){
		n=n-10;
		n10++;
	}
	while(n>=5){
		n=n-5;
		n5++;
	}
	while(n>=1){
		n=n-1;
		n1++;
	}
	my_printf("%d\n%d\n%d\n%d\n%d\n%d",n100,n50,n20,n10,n5,n1);
	
	return 0;
}
