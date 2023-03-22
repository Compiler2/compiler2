#define NUM_ITER 573

#include <header.h>


int main_bench(){
	int sz[100][100];
	int n,m,i,j,k;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	for(j=0;j<m;j++){
		for(k=0;;k++){
			if(k>=n||j-k<0){
				break;
			}
			else{
				my_printf("%d\n",sz[k][j-k]);
			}
		}
	}
	for(i=1;i<n;i++){
		for(k=0;;k++){
			if(i+k>n-1||m-1-k<0)
				break;
			else
				my_printf("%d\n",sz[i+k][m-1-k]);
		}
	}
	return 0;
}
