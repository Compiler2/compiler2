#include <header.h>

int main_bench(){
	int n,k,i,j,a,e,m;
	int sz[1000];
	my_scanf("%d",&n);
        my_scanf("%d",&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&(sz[i]));
	}
	a=0;
	for(i=0;i<n-1;i++){
		e=sz[i];
		for(j=i+1;j<n;j++){
			m=sz[j]+e;
			if(m==k){
				a=1;
			}
			if(a==1) 
				break;
		}
	}
	if(a==0){
		my_printf("no");
	}
	if(a==1){
		my_printf("yes");
	}
	return 0;
}
