#define NUM_ITER 35982

#include <header.h>

int main_bench(){
	int n,x,y,i,a,b;
	my_scanf("%d",&n);
	a=0;b=0;i=0;
	while (i<n){ 
		my_scanf("%d%d",&x,&y);
		if ((x==0)&&(y==1)){
			a=a+1;
		}
		else if ((x==0)&&(y==2)){
			b=b+1;
		}
		else if ((x==1)&&(y==0)){
			b=b+1;
		}
		else if ((x==1)&&(y==2)){
			a=a+1;
		}
		else if ((x==2)&&(y==0)){
			a=a+1;
		}
		else if ((x==2)&&(y==1)){
			b=b+1;
		}
		i=i+1;
	}
	if (a>b) {
		my_printf("A");
	}
	else if (a<b) {
		my_printf("B");
	}
	else if (a=b){
		my_printf("Tie");
	}
return 0;
}
