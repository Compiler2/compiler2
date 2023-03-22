#include <header.h>

int main_bench(){
	int n,k,a[1000],i,x,s;
	s=1;
	my_scanf("%d",&n);
	my_scanf("%d",&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(x=1;x<=n-1-i;x++){
			if(a[i]+a[i+x]==k){
				s=s*0;
			}
		}
	}
	if(s==0){
		my_printf("yes");
	}
	else{
		my_printf("no");
	}
	return 0;
}