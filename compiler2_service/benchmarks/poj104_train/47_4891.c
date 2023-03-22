#include <header.h>

int main_bench(){
	int n,i,e;
	my_scanf("%d",&n);
	int sz[101];
	i=0;e=n-1;
	while(i<n){
		my_scanf("%d",&sz[i]);
		i++;
	}
	while(e>0&&e<n){
		my_printf("%d ",sz[e]);
		e--;	
}
my_printf("%d",sz[e]);

	return 0;
}
