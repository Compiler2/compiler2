#define NUM_ITER 61737

#include <header.h>

int main_bench(){
	int i=0;
	int n;
	my_scanf("%d",&n);
	int a,b;
	int x,y,l;
	my_scanf("%d%d",&x,&y);
	if(x>y){
		a=x;
		b=y;
	}else{
		a=y;
		b=x;
	}
	while(i<=n-3){
		my_scanf("%d",&l);
		if(l>a){
			b=a;
			a=l;
		}else{
			if(l>b){
				b=l;
			}
		}
		i++;
	}
	my_printf("%d\n%d",a,b);
		return 0;
}