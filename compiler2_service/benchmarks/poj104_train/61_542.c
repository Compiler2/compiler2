#define NUM_ITER 6436

#include <header.h>

int f(int n);
int main_bench(){
	int a0,a1,i,n,l,sz[100];
	my_scanf("%d",&l);
	for(i=0;i<l;i++){
		my_scanf("%d",&n);

		sz[i]=f(n);
	}
	for(i=0;i<l;i++){
		my_printf("%d\n",sz[i]);
	}
	return 0;
}
int f(int n){
	int a0,a1,a2,i,r;
	a0=1;
	a1=1;
	r=0;
	if(n==1){
		return 1;
	}
	else if(n==2){
		return 1;
	}
	else if(n>2){
	for(i=0;i<n-2;i++){
		a2=a0+a1;
		r=a2;
		a0=a1;
		a1=a2;
	}
	}
	return r;
}