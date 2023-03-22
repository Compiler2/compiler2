#define NUM_ITER 5276

#include <header.h>

int main_bench(){
	int n,i,p,sum,m,k;
	sum=1;
	int a[1000],b[1000];
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(p=0;p<n;p++){
		for(i=0;i<n;i++){
			if(b[p]+a[i]==k){
				m=0;
			}
			else{
				m=1;
			}
			sum*=m;
		}
	}
	if(sum==0){
		my_printf("yes");
	}
	else{
		my_printf("no");
	}
	return 0;
}
