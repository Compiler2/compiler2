#include <header.h>

int main_bench(){
	int i;
	int sz[100];
	int n,m;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n-m;i++){
		my_scanf("%d",&sz[m+i]);
	}
	for(i=0;i<m;i++){
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<n-1;i++){
		my_printf("%d ",sz[i]);
	}
	my_printf("%d",sz[n-1]);
	return 0;
}
