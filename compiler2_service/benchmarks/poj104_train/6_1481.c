#define NUM_ITER 31

#include <header.h>

int main_bench(){
	int sz[100][100],m,n,k,i,j,q,s;
	my_scanf("%d",&k);
	int*sum
		=(int*)malloc(sizeof(int)*k);
	s=0;
	
	for(q=0;q<k;q++){
		sum[q]=0;
		my_scanf("%d%d",&m,&n);
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				my_scanf("%d",&sz[i][j]);
			}
		}
	
		for(i=0;i<n;i++){
			sum[q]+=sz[0][i];
		}
		for(i=0;i<m;i++){
			sum[q]+=sz[i][0];
		}
		for(i=0;i<n;i++){
			sum[q]+=sz[m-1][i];
		}
		for(i=0;i<m;i++){
			sum[q]+=sz[i][n-1];
		}
		sum[q]-=sz[0][0];
		sum[q]-=sz[0][n-1];
		sum[q]-=sz[m-1][0];
		sum[q]-=sz[m-1][n-1];
		
		my_printf("%d\n",sum[q]);
		
	}
	
	free(sum);
return 0;

}