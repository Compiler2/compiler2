#define NUM_ITER 35588

#include <header.h>

int main_bench(){
	int n,i,a=0,b=0;
	int ai[200],bi[200];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&ai[i],&bi[i]);
	}
	for(i=0;i<n;i++){
		if((bi[i]-ai[i]==1)||(ai[i]-bi[i]==2)){
			a++;
		}else if(ai[i]==bi[i]){
			a=a+0;
		}else{
			b++;
		}
	}
	if(a>b){
		my_printf("A");
	}else if(a<b){
		my_printf("B");
	}else{
		my_printf("Tie");
	}



	return 0;
}