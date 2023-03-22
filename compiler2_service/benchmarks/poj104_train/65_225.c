#define NUM_ITER 37605

#include <header.h>

int main_bench(){
	int n,i,a,b,total=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a,&b);
		if(a==b){
		}
		else if(a==0&&b==1){
			total++;
		}
		else if(a==0&&b==2){
			total--;
		}
		else if(a==1&&b==0){
			total--;
		}	
		else if(a==1&&b==2){
			total++;
		}
		else if(a==2&&b==0){
			total++;
		}
		else if(a==2&&b==1){
			total--;
		}
	}
	if(total<0){
		my_printf("B");
	}
	else if(total==0){
		my_printf("Tie");
	}
	else if(total>0){
		my_printf("A");
	}
	return 0;
}