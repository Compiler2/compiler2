#define NUM_ITER 54088

#include <header.h>

int main_bench(){
	int n,k;
	my_scanf("%d%d",&n,&k);
	int sz[1000];
	for(int i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	int p,m;
	for(m=0;m<n-1;m++){
		for(p=m+1;p<n;p++){
			if(k==sz[m]+sz[p])
			break;
		}
		if(p==n)
			continue;
		else if(p<n&&k==sz[m]+sz[p]){
			my_printf("yes");
			break;
		}
	}
	if(m==n-1)
		my_printf("no");
	return 0;
}