#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	my_printf("%d\n",n/100);
	n%=100;
	if(n>=50){
		my_printf("1\n");
		n-=50;
	}
	else my_printf("0\n");
	my_printf("%d\n",n/20);
	n-=20*(n/20);
	if(n>=10){
		my_printf("1\n");
		n-=10;
	}
	else my_printf("0\n");
	if(n>=5){
		my_printf("1\n");
		n-=5;
	}
	else my_printf("0\n");
	my_printf("%d\n",n);
	return 0;
}