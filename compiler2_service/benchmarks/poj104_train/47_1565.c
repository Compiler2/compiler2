#define NUM_ITER 54440

#include <header.h>

int main_bench(){
	int n,i=0;
	int z[100];
	my_scanf("%d",&n);
	while(i<n){
		my_scanf("%d",&z[i]);
		i++;
	}
	i=1;
	while(i<=n){
		if(i<n){
		    my_printf("%d ",z[n-i]);
		}else{
			my_printf("%d",z[n-i]);
		}
		i++;
	}
	return 0;
}