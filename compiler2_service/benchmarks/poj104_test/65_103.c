#define NUM_ITER 35344

#include <header.h>

int main_bench()
{
	int n,a,b,i,c,d;
	c=0;
	d=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a,&b);
		if(a==0&&b==1){
			c=c+1;
		}else if(a==0&&b==2){
			d=d+1;
		}else if(a==1&&b==0){
			d=d+1;
		}else if(a==1&&b==2){
			c=c+1;
		}else if(a==2&&b==0){
			c=c+1;
		}else if(a==2&&b==1){
			d=d+1;
		}else{
			c=c;
			d=d;
		}
	}
	if(c>d){
		my_printf("A");
	}else if(c<d){
		my_printf("B");
	}else{
		my_printf("Tie");
	}
	return 0;
}
