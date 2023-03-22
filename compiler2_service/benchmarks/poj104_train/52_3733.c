#define NUM_ITER 39492

#include <header.h>

int main_bench(){
	int sz[400];
	int j,n,m,i;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	for(j=0;j<n;j++){
		sz[200+j]=sz[j];
	}

	for(i=0;i<m;i++){
		sz[i]=sz[200+n-m+i];
	}
	for(i=0;i<n-m;i++){
		sz[m+i]=sz[200+i];
	}

	my_printf("%d",sz[0]);
	for(i=1;i<n;i++){
		my_printf(" %d",sz[i]);
	}
	return 0;
}


