#define NUM_ITER 1590471

#include <header.h>

int main_bench()
{
	int a,b,c,d,e;
	my_scanf("%d",&a);
	b=a%10;
	c=(a%100-b)/10;
	d=(a%1000-b-c*10)/100;
	e=a/1000;
	if(e==0){
		if(d==0){
			if(c==0){
				my_printf("%d",b);
			}
			else {
				my_printf("%d%d",b,c);
			}
		}
		else{
			my_printf("%d%d%d",b,c,d);
		}
	}
	else {
		my_printf("%d%d%d%d",b,c,d,e);
	}
	return 0;
}