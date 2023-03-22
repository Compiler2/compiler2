#define NUM_ITER 3889

#include <header.h>

int main_bench(){
	int n,k,i,j,p,q;
	int a[1000],b[1000];
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
                   b[i]=a[i];
	}
	for(j=0;j<n;j++){
		for(p=0;p<n;p++){
			if(p!=j){
				if(a[j]+b[p]==k){
					q=1;
				}
			}
		}
	}
	if(q==1){
		my_printf("yes\n");
	}else{
		my_printf("no\n");
	}
}





