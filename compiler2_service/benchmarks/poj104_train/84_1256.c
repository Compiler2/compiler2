#define NUM_ITER 59075

#include <header.h>

int main_bench(){
	int n,i,a,b,c;
	i=1;
	my_scanf("%d",&n);
	while(i<=n){
		my_scanf("%d",&a);
		if(i==1){
			b=a;
			a=0;
		}else{
			if(a>b){
				c=b;
				b=a;
			}else{
				b=b;
				if(a>=c){
					c=a;
				}else{
					c=c;
				}
			}
		}
		i++;
	}
	my_printf("%d\n%d\n",b,c);
	return 0;
}