#define NUM_ITER 35603

#include <header.h>

int main_bench(){
	int n,a=0,b=0,x[200],y[200];
	my_scanf("%d",&n);

	for(int i=0;i<n;i++){
		my_scanf("%d%d",&(x[i]),&(y[i]));
		if(y[i]-x[i]==1||x[i]-y[i]==2){
			a++;
		}else if(x[i]-y[i]==1||y[i]-x[i]==2){
			b++;
		}else if(x[i]==y[i]){
			continue;
		}
	}
	if(a==b){
		my_printf("Tie");
	}else if(a>b){
		my_printf("A");
	}else if(a<b){
		my_printf("B");
	}
	
	return 0;
}
