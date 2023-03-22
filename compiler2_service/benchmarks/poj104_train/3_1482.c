#include <header.h>

int main_bench()
{
	int n,k,t,i,a[1000];
	int s=0;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<=n-1;i++){
		my_scanf("%d ",&a[i]);
	}
	for(i=0;i<=n-1;i++){
		for(t=i+1;t<=n-1;t++){
			if((a[i]+a[t])==k){
				s+=1;
			}else{
				s+=0;
			}
		}
	}
	if(s==0){
		my_printf("no");
	}else{
		my_printf("yes");
	}
	return 0;
}
