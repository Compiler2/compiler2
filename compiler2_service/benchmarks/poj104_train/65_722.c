#define NUM_ITER 37805

#include <header.h>

int main_bench(){
	int n,a[200],b[200],i,sum1=0,sum2=0;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
		if(a[i]==b[i]){
			sum1=sum1+1;
			sum2=sum2+1;
		}
		if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
			sum1=sum1+1;
		}
		if((a[i]==0&&b[i]==2)||(a[i]==1&&b[i]==0)||(a[i]==2&&b[i]==1)){
			sum2=sum2+1;
		}
	}
	if(sum1>sum2){
		my_printf("A");
	}
	if(sum1<sum2){
		my_printf("B");
	}
	if(sum1==sum2){
		my_printf("Tie");
	}
	return 0;
}