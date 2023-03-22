#define NUM_ITER 6911

#include <header.h>


int main_bench(){
	int n;
	my_scanf("%d",&n);
	int sz[50000][2];
	int r=0,t=0;
	int szz[10000]={0};
	for(int i=0;i<n;i++){
		my_scanf("%d %d",&sz[i][0],&sz[i][1]);
		if(i>=1){
			if(sz[i][1]>sz[r][1]){
				r=i;
			}
			if(sz[i][0]<sz[t][0]){
				t=i;
			}
		}
	}
	for(int k=0;k<n;k++){
		for(int p=sz[k][0]*2;p<=2*sz[k][1];p++){
			szz[p]=1;
		}
	}
	for(int b=sz[t][0]*2;b<=2*sz[r][1];b++){
		if(szz[b]==0){
			my_printf("no");
			break;
		}else if(b==2*sz[r][1]){
			my_printf("%d %d",sz[t][0],sz[r][1]);
		}
	}

	
	return 0;
}