#include <header.h>

int main_bench(){
	int n,a;
	my_scanf("%d",&n);
	for(a=0;n>=100;a++){
		n-=100;
	}my_printf("%d\n",a);
	for(a=0;n>=50;a++){
		n-=50;
	}my_printf("%d\n",a);
	for(a=0;n>=20;a++){
		n-=20;
	}my_printf("%d\n",a);
	for(a=0;n>=10;a++){
		n-=10;
	}my_printf("%d\n",a);
	for(a=0;n>=5;a++){
		n-=5;
	}my_printf("%d\n",a);
	for(a=0;n>=1;a++){
		n-=1;
	}my_printf("%d\n",a);
	return 0;
}

