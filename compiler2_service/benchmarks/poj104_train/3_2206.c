#define NUM_ITER 2994

#include <header.h>

int main_bench()
{
	int u[1000],v[1000];
	int i,j,n,k,a=0;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&u[i]);
	}
	for(j=0;j<n;j++){
		v[j]=u[j];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				continue;
			}else {
				if(u[i]+v[j]==k){
					a++;
				}else{
					continue;
				}
			}
		}
	}
	if(a==0){
		my_printf("no");
	}else{
		my_printf("yes");
	}
	return 0;
}

