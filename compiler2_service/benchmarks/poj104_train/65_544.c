#define NUM_ITER 31964

#include <header.h>

int main_bench(){
	int n,a[200],b[200],i,e,t;
	my_scanf("%d",&n);
	e=0;
	t=0;
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
			e++;
		}
	}
	for(i=0;i<n;i++){
		if((b[i]==0&&a[i]==1)||(b[i]==1&&a[i]==2)||(b[i]==2&&a[i]==0)){
			t++;
		}
	}
	if(e==t){
		my_printf("Tie");
	}else if(e>t){
		my_printf("A");
	}else{
		my_printf("B");
	}
	return 0;
}