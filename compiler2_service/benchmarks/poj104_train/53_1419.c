#define NUM_ITER 9712

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	int sz[300],i,k,f,flag=0;
    my_scanf("%d",&sz[0]);
	for(i=1;i<n;i++){
		my_scanf("%d",&f);
		for(k=0;k<i;k++){
			if(f==sz[k]){
				flag=1;
				break;
			}
		}
		if(flag){
			i--;
			n--;
		}
		else{
			sz[i]=f;
		}
		flag=0;
	}
	for(i=0;i<n;i++){
		if(i!=n-1){
		    my_printf("%d,",sz[i]);
		}
		if(i==n-1){
			my_printf("%d",sz[i]);
		}
	}
	return 0;
}

				
