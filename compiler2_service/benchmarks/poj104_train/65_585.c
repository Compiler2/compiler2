#define NUM_ITER 35801

#include <header.h>

int main_bench(){
	int n,a,b,c,h=0,k=0;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		my_scanf("%d %d",&a,&b);
		c=a-b;
		if(c==1){
			k++;
		}else if(c==2){
			h++;
		}else if(c==-1){
			h++;
		}else if(c==-2){
			k++;
		}else if(c==0){
			h++;
			k++;
		}
	}
	if(h<k){
		my_printf("B");
	}else if(h>k){
		my_printf("A");
	}else if(h==k){
		my_printf("Tie");
	}
	return 0;
}