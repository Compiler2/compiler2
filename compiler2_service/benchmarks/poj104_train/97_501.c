#include <header.h>

int main_bench(){
	int n,m;
	my_scanf("%d",&n);
	m=n/100;
	my_printf("%d\n",m);
	m=(n%100)/50;
	my_printf("%d\n",m);
	m=((n%100)%50)/20;
	my_printf("%d\n",m);
	m=(((n%100)%50)%20)/10;
	my_printf("%d\n",m);
	m=((((n%100)%50)%20)%10)/5;
	my_printf("%d\n",m);
	m=(((((n%100)%50)%20)%10)%5)/1;
	my_printf("%d\n",m);
	return 0;
}

