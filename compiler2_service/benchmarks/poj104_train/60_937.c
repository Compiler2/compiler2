#define NUM_ITER 3470

#include <header.h>

int is_sushu(int i);
int main_bench(){
	int n,s=0;
	my_scanf("%d",&n);	
		for(int i=2;i<=n-2;i++){
			if(is_sushu(i)&&is_sushu(i+2)){
				my_printf("%d %d\n",i,i+2);
				s++;
			}
		}
		if(s==0)
			my_printf("empty");
return 0;
}
int is_sushu(int i){
	int p,q=0;
	for(p=2;p<=i;p++){
		if(i%p==0)
			q++;
	}
	if(q==1){
		return 1;
	}
return 0;
}