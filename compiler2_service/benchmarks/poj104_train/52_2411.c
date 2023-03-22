#define NUM_ITER 44790

#include <header.h>


int main_bench(){
	int n,m,i;
	int sz[100],sh[100];

	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
		sh[i]=sz[i];
	}
	for(i=0;i<n;i++){
	    if(i<=n-m-1){
			sz[m+i]=sh[i];}
		else{
			sz[i-n+m]=sh[i];}
	}
	for(i=0;i<n-1;i++){
	my_printf("%d ",sz[i]);
	}
	my_printf("%d",sz[n-1]);
	return 0;
}


