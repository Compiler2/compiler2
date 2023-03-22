#include <header.h>

int main_bench()
{
	int n,i,a=0;
    my_scanf("%d",&n);
	if(n>=100){
		my_printf("%d\n",(n/100));
	}
	else{
		my_printf("0\n");
	}

	a=n%100;
	if(a>=50){
		my_printf("%d\n",a/50);
		a=a%50;
	}
	else{
		my_printf("0\n");
	}
    if(a>=20){
		my_printf("%d\n",a/20);
		a=a%20;
	}
	else{
		my_printf("0\n");
	}
	if(a>=10){
		my_printf("%d\n",a/10);
		a=a%10;
	}
	else{
		my_printf("0\n");
	}
	if(a>=5){
		my_printf("%d\n",a/5);
		a=a%5;
	}
	else{
		my_printf("0\n");
	}
	if(a<=4){
		my_printf("%d\n",a);
		
	}
	else{
		my_printf("0");
	}

    
		


	return 0; 
}