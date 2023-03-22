#define NUM_ITER 3619

#include <header.h>

int main_bench(){
	int n,k,i,t,e,j,h=0;
	int a[1000];
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(t=0;t<n-i-1;t++){
			if(a[t]<a[t+1]){
				e=a[t+1];
				a[t+1]=a[t];
				a[t]=e;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				continue;
			}
			if(a[i]+a[j]==k){
				h++;
			}
		}
	}
	if(h==0){
		my_printf("no");
	}else{
		my_printf("yes");
	}
	return 0;
}