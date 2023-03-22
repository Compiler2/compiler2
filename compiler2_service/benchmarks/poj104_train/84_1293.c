#define NUM_ITER 56566

#include <header.h>

int main_bench()
{
   int n,a,b,c,d,i;
	my_scanf("%d\n%d\n%d\n",&n,&a,&b);
	if(a<b){
		c=a;
		b=a;
		a=c;
	}
	for(i=3;i<n;i++){
		my_scanf("%d\n",&d);
		if(d>=a){
			b=a;
			a=d;
		}
		else if(d>=b){
			b=d;
		}
	}
my_scanf("%d",&d);
		if(d>=a){
			b=a;
			a=d;
		}
		else if(d>=b){
			b=d;
		}
	my_printf("%d\n%d\n",a,b);
   return 0;
}