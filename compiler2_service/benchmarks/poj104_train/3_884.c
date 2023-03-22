#include <header.h>

int main_bench(){
	int n,k,i,j,f=0,s=0,a[10000];
	my_scanf("%d%d",&n,&k);
	for(i=1;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(f==0){
		 for(j=0;j<i;j++){
			if(a[i]+a[j]==k){
				my_printf("yes\n");
				f=1;
				s=1;
				break;
			}
		 }
		}
	}
	if(s==0){
		my_printf("no\n");
	}
	return 0;
}