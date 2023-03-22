#define NUM_ITER 31

#include <header.h>

int main_bench(){
	int a[100][100],sum[100];
	int k,m,n,i,j,t;

	my_scanf("%d",&k);
	for(t=0;t<k;t++){
		my_scanf("%d %d",&m,&n);
		sum[t]=0;
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				my_scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<m;i++){
			sum[t]+=a[i][0]+a[i][n-1];
		}
		for(j=0;j<n;j++){
			sum[t]+=a[0][j]+a[m-1][j];
		}
		sum[t]-=a[0][0]+a[0][n-1]+a[m-1][0]+a[m-1][n-1];	
	}
	
	for(t=0;t<k;t++){
		if(t!=k-1){
			my_printf("%d\n",sum[t]);
		}
		else{
			my_printf("%d",sum[t]);
		}
	}

	return 0;
}

