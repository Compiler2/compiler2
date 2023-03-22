#define NUM_ITER 31367

#include <header.h>

int main_bench(){
	int n,i,a,b,c,j=0,k=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d\n",&a,&b);
		c=a-b;
		if(c==0){
		continue;
		}else if(c==-1||c==2){
			j++;
		}else{
			k++;
		}
	}
if(j>k){
			my_printf("A");
		}else if(k>j){
			my_printf("B");
		}else if(j==k){
			my_printf("Tie");
		}

	return 0;
}