#define NUM_ITER 5320

#include <header.h>

int main_bench()
{
	int n,e,sz[100];
	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	for(int k=1;k<=n;k++){
	for(int i=0;i<n-k;i++){
		e=sz[i];
		sz[i]=sz[i+1];
		sz[i+1]=e;
	}
	}
	for(int j=0;j<n;j++){
		if(j<n-1)
			my_printf("%d ",sz[j]);
		else
			my_printf("%d",sz[j]);
	}
	return 0;
}
