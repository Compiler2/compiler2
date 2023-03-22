#define NUM_ITER 1310076

#include <header.h>

int main_bench(){
	int a,b,c,d,e,m,g;
	
	my_scanf("%d",&m);
	a=m/100;

	b=m/10;
	c=b-10*a;

	my_printf("%d\n",a);
	if(c>=5){
		my_printf("1\n");
		d=(c-5)/2;
		my_printf("%d\n",d);
		
		if((c-5)%2==0){
			my_printf("0\n");
		}
		else{
			my_printf("1\n");
		}
	}
	else{
		my_printf("0\n");
		my_printf("%d\n",d=c/2);

		if(c%2==0){
			my_printf("0\n");
		}
		else{
			my_printf("1\n");
		}
	}
	e=m-10*b;
	if(e>=5){
		my_printf("1\n");
		my_printf("%d\n",g=e-5);
	}
	else{
		my_printf("0\n");
		my_printf("%d\n",e);
	}return 0;
 }
