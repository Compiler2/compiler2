#define NUM_ITER 6343

#include <header.h>

int main_bench(){
	int sz[500];
	int i,n,j,a=0;
    my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d", &(sz[i]));
	}
	for(i=0;i<n;i++){
		if(sz[i]%2==1)
		if(a<sz[i])
			a=sz[i];
	}
	for(j=1;j<a;j+=2){
		for(i=0;i<n;i++){
			if(j==sz[i])
				my_printf("%d,",j);
		}
    }
	my_printf("%d",a);
	return 0;
}

