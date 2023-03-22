#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	my_printf("%d\n",n/100);
	n-=100*(n/100);
	my_printf("%d\n",n/50);
	n-=50*(n/50);
    my_printf("%d\n",n/20);
	n-=20*(n/20);
    my_printf("%d\n",n/10);
	n-=10*(n/10);
    my_printf("%d\n",n/5);
	n-=5*(n/5);
    my_printf("%d\n",n);
}