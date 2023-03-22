#define NUM_ITER 40339

#include <header.h>

int main_bench() {
	int n,i,a,b,x=0,y=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a,&b);
		if(a!=b){
			if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
				x=x+1;
			else y=y+1;
		}
	}
	if(x>y){
		my_printf("A");
	}
	if(x<y){
		my_printf("B");
	}
	if(x==y){
		my_printf("Tie");
	}


	return 0;
}
