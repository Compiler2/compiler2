#define NUM_ITER 39424

#include <header.h>

int main_bench(){
	int n,i,s=0;
	int a[200],b[200];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d", &a[i], &b[i]);
		if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
			s=s+1;
		}
		else if(a[i]==b[i]){
			s=s+0;
		}
		else{
			s=s-1;
		}
	}
	if(s>0){
		my_printf("A");
	}
	else if(s==0){
		my_printf("Tie");
	}
	else{
		my_printf("B");
	}
	return 0;
}
