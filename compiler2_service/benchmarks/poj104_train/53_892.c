#define NUM_ITER 7974

#include <header.h>

int main_bench() {
	int n,sz[350],szy[350],a,m;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	szy[0]=sz[0];
	m=1;
	for(int k=1;k<n;k++){
		a=0;
		for(int j=0;j<m;j++){
			if(sz[k]!=szy[j]){
				a++;
			}
		}
		if(a==m){
			m++;
			szy[m-1]=sz[k];
		}
	}
	for(int q=0;q<m-1;q++){
		my_printf("%d,",szy[q]);
	}
	my_printf("%d",szy[m-1]);
	return 0;
}
