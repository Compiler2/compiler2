#define NUM_ITER 60067

#include <header.h>

int main_bench()
{
	int a, b=-1,c=-2;
	my_scanf("%d",&a);
	int d;
	for(int i=0;i<a;i++){
		my_scanf("%d",&d);
		if(d>b){
			c = b;
			b = d;
		}
		else if(d<b && d>c){
			c = d;
		}
	}
    my_printf("%d\n%d",b,c);
	return 0;
}