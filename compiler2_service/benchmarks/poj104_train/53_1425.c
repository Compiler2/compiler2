#define NUM_ITER 6267

#include <header.h>

int main_bench(){
	int n,a[300],i,k,want=-1;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(k=0;k<n-1;k++){
		for(i=k+1;i<n;i++){
			if(a[k]==a[i]){
				a[i]=0;
			}
		}
	}
	for(i=0;i<n;i++){
		if(want==-1){
			my_printf("%d",a[i]);
			want=0;
		}else{
		if(a[i]!=0){
			my_printf(",%d",a[i]);
		}
		}
	}
	return 0;
}
			