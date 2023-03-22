#define NUM_ITER 33491

#include <header.h>

int main_bench()
{
	int n,i,as,bs,pj;
	int a[200],b[200];
	my_scanf("%d",&n);
	as=0,bs=0,pj=0;
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
	}
	
	for(i=0;i<n;i++){
		if(a[i]==b[i]){
			pj=pj+1;
		}
		if(a[i]==0&&b[i]==1){
			as=as+1;
		}
		if(a[i]==1&&b[i]==2){
			as=as+1;
		}
		if(a[i]==2&&b[i]==0){
			as=as+1;
		}
		if(b[i]==0&&a[i]==1){
			bs=bs+1;
		}
		if(b[i]==1&&a[i]==2){
			bs=bs+1;
		}
		if(b[i]==2&&a[i]==0){
			bs=bs+1;
		}
	}
	if(as>bs){
		my_printf("A");
	}
	if(as<bs){
        my_printf("B");
	}
	if(bs==as){
		my_printf("Tie");
	}
	return 0;
}
