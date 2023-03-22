#define NUM_ITER 19110

#include <header.h>

int main_bench(){
	int n,i,j,a=3;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}

		if(j==i){
			if(i-a==2){
			my_printf("%d %d\n",a,i);
			};
			a=i;
		}
	}
	if(a==3){
	my_printf("empty");
	}
	return 0;
}