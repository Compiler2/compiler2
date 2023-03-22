#define NUM_ITER 63153

#include <header.h>

int main_bench(){
	int a;
	my_scanf("%d",&a);
	int b,c,d,e,n;
	n=2;
	while(n<=a){
		if(n==2)
		{
			my_scanf("%d %d",&d,&e);
			if(d>=e){
				b=d;
				c=e;
			}
			else{b=e;
			c=d;}
		}
		else{
			my_scanf("%d",&d);
			if(d>=b){
				c=b;
				b=d;
			}
			else if (d>=c){
				c=d;}
		}
	n++;
	}
	my_printf("%d\n%d\n",b,c);
	return 0;
}
